#include "mainwindow.h"
#include <ui_mainwindow.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);   // Инициализируем графическую сцену
    scene->setItemIndexMethod(QGraphicsScene::NoIndex); // настраиваем индексацию элементов
    ui->graphicsView->resize(600,600);  // Устанавливаем размер graphicsView
    ui->graphicsView->setScene(scene);  // Устанавливаем графическую сцену в graphicsView
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);    // Настраиваем рендер
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground); // Кэш фона
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    connect(scene,SIGNAL(changed(QList<QRectF>)),SLOT(update()));
   // myPicture = new MyGraphicView();
    // Добавляем узлы
    graph.addNode(1, "Node 1", "This is the first node");
    graph.addNode(2, "Node 2", "This is the second node");
    graph.addNode(3, "Node 3", "This is the third node");

    // Добавляем связи
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);

    // Удаляем узел и одну из связей
    //graph.removeNode(3); // Удалит и связь 2-3
    //graph.removeEdge(1, 2); // Удаление оставшейся связи

    // Снова добавляем узлы и связи для демонстрации
    graph.addNode(3, "Node 3", "This is the third node, re-added");
    //graph.addEdge(1, 3);

    graph.printGraph();
        // Сохраняем граф в JSON и выводим результат
    std::string graph_str = graph.saveToJson();
    writeStringToFile("../pisia", graph_str, ".json");
    //graph.saveToJson();
}
void MainWindow::writeStringToFile(const std::string& filename, const std::string& str, const std::string&postfix) {
//    std::cout << str << std::endl;
    std::string  cur_file = filename + postfix;
    std::ofstream fileStream(cur_file);
    if (!fileStream) {
        std::cout << "Ошибка при открытии файла: " << cur_file << std::endl;
        return;
    }

    fileStream << str;
    fileStream.close();
}

static int randomBetween(int low, int high)
{
    return (qrand() % ((high + 1) - low) + low);
}

void MainWindow::on_pushButton_clicked()
{
    kol++;
    QString name =  ui->name->text();//имя
    QString fname = ui->fname->text();//описание
    auto it = del.find(name); // проверка на повторение имя
    if(it != del.end()){
        QMessageBox::warning(this, "Ошибка", "Узел с именем " + name + " уже существует");
        return;
    }
    MoveItem *item = new MoveItem(0, kol, name, fname);        // Создаём графический элемента
    item->setPos(randomBetween(0, 500),    // Устанавливаем случайную позицию элемента
                 randomBetween(0,500));
    scene->addItem(item); // Добавляем элемент на графическую сцену
    del[name] = item;
    item->del = &par;
}


// удаляем все элементы
void MainWindow::on_pushButton_2_clicked()
{
    for(auto iter = del.begin(); del.end()!= iter; iter++){
        delete *iter;
    }
    del.clear();
    par.clear();
    kol = 0;
}

//удаляем один узел
void MainWindow::on_Button_del_clicked()
{
    QString del_st = ui->del_uz->text();
    QVector<QString> delp = get_mas(del_st);
    //ищем все ребра связанные с ним и удаляем их
    for(int k = 0; k < delp.size(); k++){
    auto it = del.find(delp[k]);
    if (it != del.end()){
        for(auto i = par.begin(); i != par.end(); i++){
            for(auto j = i->begin(); j != i->end(); j++){
                if(j->first == del[delp[k]]){
                    i->erase(j);
                }
            }
        }
        par[del[delp[k]]].clear();
        auto ite = par.find(del[delp[k]]);
        par.erase(ite);
        delete del[delp[k]]; // удаляем сам узел
        del.erase(it);
    }
    }
    qDebug() << del_st;
}

//(добавляем/изменяем вес)
void MainWindow::on_But_add_clicked()
{
    QString first = ui->add_1->text();//первый узел
    QString second = ui->add_2->text();//второй узел
    QString len = ui->len->text();//вес
    if (len.size() == 0){//если вес не задается, он по умолчанию один
        len = "1";
    }
    for (int i = 0; i < len.size(); i++){ //проверка что в весе число
        if( len[i] < '0' || len[i] > '9'){
            QMessageBox::warning(this, "Ошибка", "ВВедено не число в вес");
            return;
        }
    }
    int len_int = len.toInt(); // "123"->123 string to int
    auto it = del.find(first);
    auto it1 = del.find(second);
    if (it ==  del.end() || it1 ==  del.end()){ // Есть ли такие узлы
        QMessageBox::warning(this, "Ошибка", "Не найдены узлы");
        return;
    }
    //Проверка на сущ. ребра. Если есть то изменяем вес, если нет то добавляем
    for (auto iter = par[del[first]].begin(); iter != par[del[first]].end(); iter++){
        if (iter->first == del[second]){
            iter->second = len_int;
            break;
        }
    }
    for (auto iter = par[del[second]].begin(); iter != par[del[second]].end(); iter++){
        if (iter->first == del[first]){
            iter->second = len_int;
            return;
        }
    }
    par[del[first]].append({del[second], len_int});
    par[del[second]].append({del[first], len_int});

}

//удаление ребра
void MainWindow::on_but_del_reb_clicked()
{
    QString first = ui->del_1->text();
    QString second = ui->del_2->text();
    auto it = del.find(first);
    auto it1 = del.find(second);
    if (it ==  del.end() || it1 ==  del.end()){//проверка на сущ. узлов
        return;
    }
    bool f = false;
    // Удаление ребра, если нет его, то будет сообщение
    for (auto iter = par[del[first]].begin(); iter != par[del[first]].end(); iter++){
        if (iter->first == del[second]){
            par[del[first]].erase(iter);
            f = true;
            break;
        }
    }
    for (auto iter = par[del[second]].begin(); iter != par[del[second]].end(); iter++){
        if (iter->first == del[first]){
            par[del[second]].erase(iter);
            f = true;
            break;
        }
    }
    if(!f){
        QMessageBox::warning(this, "Ошибка", "Нет ребра:(");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

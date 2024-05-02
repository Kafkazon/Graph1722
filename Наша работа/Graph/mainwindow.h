#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <fstream>
#include "graph.h"
#include <QMessageBox>
#include <QGraphicsScene>
#include <QWidget>
#include "moveitem.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextCodec>
#include <iostream>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void writeStringToFile(const std::string& filename, const std::string& str, const std::string&postfix);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_Button_del_clicked();

    void on_But_add_clicked();

    void on_but_del_reb_clicked();

    void on_but_save_clicked();

    void on_but_change_clicked();

    void on_but_down_clicked();


private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    Graph graph;
    int kol = 0;
};
#endif // MAINWINDOW_H

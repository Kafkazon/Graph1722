
#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label_8;
    QLineEdit *name;
    QLabel *label_9;
    QLineEdit *fname;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Button_del;
    QLineEdit *del_uz;
    QPushButton *but_change;
    QLabel *label_11;
    QLineEdit *old;
    QLabel *label_12;
    QLineEdit *new_2;
    QLabel *label_13;
    QLineEdit *new_fname;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *But_add;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *add_1;
    QLabel *label_2;
    QLineEdit *add_2;
    QLabel *label_3;
    QLineEdit *len;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *but_del_reb;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *del_1;
    QLabel *label_5;
    QLineEdit *del_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *but_save;
    QLabel *label_6;
    QLineEdit *save;
    QPushButton *but_down;
    QLabel *label_7;
    QLineEdit *down;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(934, 708);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        name = new QLineEdit(centralwidget);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout->addWidget(name);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        fname = new QLineEdit(centralwidget);
        fname->setObjectName(QString::fromUtf8("fname"));

        horizontalLayout->addWidget(fname);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        Button_del = new QPushButton(centralwidget);
        Button_del->setObjectName(QString::fromUtf8("Button_del"));

        horizontalLayout_4->addWidget(Button_del);

        del_uz = new QLineEdit(centralwidget);
        del_uz->setObjectName(QString::fromUtf8("del_uz"));

        horizontalLayout_4->addWidget(del_uz);

        but_change = new QPushButton(centralwidget);
        but_change->setObjectName(QString::fromUtf8("but_change"));

        horizontalLayout_4->addWidget(but_change);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_4->addWidget(label_11);

        old = new QLineEdit(centralwidget);
        old->setObjectName(QString::fromUtf8("old"));

        horizontalLayout_4->addWidget(old);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_4->addWidget(label_12);

        new_2 = new QLineEdit(centralwidget);
        new_2->setObjectName(QString::fromUtf8("new_2"));

        horizontalLayout_4->addWidget(new_2);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_4->addWidget(label_13);

        new_fname = new QLineEdit(centralwidget);
        new_fname->setObjectName(QString::fromUtf8("new_fname"));

        horizontalLayout_4->addWidget(new_fname);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        But_add = new QPushButton(centralwidget);
        But_add->setObjectName(QString::fromUtf8("But_add"));

        horizontalLayout_6->addWidget(But_add);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        add_1 = new QLineEdit(centralwidget);
        add_1->setObjectName(QString::fromUtf8("add_1"));

        horizontalLayout_5->addWidget(add_1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        add_2 = new QLineEdit(centralwidget);
        add_2->setObjectName(QString::fromUtf8("add_2"));

        horizontalLayout_5->addWidget(add_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        len = new QLineEdit(centralwidget);
        len->setObjectName(QString::fromUtf8("len"));

        horizontalLayout_5->addWidget(len);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        but_del_reb = new QPushButton(centralwidget);
        but_del_reb->setObjectName(QString::fromUtf8("but_del_reb"));

        horizontalLayout_3->addWidget(but_del_reb);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        del_1 = new QLineEdit(centralwidget);
        del_1->setObjectName(QString::fromUtf8("del_1"));

        horizontalLayout_2->addWidget(del_1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        del_2 = new QLineEdit(centralwidget);
        del_2->setObjectName(QString::fromUtf8("del_2"));

        horizontalLayout_2->addWidget(del_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        but_save = new QPushButton(centralwidget);
        but_save->setObjectName(QString::fromUtf8("but_save"));

        horizontalLayout_7->addWidget(but_save);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        save = new QLineEdit(centralwidget);
        save->setObjectName(QString::fromUtf8("save"));

        horizontalLayout_7->addWidget(save);

        but_down = new QPushButton(centralwidget);
        but_down->setObjectName(QString::fromUtf8("but_down"));

        horizontalLayout_7->addWidget(but_down);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        down = new QLineEdit(centralwidget);
        down->setObjectName(QString::fromUtf8("down"));

        horizontalLayout_7->addWidget(down);


        verticalLayout->addLayout(horizontalLayout_7);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 934, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\320\267\320\265\320\273", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        fname->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\222\321\201\320\265", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\225\321\201\320\273\320\270 \320\262\321\213 \321\205\320\276\321\202\320\270\321\202\320\265 \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276, \321\202\320\276 \320\267\320\260\320\277\320\270\321\210\320\270\321\202\320\265 \320\270\321\205 \321\207\320\265\321\200\320\265\320\267 \320\267\320\260\320\277\321\217\321\202\321\203\321\216 \320\261\320\265\320\267 \320\277\321\200\320\276\320\261\320\265\320\264\320\276\320\262", nullptr));
        Button_del->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\203\320\267\320\265\320\273\321\214", nullptr));
        but_change->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\203\320\267\320\265\320\273", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\320\276\320\265", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\276\320\265", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        But_add->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214/\320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\240\320\265\320\261\321\200\320\276", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "1 \320\262\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        add_1->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "2 \320\262\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\201", nullptr));
        but_del_reb->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\240\320\265\320\261\321\200\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "1 \320\262\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "2 \320\262\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        but_save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260", nullptr));
        but_down->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

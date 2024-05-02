#ifndef MYGRAPHICVIEW_H
#define MYGRAPHICVIEW_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItemGroup>
#include <QTimer>


// Расширяем класс QGraphicsView
class MyGraphicView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit MyGraphicView(QWidget *parent = 0);
    ~MyGraphicView();


private:
private:
};

#endif // MYGRAPHICVIEW_H

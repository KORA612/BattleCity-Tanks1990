//#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "MyRect.h"
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    //scene
    QGraphicsScene * scene = new QGraphicsScene();

    //item
    MyRect * rect = new MyRect();
    rect->setRect(0,0,100,100);
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    scene->addItem(rect);

    //view
    QGraphicsView * view = new QGraphicsView(scene) ;
    view->show();

    return a.exec();
}




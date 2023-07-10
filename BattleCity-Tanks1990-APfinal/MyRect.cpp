#include "MyRect.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QDebug>
#include "Bullet.h"



void MyRect::keyPressEvent(QKeyEvent *event)
{
    int pixelMovement = 10;
    qDebug() << "Key!" ;

    switch(event->key())
    {
    case Qt::Key_Up:
        if(pos().y() > 0)
        setPos(x(),y()-pixelMovement);
        break;
    case Qt::Key_Down:
        if(pos().y() + rect().height() < 600)
        setPos(x(),y()+pixelMovement);
        break;
    case Qt::Key_Left:
        if(pos().x() > 0)
        setPos(x()-pixelMovement,y());
        break;
    case Qt::Key_Right:
        if(pos().x() + rect().width() < 800)
        setPos(x()+pixelMovement,y());
        break;
    case Qt::Key_K:
        qDebug() << "Bullet!" ;
        Bullet * bullet = new Bullet();
        bullet->setPos(x()+rect().width()/2-bullet->rect().width()/2,y());
        scene()->addItem(bullet);
        break;
    }

}

#include "Bullet.h"
#include <QTimer>
#include <QObject>
#include <QGraphicsScene>
#include <QDebug>

Bullet::Bullet()
{
    setRect(0,0,10,50);

    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void Bullet::move()
{
    setPos(x(),y()-10);
    if (pos().y() + rect().height() < 0 ){
        scene()->removeItem(this);
        delete this;
        qDebug() << "~Bullet!" ;
    }
}

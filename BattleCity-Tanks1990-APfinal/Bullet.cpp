#include "Bullet.h"
#include "Game.h"
#include <QTimer>
#include <QObject>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>

extern Game * game ;

Bullet::Bullet(QGraphicsItem * parent): QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/bbb.jpg"));

    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(10);
}

void Bullet::move()
{
    //Collision
    QList<QGraphicsItem *> colliding_items = collidingItems();
    int n = colliding_items.size();
    for (int i=0 ; i<n ;i++)
    {
        if(typeid(*(colliding_items[i])) == typeid(Bullet))
        {
            game->score->increase();

            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
    }


    // Move
    int pixelMovement = 10;
    setPos(x(),y()-pixelMovement);
    if (pos().y() + 50 < 0 ){
        scene()->removeItem(this);
        delete this;
        qDebug() << "~Bullet!" ;
    }
}

#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QDebug>
#include "Bullet.h"

Player::Player(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/images/t.png"));
}

void Player::keyPressEvent(QKeyEvent *event)
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
        if(pos().y() + 100 < 600)
            setPos(x(),y()+pixelMovement);
        break;
    case Qt::Key_Left:
        if(pos().x() > 0)
            setPos(x()-pixelMovement,y());
        break;
    case Qt::Key_Right:
        if(pos().x() + 100 < 800)
            setPos(x()+pixelMovement,y());
        break;
    case Qt::Key_K:
        qDebug() << "Bullet!" ;
        Bullet * bullet = new Bullet();
        bullet->setPos(x()+50-5,y()-20);
        scene()->addItem(bullet);
        break;
    }

}

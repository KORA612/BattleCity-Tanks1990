#include "Wall.h"

Wall::Wall(QObject *parent) :QObject(parent), QGraphicsItem()
{

}

Wall::~Wall()
{

}

QRectF Wall::boundingRect() const
{
    return QRectF(0, 0, 51, 51);
}

void Wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QImage texture_image(":images/bricks.png");

    painter->drawImage(QRectF(0, 0, 51, 51), texture_image);

    Q_UNUSED(option);
    Q_UNUSED(widget);
}

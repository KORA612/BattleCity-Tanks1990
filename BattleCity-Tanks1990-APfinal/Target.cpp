#include "Target.h"
Target::Target(QObject *parent) : QObject(parent), QGraphicsItem()
{
    angle = 0;
    setRotation(angle);
}

Target::~Target()
{

}

QRectF Target::boundingRect() const
{
    return QRectF(-20, -25, 40, 50);
}

QPainterPath Target::shape() const
{
    QPainterPath path;
    path.addEllipse(boundingRect());
    return path;
}

void Target::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{painter->setBrush(Qt::black);
    painter->drawEllipse(-5,-5,10,10);
    painter->setBrush(Qt::red);
    painter->drawRect(-5,-1,10,2);
    painter->drawRect(-1,-5,2,10);

    Q_UNUSED(option);
    Q_UNUSED(widget);
}



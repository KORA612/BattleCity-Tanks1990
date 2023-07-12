#include "Game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QBrush>
#include <QImage>
//#include <QMediaPlayer>

Game::Game(QWidget *parent)
{
    //Scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setBackgroundBrush(QBrush(QImage(":/images/gbg.png")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    //Player
    player = new Player();
    player->setPos(width()/2 - 50 , height() -100-10);

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    scene->addItem(player);

    //Score
    score = new Score();
    scene->addItem(score);

    //Health
    health = new Health();
    health->setPos(health->x(),health->y()+25);
    scene->addItem(health);

    //Music
    //QMediaPlayer * music = new QMediaPlayer();

    show();
}

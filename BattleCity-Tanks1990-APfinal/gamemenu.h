#ifndef GAMEMENU_H
#define GAMEMENU_H

#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QHBoxLayout>
#include <QScreen>
#include <QApplication>
#include <QKeyEvent>


class GameMenu : public QWidget
{
    Q_OBJECT
public:
    explicit GameMenu(QWidget *parent = 0);

signals:
    void play();
    void newgame();
    void addtank();
    void exit();
};

#endif // GAMEMENU_H

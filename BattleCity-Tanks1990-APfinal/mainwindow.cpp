#include "mainwindow.h"
#include <QPalette>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowIcon(QIcon(":/icons/images/icon.png"));

    game_window = new Game();

    Menu* menu = new Menu();
    this->setCentralWidget(menu);

    connect(menu, &Menu::play, this, &MainWindow::Play);
    connect(menu, &Menu::addtank, this, &MainWindow::addtank);
    connect(menu, &Menu::exit, this, &MainWindow::Exit);

    connect(game_window, &Game::openmenu, this, &MainWindow::openMenu);
    connect(game_window,&Game::GameOver,this,&MainWindow::slotGameOver);
}

MainWindow::~MainWindow()
{
    //delete ui;
}

void MainWindow::Play() {

    this->setCentralWidget(game_window);
    this->setFocusPolicy(Qt::StrongFocus);
}

void MainWindow::addtank() {

}

void MainWindow::Exit() {
    QCoreApplication::quit();
}

void MainWindow::openMenu() {
    GameMenu* gamemenu = new GameMenu();
    this->setCentralWidget(gamemenu);

    //connect(gamemenu, &GameMenu::play, this, &MainWindow::Play);
    connect(gamemenu, &GameMenu::newgame, this, &MainWindow::NewGame);
    connect(gamemenu, &GameMenu::addtank, this, &MainWindow::addtank);
    connect(gamemenu, &GameMenu::exit, this, &MainWindow::Exit);
}

void MainWindow::closeMenu() {
    this->setCentralWidget(game_window);
}

void MainWindow::NewGame() {
    game_window = new Game();
    this->setCentralWidget(game_window);

    connect(game_window, &Game::openmenu, this, &MainWindow::openMenu);
    connect(game_window,&Game::GameOver,this,&MainWindow::slotGameOver);
}
void MainWindow::slotGameOver(int ID){
    QWidget *game_over=new QWidget();
    this->setCentralWidget(game_over);

    QVBoxLayout* vlayout = new QVBoxLayout();
    QHBoxLayout* hlayout = new QHBoxLayout();
    QPushButton* newgame = new QPushButton("New Game");
    QPushButton* exit = new QPushButton("Exit");

    game_over->setLayout(vlayout);
    hlayout->addWidget(newgame);
    hlayout->addWidget(exit);
    hlayout->setContentsMargins(100, 100, 0, 10);



    if(ID==1){

        QLabel *label1 = new QLabel();
        label1->setFrameStyle(QFrame::Plain | QFrame::Box);
        label1->setStyleSheet("background-color:rgb(68, 70, 171);");
        label1->setText("Player1 Won!!!! Congratulations!!!");
        label1->setAlignment(Qt::AlignTop | Qt::AlignCenter);

        QFont font1= label1->font();
        font1.setPixelSize(75);
        label1->setFont(font1);

        label1->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        vlayout->addWidget(label1);

    }else if(ID==2){

        QLabel *label2 = new QLabel();
        label2->setFrameStyle(QFrame::Plain | QFrame::Box);
        label2->setStyleSheet("background-color:rgb(68, 70, 171);");
        label2->setText("Player2 Won!!!! Congratulations!!!");
        label2->setAlignment(Qt::AlignTop | Qt::AlignCenter);

        QFont font2= label2->font();
        font2.setPixelSize(75);
        label2->setFont(font2);

        label2->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        vlayout->addWidget(label2);

    }
    vlayout->addLayout(hlayout);

    connect(newgame, &QPushButton::clicked, this, &MainWindow::NewGame);
    connect(exit, &QPushButton::clicked, this, &MainWindow::Exit);

}

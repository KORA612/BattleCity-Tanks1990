#include "Mapcreator.h"
#include <QScreen>
#include <QApplication>
#include <QDebug>

MapCreator::MapCreator(const std::string& name_of_file) : file_name(name_of_file) {}

void MapCreator::setFile(const std::string& name_of_file) {
    file_name = name_of_file;
}

void MapCreator::CreateMap(QGraphicsScene *scene){
    std:: ifstream file(file_name);

    int w = QGuiApplication::screens().at(0)->availableGeometry().width() / 2;
    int h = QGuiApplication::screens().at(0)->availableGeometry().height() / 2;

    qreal wall_size = 51;

    qDebug() << file.is_open();
    if (file.is_open())
    {
        int row = 0; // rows
        int col = 0; //columns
        int ch;

        while ((ch = file.get()) != EOF)
        {
            if ((char)ch == '\n') {
                ++row;
                col = 0;
            }

            if ((char)ch != '0') {
                ++col;
            }

            if ((char)ch == '1') {

                Wall* wall = new Wall(scene);
                scene->addItem(wall);
                wall->setPos((col - 1) * wall_size -w, row * wall_size-h + 75 + 1);
            }
            /*
            else if (ch == '2') {

                Wall* wall = new Wall(scene);
                wall->is_box = 1;
                scene->addItem(wall);
                wall->setPos((col - 1) * wall_size -w, row * wall_size-h + 75 + 1);
            }
            else if (ch == '3') {

                Wall* wall = new Wall(scene);
                wall->is_box = 1;
                scene->addItem(wall);
                wall->setPos((col - 1) * wall_size -w, row * wall_size-h + 75 + 1);
            }
            */
        }

        file.close();
    }
}

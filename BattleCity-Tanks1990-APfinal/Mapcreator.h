#ifndef MAPCREATOR_H
#define MAPCREATOR_H

#include <QVector>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QStringList>
#include <QGraphicsView>
#include <QGraphicsItem>
#include "Wall.h"
#include <fstream>
#include <iostream>
#include <string>

class MapCreator {
public:
    MapCreator() = default;
    MapCreator(const std::string&);

    void setFile(const std::string&);

    void CreateMap(QGraphicsScene *scene);

private:
    std::string file_name;
};

#endif // MAPCREATOR_H

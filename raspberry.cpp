#include "raspberry.h"
#include <QString>
#include<QGraphicsScene>
#include<stdlib.h>

Raspberry::Raspberry(QGraphicsItem *parent) : Figure(QString(":/graphics/raspberry.png"))
{
    int rand_x = rand() % 800;
    int rand_y = rand() % 600;
    setPos(rand_x, rand_y);
    skaluj(30);
   // scene()->addItem(this);

}

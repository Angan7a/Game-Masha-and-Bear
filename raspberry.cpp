#include "raspberry.h"
#include <QString>
#include<QGraphicsScene>

Raspberry::Raspberry(QGraphicsItem *parent) : Figure(QString(":/graphics/raspberry.png"))
{

    setPos(500,100);
    skaluj(30);
   // scene()->addItem(this);

}

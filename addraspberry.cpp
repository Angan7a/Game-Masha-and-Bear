#include "addraspberry.h"
#include "raspberry.h"
#include <QGraphicsScene>

AddRaspberry::AddRaspberry(QGraphicsItem *parent) : QGraphicsPixmapItem(parent)
{

}

void AddRaspberry::makeRaspberry()
{
    Raspberry * rasp = new Raspberry();
    scene()->addItem(rasp);

}

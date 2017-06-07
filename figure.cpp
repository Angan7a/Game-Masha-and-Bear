#include "figurea.h"



Figure::Figure(QString fileName, QGraphicsItem *parent) : QGraphicsPixmapItem(parent)
{
    figure = new QPixmap(fileName);

    QPixmap figur = figure->scaledToHeight(100);
    setPixmap(figur);
}

void Figure::skaluj(int a)
{
    QPixmap f =  figure->scaledToHeight(a);
    setPixmap(f);
}

void Figure::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Up) {
        setPos(x(), y() - 5);
    } else if (event->key() == Qt::Key_Down) {
        setPos(x(), y() + 5);
    }else if (event->key() == Qt::Key_Left) {
        setPos(x() - 5, y());
    }else if (event->key() == Qt::Key_Right) {
        setPos(x() + 5, y());
    }
}

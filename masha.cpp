#include "masha.h"
#include <stdlib.h>
#include <QTimer>


Masha::Masha(QString fileName) : QObject(), Figure(fileName)
{
    QTimer *timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(20);

}

void Masha::move()
{
    int random_number = rand() % 5;
    if (random_number%2 == 0) {
        setPos(x() + random_number*sign_x,y());
    } else {
        setPos(x(), y()+random_number*sign_y);
    }

    if (y() > 500) sign_y = -1;
    if (y() < 0) sign_y = 1;
    if (x() > 700) sign_x = -1;
    if (x() < 0) sign_x = 1;
}

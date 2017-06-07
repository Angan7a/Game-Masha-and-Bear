#ifndef MASHA_H
#define MASHA_H

#include <QString>
#include <QGraphicsItem>
#include "figurea.h"
#include <QObject>

class Masha : public QObject, public Figure
{
    Q_OBJECT
    int sign_x = 1;
    int sign_y = 1;
public:
    Masha(QString fileName);
public slots:
    void move();
};

#endif // MASHA_H

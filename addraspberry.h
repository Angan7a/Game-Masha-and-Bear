#ifndef ADDRASPBERRY_H
#define ADDRASPBERRY_H

#include <QGraphicsPixmapItem>
#include <QObject>


class AddRaspberry : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    AddRaspberry(QGraphicsItem *parent=0);
public slots:
    void makeRaspberry();
};

#endif // ADDRASPBERRY_H

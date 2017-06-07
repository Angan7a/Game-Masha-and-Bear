#ifndef FIGURE_H
#define FIGURE_H

#include <QGraphicsPixmapItem>
#include <QKeyEvent>

class Figure : public QGraphicsPixmapItem
{
    QPixmap *figure;
public:
    Figure(QString fileName, QGraphicsItem *parent=0);
    void skaluj(int a);
    void keyPressEvent(QKeyEvent *event);

};

#endif // FIGURE_H

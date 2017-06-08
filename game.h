#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include <QGraphicsView>

namespace Ui {
class Game;
}

class Game : public QGraphicsView
{
    Q_OBJECT

public:
    QGraphicsScene * scene;
    explicit Game(QWidget *parent = 0);
    ~Game();



};

#endif // GAME_H

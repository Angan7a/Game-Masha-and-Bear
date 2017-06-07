#include "game.h"
#include "ui_game.h"
#include <QGraphicsScene>
#include "figurea.h"
#include "masha.h"
#include "raspberry.h"
#include <QTimer>

Game::Game(QWidget *parent)
    //:    QMainWindow(parent),

{
    QGraphicsScene * scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    Figure * masha = new Masha(QString(":/graphics/Masha.png"));
    Figure * bear = new Figure(QString(":/graphics/Bear.png"));
    Figure * raspberry = new Raspberry();
    masha->setPos(100, 100);
    masha->setFlag(QGraphicsItem::ItemIsFocusable);
    masha->setFocus();
    scene->addItem(masha);

    bear->setPos(200,100);
    bear->skaluj(300);
    bear->setFlag(QGraphicsItem::ItemIsFocusable);
    bear->setFocus();
    scene->addItem(bear);

    scene->addItem(raspberry);

    QTimer * timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout()),

    setScene(scene);
}

Game::~Game()
{

}

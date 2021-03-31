#include "Health.h"
#include "QGraphicsTextItem"
#include <QFont>
#include <QDebug>
#include <QLabel>
#include <QGraphicsScene>
#include <Game.h>
#include <QTimer>

extern Game * game;
extern QTimer * timer;

Health::Health(QGraphicsPixmapItem *parent) : QGraphicsPixmapItem(parent){
    //initialize the variables
    health = 3;

    //draw heart
   setPixmap(QPixmap(":/images/Zelda-Health3.png"));



}

void Health::decrease()
{
    health--;
    //gotta update the picture inside of the function increase
    if(health == 2)
    {
        setPixmap(QPixmap(":/images/Zelda-Health2.png"));
    }
    if(health == 1)
    {
        setPixmap(QPixmap(":/images/Zelda-Health.png"));

    }
    if(health <= 0)
    {
        this->hide();
        game->hide();
        timer->stop();
        game->close();
    }
    //this is how you will end the game

}

void Health::increase()
{
    //only allowed a max of 3 lives
   if(health < 3)
   {
       health++;
   }

   if(health == 2)
   {
       setPixmap(QPixmap(":/images/Zelda-Health2.png"));
   }

   if(health == 3)
   {
       setPixmap(QPixmap(":/images/Zelda-Health3.png"));

   }


}

int Health::getHealth()
{
    return health;
}

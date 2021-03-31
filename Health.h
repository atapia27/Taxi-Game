#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>

class Health: public QGraphicsPixmapItem{
public:
    Health (QGraphicsPixmapItem * parent = 0);
    void decrease();
    void increase();
    int getHealth();
private:
    int health;
};

#endif // HEALTH_H

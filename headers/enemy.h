#ifndef ENEMY_H
#define ENEMY_H

#include <QWidget>
#include <QTimer>
#include <QPushButton>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class enemy : public QPushButton
{
    Q_OBJECT
public:
    //enemy(QGraphicsItem * parent=0);

    explicit enemy(QWidget *parent = nullptr);
    void moveEnemy();

private:
    QTimer *movementTimer;
    int dx;
    int dy;

    enum Direction { UP, RIGHT, DOWN, HIDDEN };
    Direction currentDirection;
};

#endif // ENEMY_H

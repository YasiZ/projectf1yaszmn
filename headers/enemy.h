#ifndef ENEMY_H
#define ENEMY_H

#include <QWidget>
#include <QTimer>
#include <QPushButton>

class enemy : public QPushButton
{
    Q_OBJECT
public:
    explicit enemy(QWidget *parent = nullptr);
    void moveEnemy();

private:
    QTimer *movementTimer;
    int dx;
    int dy;

    enum Direction { UP, RIGHT, DOWN, HIDDEN };
    Direction currentDirection;

signals:
};

#endif // ENEMY_H

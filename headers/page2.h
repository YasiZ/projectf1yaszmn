#ifndef PAGE2_H
#define PAGE2_H

#include <QMainWindow>
#include <QWidget>
#include <QGroupBox>
#include <QTimer>
#include "enemy.h"

namespace Ui {
class page2;
}

class page2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit page2(QWidget *parent = nullptr);
    ~page2();
    void createEnemy();

private slots:
    void on_pushButton_clicked();


private:
    Ui::page2 *ui;
    QTimer *enemyTimer;

};

#endif // PAGE2_H

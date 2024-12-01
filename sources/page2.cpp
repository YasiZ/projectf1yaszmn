#include "page2.h"
#include "ui_page2.h"
#include <QGroupBox>
#include <QApplication>
#include <QTimer>
#include <QDebug>

page2::page2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::page2)
{
    ui->setupUi(this);
    ui->groupBox->hide();

    // enemy *enemy1 = new enemy(ui->centralwidget);
    // enemy1->setGeometry(35, 280, 30, 30);

    // for (int i = 0; i < 5; i++)
    // {
    //     enemy *enemy1 = new enemy(ui->centralwidget);
    //     enemy1->setGeometry(30, 280 + 50*i, 30, 30);
    // }

    // enemy *enemy2 = new enemy(ui->centralwidget);
    // enemy2->setGeometry(100, 100, 60, 60);

    enemyTimer = new QTimer(this);
    connect(enemyTimer, &QTimer::timeout, this, &page2::createEnemy);
    enemyTimer->start(rand()%1000);

}
    int count = 0;
void page2::createEnemy(){

    qDebug() << "createEnemy called";
    enemy *enemy1 = new enemy(ui->centralwidget);
    enemy1->setGeometry(35, 280, 30, 30);
    enemy1->show();
    count ++;
    if(count > 5){
        enemyTimer->stop();
    }
}


page2::~page2()
{
    delete ui;
}

void page2::on_pushButton_clicked()
{
    // int r;
    // r = rand()%15;
    // switch (r) {
    // case 0:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(160,90,40,40);
    //     break;
    // case 1:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(260,90,40,40);
    //     break;
    // case 2:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(370,90,40,40);
    //     break;
    // case 3:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(480,90,40,40);
    //     break;
    // case 4:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(160,160,40,40);
    //     break;
    // case 5:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(260,160,40,40);
    //     break;
    // case 6:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(370,160,40,40);
    //     break;
    // case 7:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(480,160,40,40);
    //     break;
    // case 8:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(160,230,40,40);
    //     break;
    // case 9:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(260,230,40,40);
    //     break;
    // case 10:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(370,230,40,40);
    //     break;
    // case 11:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(480,230,40,40);
    //     break;
    // case 12:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(160,290,40,40);
    //     break;
    // case 13:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(260,290,40,40);
    //     break;
    // case 14:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(370,290,40,40);
    //     break;
    // case 15:
    //     ui->groupBox->show();
    //     ui->groupBox->setGeometry(480,290,40,40);
    //     break;
    // default:
    //     break;
    // }
}


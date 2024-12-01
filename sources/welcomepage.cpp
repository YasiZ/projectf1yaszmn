#include "welcomepage.h"
#include "ui_welcomepage.h"
#include "page2.h"

welcomePage::welcomePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::welcomePage)
{
    ui->setupUi(this);
}

welcomePage::~welcomePage()
{
    delete ui;
}

void welcomePage::on_pushButton_clicked()
{
    page2 *w2 = new page2;
    w2->setWindowTitle("game page");
    w2->show();

}


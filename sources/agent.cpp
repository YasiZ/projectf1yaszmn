#include "agent.h"
#include "ui_agent.h"

agent::agent(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::agent)
{
    ui->setupUi(this);
}

agent::~agent()
{
    delete ui;
}

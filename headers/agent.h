#ifndef AGENT_H
#define AGENT_H

#include <QWidget>

namespace Ui {
class agent;
}

class agent : public QWidget
{
    Q_OBJECT

public:
    explicit agent(QWidget *parent = nullptr);
    ~agent();

private:
    Ui::agent *ui;
};

#endif // AGENT_H

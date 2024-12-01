#ifndef WELCOMEPAGE_H
#define WELCOMEPAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class welcomePage;
}
QT_END_NAMESPACE

class welcomePage : public QMainWindow
{
    Q_OBJECT

public:
    welcomePage(QWidget *parent = nullptr);
    ~welcomePage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::welcomePage *ui;
};
#endif // WELCOMEPAGE_H

#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Helloworld; }
QT_END_NAMESPACE

class Helloworld : public QWidget
{
    Q_OBJECT

public:
    Helloworld(QWidget *parent = nullptr);
    ~Helloworld();

private slots:

    void on_pbHelloWorld_clicked();

private:
    Ui::Helloworld *ui;
};
#endif // HELLOWORLD_H

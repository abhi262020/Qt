#include "helloworld.h"
#include "ui_helloworld.h"
#include <QMessageBox>

Helloworld::Helloworld(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Helloworld)
{
    ui->setupUi(this);
}

Helloworld::~Helloworld()
{
    delete ui;
}

void Helloworld::on_pbHelloWorld_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Hello World!");
    msgBox.exec();

}


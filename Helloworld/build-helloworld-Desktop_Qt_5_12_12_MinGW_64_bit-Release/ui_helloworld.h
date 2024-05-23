/********************************************************************************
** Form generated from reading UI file 'helloworld.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Helloworld
{
public:
    QPushButton *pbHelloWorld;

    void setupUi(QWidget *Helloworld)
    {
        if (Helloworld->objectName().isEmpty())
            Helloworld->setObjectName(QString::fromUtf8("Helloworld"));
        Helloworld->resize(400, 300);
        pbHelloWorld = new QPushButton(Helloworld);
        pbHelloWorld->setObjectName(QString::fromUtf8("pbHelloWorld"));
        pbHelloWorld->setGeometry(QRect(120, 110, 151, 71));

        retranslateUi(Helloworld);

        QMetaObject::connectSlotsByName(Helloworld);
    } // setupUi

    void retranslateUi(QWidget *Helloworld)
    {
        Helloworld->setWindowTitle(QApplication::translate("Helloworld", "Helloworld", nullptr));
        pbHelloWorld->setText(QApplication::translate("Helloworld", "Click me! :)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Helloworld: public Ui_Helloworld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H

/********************************************************************************
** Form generated from reading UI file 'counterDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTERDLG_H
#define UI_COUNTERDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Counter
{
public:
    QPushButton *button_stop;
    QLCDNumber *lcdNumber;
    QPushButton *button_start;
    QSlider *slider;
    QSlider *lcdslider;

    void setupUi(QWidget *Counter)
    {
        if (Counter->objectName().isEmpty())
            Counter->setObjectName(QString::fromUtf8("Counter"));
        Counter->resize(400, 300);
        button_stop = new QPushButton(Counter);
        button_stop->setObjectName(QString::fromUtf8("button_stop"));
        button_stop->setGeometry(QRect(220, 220, 161, 71));
        lcdNumber = new QLCDNumber(Counter);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 40, 301, 91));
        button_start = new QPushButton(Counter);
        button_start->setObjectName(QString::fromUtf8("button_start"));
        button_start->setGeometry(QRect(10, 220, 151, 71));
        slider = new QSlider(Counter);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setGeometry(QRect(10, 150, 371, 16));
        slider->setOrientation(Qt::Horizontal);
        lcdslider = new QSlider(Counter);
        lcdslider->setObjectName(QString::fromUtf8("lcdslider"));
        lcdslider->setGeometry(QRect(10, 190, 371, 16));
        lcdslider->setOrientation(Qt::Horizontal);

        retranslateUi(Counter);

        QMetaObject::connectSlotsByName(Counter);
    } // setupUi

    void retranslateUi(QWidget *Counter)
    {
        Counter->setWindowTitle(QApplication::translate("Counter", "Counter", 0, QApplication::UnicodeUTF8));
        button_stop->setText(QApplication::translate("Counter", "STOP", 0, QApplication::UnicodeUTF8));
        button_start->setText(QApplication::translate("Counter", "START", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Counter: public Ui_Counter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTERDLG_H

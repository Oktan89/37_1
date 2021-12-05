#include "calculator.h"
#include <qstring.h>

void Calcwindow::setupLineEdit(QLineEdit *answer, QLineEdit *number_1, QLineEdit *number_2)
{
    _answer = answer;
    _number_1 = number_1;
    _number_2 = number_2;
}

void Calcwindow::add()
{
   
    qlonglong num1 = _number_1->text().toInt();
    qlonglong num2 = _number_2->text().toInt();   
    _answer->setText(QString::number(num1 + num2));
    
}

void Calcwindow::sub()
{
    qlonglong num1 = _number_1->text().toInt();
    qlonglong num2 = _number_2->text().toInt();   
    _answer->setText(QString::number(num1 - num2));
}

void Calcwindow::mult()
{
    qlonglong num1 = _number_1->text().toInt();
    qlonglong num2 = _number_2->text().toInt();   
    _answer->setText(QString::number(num1 * num2));
}

void Calcwindow::div()
{
    qlonglong num1 = _number_1->text().toInt();
    qlonglong num2 = _number_2->text().toInt();   
    _answer->setText(QString::number(num1 / num2));
}
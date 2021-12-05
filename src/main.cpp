#include <iostream>
#include <QApplication>
#include "calculator.h"
#include "ui_calc.h"

int main(int argc, char ** argv)
{
    QApplication app(argc, argv);
    Calcwindow window(nullptr);
    Ui::CalcWindow calc;
    calc.setupUi(&window);
    window.setupLineEdit(calc.answer, calc.number_1, calc.number_2);
    window.show();
    
    return app.exec();
}
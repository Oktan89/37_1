#pragma once
#include <QMainWindow>
#include <QLineEdit>

class Calcwindow : public QMainWindow
{
    Q_OBJECT
public:
    QLineEdit *_answer = nullptr;
    QLineEdit *_number_1 = nullptr;
    QLineEdit *_number_2 = nullptr;
    
    Calcwindow(QWidget *parent) : QMainWindow(parent) {}
    void setupLineEdit(QLineEdit *answer, QLineEdit *number_1, QLineEdit *number_2);

public slots:
    void add();
    void sub();
    void mult();
    void div();
    
};



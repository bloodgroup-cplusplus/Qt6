#include "widget.h"

#include<QPushButton>
#include<QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
    // we want to create our push button
    QPushButton *btn1 = new QPushButton();
    btn1->setText("Click One");

    QPushButton *btn2 = new QPushButton();
    btn2->setText("Click Two");

    QPushButton *btn3 = new QPushButton();
    btn3->setText("Click Three");

    QPushButton *btn4 = new QPushButton();
    btn4->setText("click Four");

    // we can align our widets and button in row and columns
    QGridLayout * grid = new QGridLayout ( this);
    grid->addWidget(btn1,0,0);
    grid->addWidget(btn2,0,1);
    grid->addWidget(btn3,1,0);
    grid->addWidget(btn4, 1,1);
}

Widget::~Widget()
{
}


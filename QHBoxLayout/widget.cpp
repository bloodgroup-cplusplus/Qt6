#include "widget.h"
#include<QPushButton>
#include<QHBoxLayout>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("Click one");
    btn1->move(100,100);
    QPushButton *btn2 = new QPushButton(this);
    btn2->setText("Click Two");
    btn2->move(100,200);

    QPushButton *btn3 = new QPushButton(this);
    btn3->setText("Click Three");
    btn3->move(100,300);

    QPushButton *btn4 = new QPushButton(this);
    btn4->setText("Click four");
    btn4->move(100,400);


    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addSpacing(20);
    hbox->addWidget(btn1);
    hbox->addSpacing(20);
    hbox->addWidget(btn2);
    hbox->addSpacing(20);
    hbox->addWidget(btn3);
    hbox->addSpacing(20);
    hbox->addWidget(btn4);
        // hbox layout is the parent for all the widgets
    // we need to add this to the window

}

Widget::~Widget()
{
}


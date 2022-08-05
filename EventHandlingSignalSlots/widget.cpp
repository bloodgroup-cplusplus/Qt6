#include "widget.h"
#include<QPushButton>
#include<QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{


    QPushButton  *btn = new QPushButton();
    btn->setText("Change Text");
    btn->setFont(QFont("Times",14));
    connect(btn, SIGNAL (clicked()), this, SLOT(changeText()));
    label = new QLabel();
    label->setText("Hello");


    QHBoxLayout * hbox =  new QHBoxLayout(this);
    hbox->addWidget(btn);
    hbox->addWidget(label);

}


Widget::~Widget()

{
}

void Widget::changeText()
{
    // by clicking of the button we want to change the text of this label
    // after we click the button
    label->setText("This is changed");
    label->setFont(QFont("Times",15));
    label->setStyleSheet("color:red");
    // we have our slots now we have to connect with the signal


}


#include "widget.h"
#include<QVBoxLayout>
#include<QPushButton>
#include<QFont>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout(this);
   qlcd = new QLCDNumber();
    qlcd->setStyleSheet("background-color:yellow");
    QPushButton *btn = new QPushButton();
    btn->setText("Random Generator");
    btn->setFont(QFont("Times",9));
    btn->setStyleSheet("background-color:green");

    connect(btn, SIGNAL(clicked()), this, SLOT(randGenerator()) );
    vbox->addWidget(qlcd);
    vbox->addWidget(btn);

}

Widget::~Widget()
{
}

void Widget::randGenerator()
{
    int randnumber = arc4random();
    qlcd->display(randnumber);


}


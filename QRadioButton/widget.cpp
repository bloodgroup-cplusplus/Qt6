#include "widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLabel>
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    // we need to create our radio button after
    rad1 = new  QRadioButton(this);
    rad1->setText("C++");
    rad1->setFont(QFont("Times", 14));
    // set icon to the radio button
    rad1->setIcon(QIcon(":/image/c++.png"));
    // let's add an action size
    rad1->setIconSize(QSize(40,40));

    connect(rad1, SIGNAL(toggled(bool)), this, SLOT(changeRad()));

    rad2 = new QRadioButton(this);
    rad2->setText("Python3");
    rad2->setFont(QFont("Times",14));
    //set icon on the radio button
    rad2->setIcon(QIcon(":/image/Python-logo-notext.svg.png"));
    rad2->setIconSize(QSize(40,40));

    connect(rad2, SIGNAL(toggled(bool)), this, SLOT(changeRad()));

    rad3 = new QRadioButton(this);
    rad3->setText("Java");
    rad3->setFont(QFont("Times",14));
    // set icon on the radio button
    rad3->setIcon(QIcon(":/image/Java_programming_language_logo.svg.png"));
    rad3->setIconSize(QSize(40,40));

    connect(rad3, SIGNAL(toggled(bool)), this, SLOT(changeRad()));
    // we want to create a vbox layout
    // we want instead of hbox
    // we want to add label in our vobx layout

    label->setFont(QFont("Times", 15));

    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->addWidget(label);
    // after creating vbox
    // we want to add our labels in here
    // let's add the hbox to the vbox
    hbox->addWidget(rad1);


    hbox->addWidget(rad1);
    hbox->addWidget(rad2);
    hbox->addWidget(rad3);
    vbox->addLayout(hbox);
}

Widget::~Widget()
{
}

void Widget::changeRad()
{
    if(rad1->isChecked())
    {
        label->setText("C++");
    }
    if(rad2->isChecked())
    {
        label->setText("Python");
    }
    else
    {
        label->setText("Java");
    }

}


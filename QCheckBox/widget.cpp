#include "widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>
// switched on or off
// whenever check box is changed it sends a signal
// mostly check box is used when youw ant users to select mreo than one example

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout();
    check1 = new QCheckBox();
    check1->setText("C++");
    check1->setIcon(QIcon(":/images/c++.png"));
    check1->setIconSize(QSize(40,40));
    connect(check1, SIGNAL(stateChanged(int)), this, SLOT(changeCheck()));

    hbox->addWidget(check1);


    check2 = new QCheckBox();
    check2->setText("Python");
    check2->setIcon(QIcon(":/images/python.png"));
    check2->setIconSize(QSize(40,40));

    connect(check2, SIGNAL(stateChanged(int)), this, SLOT(changeCheck()));

    hbox->addWidget(check2);

    check3 = new QCheckBox();
    check3->setText("Java");
    check3->setIcon(QIcon(":/images/Java.png"));
    check3->setIconSize(QSize(40,40));
    connect(check3, SIGNAL(stateChanged(int)), this, SLOT(changeCheck()));


    hbox->addWidget(check3);
    label = new QLabel("Hello");

    label->setFont(QFont("Tmes",15));

    QVBoxLayout * vbox = new QVBoxLayout(this);

    // add layout to the vbox.
    vbox->addWidget(label);

    vbox->addLayout(hbox);


}

Widget::~Widget()
{
}

void Widget::changeCheck()
{
    QString value = "";
    if(check1->isChecked())
    {
        value = check1->text();
    }
    if(check2->isChecked())
    {
        value = check2->text();
    }

    if(check3->isChecked())
    {
        value = check3->text();
    }

    label->setText("You have selected :"+ value);
}


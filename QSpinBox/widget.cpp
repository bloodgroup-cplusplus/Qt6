#include "widget.h"
#include <QHBoxLayout>
#include<QLabel>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout * hbox = new QHBoxLayout(this);
    QLabel *label = new QLabel();
    label->setText("Laptop price: ");
    label->setFont(QFont("Helvetica",9));

    price= new QLineEdit();
    price->setFont(QFont("Helvetica",9));

    spinBox = new QSpinBox();
    spinBox->setFont(QFont("Helvetica",9));

    connect(spinBox, SIGNAL(valueChanged()),this, SLOT(changeSpin()));
    hbox->addWidget(label);
    hbox->addWidget(price);
    hbox->addWidget(spinBox);
    hbox->addWidget(total);

}



Widget::~Widget()
{
}

void Widget::changeSpin()
{
    int myprice = price->text().toInt();
    int totalNumber = spinBox->value() * myprice;
    total->setText(QString::number(totalNumber));

}


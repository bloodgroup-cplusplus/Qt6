#include "widget.h"
#include <QPushButton>
#include<QMenu>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QPushButton");

    resize(500,300);
    QPushButton * btn = new QPushButton(this);
    btn->setText("Click");
    btn->setGeometry(100,100,130,130);
    btn->setFont(QFont("Times",15));
    btn->setIcon(QIcon("images/icon.png"));
    btn->setIconSize(QSize(36,36));
    // add popup menu
    // first we need to create our menu
    QMenu *menu = new QMenu(this);
    btn->setFont(QFont("Times",14));
    menu->setStyleSheet("background-color:yellow");
    menu->addAction("Copy");
    menu->addAction("Paste");
    menu->addAction("Cut");
    btn->setMenu(menu);
}

Widget::~Widget()
{
}


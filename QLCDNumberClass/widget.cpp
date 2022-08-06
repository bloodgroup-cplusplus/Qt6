#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    setWindowTitle("QLCDNumber");
    resize(300,300);
    QHBoxLayout * hbox = new QHBoxLayout(this);
    qlcd = new QLCDNumber();
    hbox->addWidget(qlcd);
    // we could set stylesheet for the lcd

    qlcd->setStyleSheet("background-color : lightblue");

    QTimer * timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this, SLOT(showTime()));
    timer->start(1000);



}

Widget::~Widget()
{
}

void Widget::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if((time.second()%2)==0)
    {
        text[2]= ' ';
    }
    qlcd->display(text);

}


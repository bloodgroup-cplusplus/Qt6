#include "widget.h"
#include<QLabel>
#include<QMovie>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QLabel");
    resize(500,300);

   /*QLabel *label = new QLabel(this);
    label->setText("this is the text");
    label->move(100,100);
    label->setFont(QFont("Sanserif",14));
    label->setGeometry(100,100,300,300); //x,y,z
    label->setStyleSheet("color:red");*/

    // adding images
    QLabel * label = new QLabel();
    label->setPixmap(QPixmap(":/images/photo.jpeg"));


    // we can also add gif using the following code
   // QLabel *label = new QLabel(this);
   // QMovie *movei = new QMovie(":/images/photo.jpeg");
    //label->setMovie(movie);
   // movie->start();
}


Widget::~Widget()
{
}


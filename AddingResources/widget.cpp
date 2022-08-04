#include "widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Hello world");
    setFixedWidth(500);
    setFixedHeight(300);
   // setStyleSheet("background-color:red");
    //setWindowOpacity(0.4);
    // we are going to use qicon to set an icon for windows
    setWindowIcon(QIcon(": /images/photo.jpeg"));

}

Widget::~Widget()
{
}


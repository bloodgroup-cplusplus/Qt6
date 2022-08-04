#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
    setWindowTitle("Hello world");
    //resize(500,300);
    // if you don't want to resize and set fixed width
    setFixedWidth(500);
    setFixedHeight(300);
    setStyleSheet("background-color:red");
    // set opacity
    setWindowOpacity(0.4);
}

Widget::~Widget()
{
}


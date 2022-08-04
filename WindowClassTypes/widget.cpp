#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    setWindowTitle("Hello World");
    setFixedWidth(500);
    setFixedHeight(300);
    setStyleSheet("background-color:red");
    setWindowOpacity(0.4);
   setWindowIcon(QIcon(":/images/FZRpGGQXoAAKtYm.jpeg"));
   // suppose we would like to add a status bar on the widget
   // let's try this
   // but first include the status bar in  the header file
   // we cannot use status bar inside a widget class
   // we also cannot use a menu bar
   // so if we wanted to do so we aer going to use qmain window instead of qwindow

   statusBar()->showMessage("Hello World I am status bar");
}

Widget::~Widget()
{

}


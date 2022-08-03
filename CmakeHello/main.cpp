#include "widget.h"

#include <QApplication>
// there is one QApplication object


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    // we are entering main event loop and returns when exit is called
    return a.exec();
}

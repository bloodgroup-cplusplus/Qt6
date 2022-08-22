#include "dialog.h"

#include <QApplication>
/*
 * What
 * Using QProcess to call other apps

 * Description
 * Let the os and its application work for you
 *
 * Why
 * Do not reinvent the wheel
 * Follow the DRY principles
 *
 * Example here is PING
 * PING - Hard, requires admin access, and usually a steep learning curve
 *
 * This will make people mad.. everyone wants to do things as hard as possible
 * But you would be surprised to know how common this really is !!!
 *
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec();
}

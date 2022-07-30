#include <QCoreApplication>
#include<QDebug>
#include "test.h"

/*
 What
 Templates and classes

 Why
 We can make classes templated
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test<int> intCalc;
    qInfo() <<intCalc.add(4,3);
    Test<double> dCalc;
    qInfo() << dCalc.add(6.09, 3.04);

    Test<QString> sCalc;
    qInfo() << sCalc.add(QString("hello"),QString("world")) ;

    return a.exec();
}

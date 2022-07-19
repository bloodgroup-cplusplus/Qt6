#include <QCoreApplication>
#include<QDebug>
#include "appliance.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Appliance machine3000;


    qInfo() <<"Cook " << machine3000.cook();
    qInfo() << "Freeze"<< machine3000.freeze();
    return a.exec();
}

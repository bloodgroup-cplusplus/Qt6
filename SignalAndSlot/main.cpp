#include <QCoreApplication>
#include "source.h"
#include "destination.h"
/*
 * What
 Connecting

 Why
 We want to connect a signal to a slot

 How
 Use the connect function

 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Source oSource;
    Destination oDestination;

    QObject::connect(&oSource, &Source::mySignal, &oDestination,&Destination::mySignal);

    oSource.test();


    return a.exec();
}

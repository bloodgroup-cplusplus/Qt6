#include <QCoreApplication>
#include "iLogger.h"
#include "simplelogger.h"
/*
 * What
 * Bridge Design Pattern
 * Description
 * Decouple an abstraction from its implementation so that the two can vary
 * independently.
 * Note interfaces make this simple
 *
 * Why
 * We want code reuse
 * This is a design choice
 * Done before the original classes are created
 *
 * Example
 * Logger with interfaces
 * You have probably seen this dozens of times
 * the adapter pattern is done after the classes aer created
 * the bridge pattern is done before the classes are created
 * the bridge patten is meant two differnt pattens and make them similar
 * interfaces make this simple
*we have the ilogger interface as the bridge but we do not have any
*classes that use it
*now it does not matter what type of class uses it
*one thing you should always ask before designing your classes is how are these going to interconnect
* i futureproof my application
* usually the point where there is an io we stop logging
*/

void log(iLogger *logger)
{
    for(int i = 0; i<5;i++)
    {
        logger->write("Item"+ QString::number(i));

    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SimpleLogger slog;
    log(&slog);

    return a.exec();
}

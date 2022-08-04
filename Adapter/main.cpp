#include <QCoreApplication>
#include "filelogger.h"
#include "logadapter.h"

// STRUCTURAL PATTERNS ARE OF 6 TYPES
//Adapter
//Bridge
//Composite
//Decorator
//Facade
//Flyweight
// we will first learn about the adapter design pattern
// these are structrual objects
// how application functions
// adapter design patterns is old design  pattern
// wrap an existing class with a new interface
// Description of Adapter
// For after an implementation has need developed Lets classes with incompatible interfaces
// work together
// why
// sometimes things change and you want to reuse old code adapter makes things
// work after they're designed
// Example
//Logger
// https://sourcemaking.com/design_patterns/adapter
// we have this file logger that works as expected

// but now we want to make some changes
// we want to write the data and time in front of this message
// we could do it diffent way
// we need to reuse this old way
// so we make a new adapter class

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString message = "hello from legacy sysetm";
    FileLogger logger;
    //logger.write(message);
    LogAdapter adapter;
    adapter.setLogger(&logger);
    adapter.write("Hello new system"); return a.exec();
}

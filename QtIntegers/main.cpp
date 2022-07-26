#include <QCoreApplication>
/* what - > Qt int types
 * Why  - > Make ints universal
 * How -> let's see
*/

/* It is infurating as not every OS treates integers same way this gets crazy in embedded systesm.
 * Qt uses typedef - remake a type (make an alias for something)

*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qint8 value8 = 0;
    qint8 value16  = 0;
    qint8 value32 = 0;
    qint8 value64 = 0;
    qintptr valueptr = 0;

    qInfo() <<"Value of 8 is "<<value8;
    qInfo() <<"value 16"<<value16;
    qInfo() <<"value32"<<value32;
    qInfo() <<"value64"<<value64;
    qInfo() <<"valueptr"<< valueptr;

    // qt objects are consistent types .


    return a.exec();
}

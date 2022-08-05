#include <QCoreApplication>

/*
 * What
 * We want to take a deep look at QT's base class
 * we have signal and slot
 * a signal would emit something and the slot would emit something
 * that happens because of the Q_OBJECT macro
 * that's the service providide by The Meta-Object system .
 * The Q-object macro is used to enable the meta object properties
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}

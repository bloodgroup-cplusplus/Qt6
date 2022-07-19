#include <QCoreApplication>
#include "animal.h"
#include "canine.h"
#include "feline.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal animal ;
    Canine dog;
    Feline cat;

    return a.exec();
}
// c++ can do multiple inheritence but qt doesn't
// but we can achieve this using interfaces.

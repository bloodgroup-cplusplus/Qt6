#include <QCoreApplication>
#include<QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"


/* What
 * Static cast
 *
 *Why
 *The static_cast operator performs a nonpolymorphic cast.
 *For example, it can be uesd to cast a base class pointer into a derived class pointer.
 *
 *
 *How
 *Use the connect function
 *
 *
*/


void testDrive(Car *obj)
{
    obj->drive();
    obj->stop();
}

void race(Racecar * obj)
{
    obj->drive();
    obj->stop();
    obj->gofast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Car * car = new Car(&a);
    qInfo() << car;
    race((Racecar*) car); // this typecasting works but it is very much error prone we have no way of testing if it worked
    // instead of doing this do this
    Racecar * racer = static_cast<Racecar*> (car);
    qInfo() <<racer;
    race(racer);

    // remember a cat has nothing to do with car
   // Feline*catcar = static_cast<Feline*>(racer); this is not allowed cause static_cast is just for parent child relationship


    return a.exec();
}

#include <QCoreApplication>
#include "Interfaces/iFlying.h"
#include "Interfaces/iMachine.h"
#include "helicopter.h"
#include "bird.h"

/* What
 Interface segregation principle

 Define

 Clients should not be forced to depend upon interfaces that they do not use

 Why

 Adding too much to an interface could cause un-needed code, and undesirable effects.


 Example
 Flying things

*/
void trip (iFlying *obj)
{
    obj->fly();
    obj->land();
}


void checkFuel(iMachine *obj)
{
    obj->refuel();

}

void testBird()
{
    Bird bird;
    trip(&bird);
}

void testHelicopter()
{
    Helicopter helicopter;
    trip(&helicopter);
    checkFuel(&helicopter);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    testBird();
    testHelicopter();



    return a.exec();
}

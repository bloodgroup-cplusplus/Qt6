#include <QCoreApplication>
#include<QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

/*What
 * Dynamic casting

 Why
 Casting is complex, we want to make it easier

 The dynamic_cast operator ensures that if you convert a pointer to class A
 to ap ointer to class B, the object of type A pointed to by the former belongs to
 an object of type B or a class derived from B as a base class subobject

 How
 https://en.cpprefrence.com/w/cpp/language/dynamic_cast

*/


void testDrive (Car * obj)
{
    obj->drive();
    obj->stop();

}


void race( Racecar *obj)
{
    obj->drive();
    obj->stop();

    obj->gofast();
}
// THE MAIN CONCEPT OF DYNAMIC CASTING COMES WHEN WE WANT TO PUT A RACECAR INTO TEST DRIVE.

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   // Racecar*player1 = new Racecar(&a);
    //testDrive(player1); // this is implicit conversion that could go bad


    // correct way to do dynamic casting
    // we control the infromation
    // let's dynamically cast it
   // Car *obj = dynamic_cast<Car*>(player1); // whenever we are doing dynamic casting always read it backwards
    // like in this case we are taking player1 which is a racecar object dynamically casting it into a car  and shove it
    // into the *obj variable on the lhs
    // always read it backwared
    // using dynamic cast we now can explicitly convert
    // we can also make sure that the cast works
    // Dynamic cast is going to cast using an insane logic

    //if(obj) testDrive(obj);
    // the example above is an example of dynamic cat


    Feline *cat = new Feline(&a);
    Car * catcar = dynamic_cast<Car*>(cat);
    if (catcar) testDrive(catcar);

    return a.exec();
}

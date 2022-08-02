#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include"feline.h"
#include<iostream>

/* what - Reinterpret cast
 * Why
 * Unlike static_cast, but like const_cast, the reinterpret_cast expression does not compile to any CPU instructions.
 * (except when converting between integers and pointers or on obscure architecture where pointer representation depends
 * on its type)
 *
 * It is purely a compile-time dierective which instructs the compiler to treat the expression as if it had a new type.
 * It's like saying take any building and convert it into a helicoper
 * completely reinterpreting the object from one form to another .
 *
 *
 * How
 * Remember:
 *      The implicit cast is C++ doing it for us
 *      The explicit cast is us telling C++ what to do
 *      The static_cast operator performs a nonpolymorphic cast.it does not change anything in memory
 *      The dynamic_cast operator ensures inheritence is good. requires inheritence
 *      The reinterpret_cast operator types to convert it to a differnt type
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
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // create a racecar
    Racecar * player1 = new Racecar(&a);

    // Cast the racecar to its base
    Car * obj = dynamic_cast<Car*>(player1);
    if(obj) testDrive(obj);

    // Cast it without chang it
    Racecar * speedster = static_cast<Racecar*> (obj);
    if(speedster) race(speedster);

    // we are going to reinterpret as a differnt type as it is little bit of brain bending

    int * pointer = reinterpret_cast<int*> (speedster); // we are trying to change speedster into an integer
    qInfo() << " Converted speedster to integerPointer " << pointer ;
    qInfo() <<"Racecar"<<speedster;
    qInfo() <<sizeof(pointer);

    Racecar * mycar = reinterpret_cast<Racecar*> (pointer);
    qInfo() <<"My cars color is "<<mycar->color;
    race(mycar);

    Feline *cat = reinterpret_cast<Feline*> (pointer);
    cat->hiss();

    return a.exec();
}

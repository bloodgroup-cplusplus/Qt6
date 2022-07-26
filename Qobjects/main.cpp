#include <QCoreApplication>
#include <QDebug>
#include "dog.h"
#include "cat.h"

/*/
 *      What
 *      QObject
 *
 *      Why
 *      Base class for everything Qt(non-template)
 *      we have talked about this a lot
 *
 *
 *      How
 *      See below
 *      review signals, Slots, MOC, macros
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat cat;
    cat.setObjectName("Ghost");


    Dog dog;
    dog.setObjectName("Fido");
    qInfo()<<"Hello ";
   // dog.chase(); // this is a slot // zero for sender as nothing was emitted .


    // when the dog barks we want to scare that cat
    // the sender is the dog

    QObject::connect(&dog, &Dog::bark,&cat,&Cat::scared);
    // we can do the actual opposite as well.
    // when the cat runs the dog is going to chase
    QObject::connect(&cat,&Cat::run, &dog, &Dog::chase);

    emit dog.bark();// emit is a special obj3ct used for qobject the cat emitted inside q object itself
    // in our build direcotry we have  macros and moc. which is created inside the build file
    //

    //this is a chicken and egg problem
    // who is going to fire first is it the dog or the cat .

    qInfo() <<"Hello again ";
    return a.exec();
}

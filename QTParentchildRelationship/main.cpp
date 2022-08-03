#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "animal.h"
/*
 *
 * What
 * Oobject has parent child relatioships
 *
 *
 *
 *  How
 *  See below
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test * parent  = new  Test(&a); // creating the parent
    // a will eventually be destroyed and when it destroys it will destroy parent for us
    parent->dog = new Animal(parent);;
    delete parent; // deleting the parent
    // when the parent is deleted
    // animal is also deleted
    // if you have no objects to give it give it to application itself .



    return a.exec();
    // a deconstrcuted
}

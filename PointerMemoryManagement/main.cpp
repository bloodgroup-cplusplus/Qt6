#include <QCoreApplication>
#include<QDebug>

/*
 *
 * What
 * Pointer memory management
 *
 * Why
 * Pointers are fast but wehave to manage them
 *
 *
 * How
 * let's see
*/

void display(QString *value)
{
    //Pointer is getting created on the stack and it is going to piont to something on the heap
    qInfo() <<"The pointer " <<value;
    qInfo() <<"The addres of the pointer " << &value;
    qInfo() <<"The data " <<*value;
}
int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    QString name = "Bryan" ;// Stack - C++ manages this

    // we are creating a pointer the pointer leaves on the stack and does not point to anything
    // if we just try to print the pointer out it prints to hex o ( 0X0) . There is not memory location to display

    QString *description = new QString("Hello pointer ");
    // wehenve r we see new it means that it is going on on the heap
    // we created it so we have to see when it is going to get destroyed


    //qInfo() << description ;
    display(description);

    delete description ;
   // if we forget to destroy it some other program in the os is going to destroy it .

    return a.exec();
}

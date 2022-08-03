#include <QCoreApplication>
#include<QDebug>
#include "test.h" /*
 * What
 * Automaitc memory management
 *
 *
 * Why
 * we want C++ to do it for us
 * more advanced  and we cover this in other courses
*/


void wow()
{
    // we are going to the standard namesapce and create a unique pointer
    // and this get into a way more advanced conversation about templates
    // do something with a specific class
    std::unique_ptr<Test> t (new Test()); // we have create this in memory
    // we don't have a delete keyword
    // this is the magic of unique pointer
    // making a unique pointer using the standard library
    // this is automatic memory management
    t->doStuff();
    // we can all the function inside the unqiue pointer
    // we have a new key workd
    // pointer is automatically delted for us
}

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    // combine the power of using the heap and computer helping us to delete the memory
    // let's see the std:: way of doing it
    qInfo() << "starting ";
    wow();
    qInfo() <<"Finished";

    return a.exec();
}

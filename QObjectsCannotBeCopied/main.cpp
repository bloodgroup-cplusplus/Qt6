#include <QCoreApplication>
/* what
 * QObject cannto be copied!
 * Why
 * Actually the memory addres defins the object - signals and slots Its common for a
 * Function to return a pointer !
 *
 *
 * How
 * It's common for a function to return a pointer .
 *
*/


void test(QObject object)  // Copy
{
    qInfo() <<&object<<Q_FUNC_INFO;
}


void testPtr(QObject * object) // Pointer
{
    qInfo() <<object<<Q_FUNC_INFO;
}
//QObject getObject()
// {
// QObject o;
// return 0; // return a copy
// }
QObject * getObject()
{
    // we are going to return a pionter
    // if we are trying to return address
    // it's going to
    QObject * o = new QObject(); // warning, creating in the heap
    return o; // this is on the stack
    //
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject * p = getObject();
    testPtr(p);
    delete p; //functions often return the pointer and you must hold the responsiblity to delte it

    return a.exec();
}

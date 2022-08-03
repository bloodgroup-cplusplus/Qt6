#include <QCoreApplication>
/*
 * what
 * Pointers versus copies
 * Why
 * pointers are fast, and we get the actual object
*/
void test(QString value)
{

    // we are on stack and this is a copy
    qInfo() <<&value<<"size:"<<value.length();
}

void testPtr(QString * value) // stack- >but pointing somewhere else
{
    // we are talking about the actual variable the pointer is the variable
    // the object still exists on memory
    qInfo() <<"pointer is pointing to "<<value<<"Size"<<value->length();
    qInfo() <<"Address is "<<&value<<"Size:" <<value->length();

}
int main(int argc, char *argv[])

{
    QCoreApplication a(argc, argv);

    QString name = "Bryan";// stack
    qInfo() <<&name<< "Size:" <<name.length();
    test (name);
    // we've avoided a copy
    // the pointer is not the object

    testPtr(&name);

    return a.exec();
}

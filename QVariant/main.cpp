#include <QCoreApplication>
#include<QVariant>
#include<QDebug>
/* What
 * QVariant
 * Why
 * Variant and unknown types - basic part of the meta system
 * the is qt putting data on top of data
 * it is called metadata
*/


void test(QVariant value) // copy friendly
{
    qInfo() <<value;

    int i = 0 ;
    bool ok = false;
    i = value.toInt(&ok); // we are going to pass that by refrence
    if(ok)
       {
        qInfo() <<"converted to INT"<<i;
    }
    else
    {
        qInfo() <<"Not an int  :";
    }
    // we are going to see if we convert this into an integer
    // both of these are wrapped in an qVariant
    // we need to take this qvariant and convert it


}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVariant value = 1;
    QVariant value2 = "hello world ";
    value2 = value2.toChar();
    // we are not using templates the wrapper is called QVariant class
    // QVariant is way way powerful
    // QML heavily uses QVariatn
    //q variant is smart enough to know what is string and what is an integer
    // it is upto you to do what to do with that datatype

    test(value);
    test(value2);

    return a.exec();
}

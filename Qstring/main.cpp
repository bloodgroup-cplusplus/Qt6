#include <QCoreApplication>
#include<QDebug>
/*
 * What->Qstring
 * why-> Qts universal string class
 * how -> see below
*/


void test( QString name)  // COPY
// qstring is not qobject
{
    qInfo() << name;
}

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    QString name = "Chad";

    // whenever something is around quotes 99% of the time it is qstring ;



    qInfo() << name ;// anything printed in quotes
    qInfo() << name.mid(1,3);// this is a zero based array

    qInfo() << name.insert(0,"Spencer . ");

    qInfo() << name.split(" ");

    // index within the little array
    int index = name.indexOf(" ");

    if (index > -1 )
    {
        qInfo() << name.remove(0,index).trimmed();
    }

    QString title = "Teacher";
    QString full = name.trimmed()+ " "+ title ;
    qInfo() << full;


    qInfo() << full.toUtf8();
    qInfo() <<full.unicode();
    test(full);
    return a.exec();
}

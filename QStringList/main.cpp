#include <QCoreApplication>

/*
 * What? QstringList
 *
 * Why ?
 *      List of strings and these ar not arrays !
 *      How
 *      let's see
*/

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    QString data = "Hello world  how are you";
    // let's make a qstring list
    QStringList  lst = data.split(" ");
    //Qstring list and qlist are diffent
    // Qstirng class inherits form QList <QString>
    // QStringList is inhereing QList


    qInfo() << lst;
    foreach( QString str, lst)
    {
        qInfo() <<str;
    }

    lst.sort(Qt::CaseInsensitive);
    qInfo() <<lst;

    // manipulate data inside the list
    // let's say we want to know we want to find a specific instance of something
    QString myvar = "hello";
    if(lst.contains(myvar))
    {
        int index = lst.indexOf(myvar); // this is a zero indexed based container
        qInfo() <<lst.value(index);
    }

    return a.exec();
}

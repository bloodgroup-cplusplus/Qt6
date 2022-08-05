#include <QCoreApplication>
// qml and qt quick is cross platform gui system
// it runs about anywhere
// it's a very complex topic
// property bindings
// the backend of QtQuick is all c++
// we set the bindings to some backend class
// to make this happen they use signals and slots
// qt property system
// used in more advanced applications with QML
// property means they are using signals and slots under the hood

#include "test.h"
#include "watcher.h"
#include <QVariant>
// this is the class which is just a variant which is an unknown
// qml doesn't have strong data typing concet
// almost everything in qml is wrapped inside QVariant

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test tester;
    Watcher destination ;
    QObject::connect(&tester, &Test::messageChanged,&destination, &Watcher::messageChanged);
    // we can set the property
    // it gets a bit confusing
    tester.setProperty("message", QVariant("Hello World"));
   tester.setMessage ("testing");

    return a.exec();
}

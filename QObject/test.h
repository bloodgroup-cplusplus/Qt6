#ifndef TEST_H
#define TEST_H

#include <QObject>
// why we need QObject
// we talked about the compilation process or
// MOC - meta object compilation
// as your programs is being complied it looks at Qt object and create meta information
// you could take q objects and google it
// qt documentation is world class
// to get this we need to add the core
// cmake is the build we are using
// qmkae is what is being used in qt 5 and before as it is their proproirorty build system
// list of all members , including inherited members
// signals and slots are main power of qt
// make dog chase the car using qobjects
// the public functions ( the public functions are available to averybody)
// your object that you created can have a children in it
// there are lot that gests added by adding qobject
// it has threading built right into it
// ~deleteLater()
// signalling garbage collectors in the background and the garbage collector deletes it later
// plugging it into an outlet
// Q_OBJECT macro  is baked right in
// the Q_OBJECT must appear in the private section of the class
//

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

signals:


public slots:
    // we can make public and private slots respectively


};

#endif // TEST_H

#include <QCoreApplication>
#include<QTcpSocket>
#include "mysocket.h"
/*
 What
 Liskov Substitution Principle

 Define
 The principle defines that objects of a superclass shall be replacable  with objects of its subclass

 Why
 Extends the Open/Closed principle - replace objects of a perent class with objects of a subclass without hindering the subclass

 Example
 TCP Sockets - Its easy to break this, and hard to detect it.
 In short - a class and function should do what it says it will do
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // this was done using the QTCPSocket rather than our custom therefore it close by itself but what if we
    // use our custom socket and do not close it ( we havent overriden the close method of QTcpSocket in our
    //mysocket .cpp file "
    //QTcpSocket socket ;
    MySocket socket;
    qInfo() <<"connecting ...";
    socket.connectToHost("voidrealms.com",80);
    socket.waitForConnected();

    qInfo() <<"Connected";  // do something while connected

    qInfo() << "closing...";

    socket.close() ;

    if(socket.isOpen()) socket.waitForDisconnected();

    qInfo() <<"Complete !";



    return a.exec();
}

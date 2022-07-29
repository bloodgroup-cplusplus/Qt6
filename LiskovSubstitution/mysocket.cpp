#include "mysocket.h"

MySocket::MySocket(QObject *parent)
    : QTcpSocket{parent}
{

}


void MySocket::close()
{
    qInfo() <<"Do something before closing....";
    // QTCPSocket::close() ; - break  things;
    QTcpSocket::close();
    // if you open resoucre w eshould close it .
}

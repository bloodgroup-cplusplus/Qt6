#include "websockethandler.h"
#include<QDebug>

WebSocketHandler::WebSocketHandler(QObject *parent)
    : QObject{parent}
{

    m_socketServer = new QWebSocketServer("DoodleDrawerServer",QWebSocketServer::NonSecureMode,this);

    connect(m_socketServer, &QWebSocketServer::newConnection, this, &WebSocketHandler::onNewSocketConnection);

    if( m_socketServer ->listen (QHostAddress::Any,8585))
    {
        qDebug() <<"Server is running";
    }


    else
    {
        qDebug () << "Sever unable to start listening for connections ";
    }

}


WebSocketHandler ::~WebSocketHandler()
{
    m_socketServer->deleteLater();

}


void WebSocketHandler::onNewSocketConnection()
{
    qDebug() <<"New client connected";
    auto nextClient  = m_socketServer->nextPendingConnection() ;
    nextClient->setParent(this);

    connect(nextClient, &QWebSocket::textMessageReceived,this,&WebSocketHandler::onTextMessageReceived);
    connect(nextClient, &QWebSocket::disconnected,this,&WebSocketHandler::onSocketDisconnected);

    m_clientList.append(nextClient);


}

void WebSocketHandler::onTextMessageReceived(QString message)
{
    qDebug() <<"Received new client message:"<<message;

}

void WebSocketHandler::onSocketDisconnected()
{
    auto client = qobject_cast< QWebSocket *> (sender());
    if(client)
    {
        m_clientList.removeAll(client);
    }

}


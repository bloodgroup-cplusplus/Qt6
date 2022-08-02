#include "websockethandler.h"
#include<QDebug>

WebSocketHandler::WebSocketHandler(QObject *parent)
    : QObject{parent}
{
    m_webSocket = new QWebSocket;
   connect( m_webSocket, &QWebSocket::connected, this, &WebSocketHandler::onConnected);
    connect(m_webSocket, &QWebSocket::textMessageReceived, this, &WebSocketHandler::onTextMessageReceived);

}


WebSocketHandler::~WebSocketHandler()
{
    m_webSocket->deleteLater();

}


void WebSocketHandler::connectToServer(QString hostAddress)
{
    qDebug() <<"Client app: Connecting to server:"<<hostAddress;
    m_webSocket->open ( hostAddress);
}

void WebSocketHandler::onConnected()
{
    qDebug() <<"client APP: Connection established";


}


void WebSocketHandler::onTextMessageReceived(QString message)
{
    qDebug() <<"Client app: received message" <<message;

}

#include "gamemanager.h"


// this will manage all the server side class
// for the communication between client and the server
// That will all be done via websockets
GameManager::GameManager(QObject *parent)
    : QObject{parent}
{

    m_socketHandler = new WebSocketHandler(this);

}


GameManager::~GameManager()
{
    m_socketHandler->deleteLater();
}

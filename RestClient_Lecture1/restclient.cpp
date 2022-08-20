#include "restclient.h"

RestClient::RestClient(QObject *parent)
    : QObject{parent}
{

    m_networkManager = new  QNetworkAccessManager(this);
    // we will connect to network manager
    // we nned to conect network from QNetworkAcces Manager (signal) to our webclient (slot)

    connect(m_networkManager, &QNetworkAccessManager::finished, this, &RestClient::onResponseReceived);

}

void RestClient::onResponseReceived(QNetworkReply * reply)
{


}

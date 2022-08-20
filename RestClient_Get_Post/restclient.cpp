#include "restclient.h"

RestClient::RestClient(QObject *parent)
    : QObject{parent}
{
    m_networkManager = new QNetworkAccessManager(this);
    connect(m_networkManager, & QNetworkAccessManager::finished,this,&RestClient::onResponseReceived);

}

void RestClient::createGetRequest(QUrl requestUrl)
{
    if(!requestUrl.isEmpty())
    {
         QNetworkRequest request(requestUrl);

         m_networkManager->get(request);

    }

    else
    {
        qDebug()<<"Request URL is empty";
        m_responseString += "Request URL is empty";
       emit responseTextUpdated();
    }


}



void RestClient::onResponseReceived(QNetworkReply * reply)
{

}

#ifndef RESTCLIENT_H
#define RESTCLIENT_H

#include <QObject>
#include<QNetworkAccessManager>
#include<QNetworkReply>

// we need our network  manager for connection to anothr url or endpoints

class RestClient : public QObject
{
    Q_OBJECT
public:
    explicit RestClient(QObject *parent = nullptr);

private:
    QNetworkAccessManager * m_networkManager; // this will take care of request and responses

public slots:
    void onResponseReceived(QNetworkReply *);

signals:

};

#endif // RESTCLIENT_H

#ifndef RESTCLIENT_H
#define RESTCLIENT_H

#include <QObject>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QNetworkRequest>
#include<QDebug>


class RestClient : public QObject
{
    Q_OBJECT
    Q_PROPERTY (QString responseText READ responseText NOTIFY responseTextUpdated)

public:
    explicit RestClient(QObject *parent = nullptr);
    Q_INVOKABLE   void createGetRequest(QUrl requestUrl);
    QString responseText()
    {
        return m_responseString;
    }

private:
    QNetworkAccessManager * m_networkManager;
    QString m_responseString;

public slots:
    void onResponseReceived(QNetworkReply *);
signals:
    void responseTextUpdated();



};

#endif // RESTCLIENT_H

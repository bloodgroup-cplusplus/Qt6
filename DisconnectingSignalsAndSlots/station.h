#ifndef STATION_H
#define STATION_H

#include <QObject>
#include<QDebug>

// station is going to broadcast
class station : public QObject
{
    Q_OBJECT
public:
    explicit station(QObject *parent = nullptr, int channel = 0, QString name = "unknown");
    QString name;
    int channel;

signals:
    // what is missing here is a message
    // we need to setup some sort of broadcast mechansim
    void send(int channel, QString name, QString messae);
public slots:
    void broadcast(QString message);

};

#endif // STATION_H

#ifndef RADIO_H
#define RADIO_H


#include <QObject>
#include<QDebug>

class Radio : public QObject
{
    Q_OBJECT
public:
    explicit Radio(QObject *parent = nullptr);

signals:
    void quit();// a radio listens to stations

public slots:
    void listen(int channel, QString name,QString message);// this is what we are expecting to
    //get when we are getting a slot

};

#endif // RADIO_H

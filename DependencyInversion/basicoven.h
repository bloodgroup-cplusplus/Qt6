#ifndef BASICOVEN_H
#define BASICOVEN_H

#include <QObject>
#include<QDebug>
#include "Interfaces/iOven.h"

class BasicOven : public QObject, public iOven
{
    Q_OBJECT
public:
    explicit BasicOven(QObject *parent = nullptr);

signals:

};

#endif // BASICOVEN_H

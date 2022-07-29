#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <QObject>
#include<QDebug>
#include "interfaces/iFlying.h"
#include "interfaces/iMachine.h"

class Helicopter : public QObject, public iFlying, public iMachine
{
    Q_OBJECT
public:
    explicit Helicopter(QObject *parent = nullptr);

signals:


    // iMachine interface
public:
    void refuel() override;

    // iFlying interface
public:
    void fly() override;
    void land() override;
};

#endif // HELICOPTER_H

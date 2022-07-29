#ifndef BIRD_H
#define BIRD_H

#include <QObject>
#include<QDebug>
#include "Interfaces/iFlying.h"

class Bird : public QObject, public iFlying
{
    Q_OBJECT
public:
    explicit Bird(QObject *parent = nullptr);

signals:


    // iFlying interface
public:
    void fly() override;
    void land() override;
};

#endif // BIRD_H

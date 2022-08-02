#ifndef RACECAR_H
#define RACECAR_H

#include<QDebug>
#include "car.h"

class Racecar :  public Car
{
    Q_OBJECT
public:
    explicit Racecar(QObject *parent = nullptr);
    bool supercharger = true;
    void gofast();

signals:

};

#endif // RACECAR_H

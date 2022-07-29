#include "helicopter.h"

Helicopter::Helicopter(QObject *parent)
    : QObject{parent}
{

}


void Helicopter::refuel()
{
    qInfo() <<this<< "Refueling";
}

void Helicopter::fly()
{
    qInfo() <<this <<"is flying";
}

void Helicopter::land()
{
    qInfo() <<this<<"is landing";
}

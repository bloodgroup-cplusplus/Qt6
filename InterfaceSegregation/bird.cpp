#include "bird.h"

Bird::Bird(QObject *parent)
    : QObject{parent}
{

}


void Bird::fly()
{

    qInfo() <<this <<"is flying";
}

void Bird::land()
{
    qInfo() << this << "is landing";
}

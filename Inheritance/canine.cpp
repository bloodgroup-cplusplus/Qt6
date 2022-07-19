#include "canine.h"
#include<QDebug>

Canine::Canine(QObject *parent)
    : Mammal{parent}
{
        qInfo() <<this << "consturcted";

}

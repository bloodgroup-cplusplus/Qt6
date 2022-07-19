#include "mammal.h"

#include<QDebug>
Mammal::Mammal(QObject *parent)
    : Animal {parent}
{
    qInfo() <<this<<"constructed";

}

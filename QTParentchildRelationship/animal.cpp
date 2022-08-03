#include<QDebug>
#include "animal.h"

Animal::Animal(QObject *parent)
    : QObject{parent}
{

    qInfo() << this << "animal constructed";
}

Animal::~Animal()

{
    qInfo() <<this  << "animal deconstructred";

}

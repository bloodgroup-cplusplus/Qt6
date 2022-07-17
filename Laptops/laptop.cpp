#include "laptop.h"

Laptop::Laptop(QObject *parent,QString name )
    : QObject{parent}
{

        this->name = name;
        qInfo() <<this<<"constructor"<<name;
}


Laptop::~Laptop()
{
    qInfo() <<this << "deconstructor"<<name;


}

double Laptop::asKilo()
{
        return weight * 0.453592; // this converts pounds into kilos
}


void Laptop::test(){


    qInfo() <<this<<"Test:"<<name<<"Kilo:"<<asKilo();

}

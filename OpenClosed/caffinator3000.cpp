#include "caffinator3000.h"

Caffinator3000::Caffinator3000(QObject *parent)
    : QObject{parent}
{

}


void Caffinator3000::addIngredients(QStringList &list)

{
    foreach(QString item, list)
    {
        qInfo() <<"Adding:"<< item;
    }
}


void Caffinator3000::brew()
{
    qInfo() <<"Heating ";
    marketing();
    qInfo() <<"Pour";
    qInfo() <<"complete";
}

void Caffinator3000::marketing()
{
    for(int i = 0 ; i<10; ++i)
    {
        qInfo() <<"Fire!!";
        qInfo() <<"Loud MUSIC !!";
        qInfo() <<"super-inject-caffineeee";
    }

}

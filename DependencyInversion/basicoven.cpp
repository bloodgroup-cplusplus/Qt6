#include "basicoven.h"

BasicOven::BasicOven(QObject *parent)
    : QObject{parent}
{
    qInfo() <<this <<"doing bsic stuff";
    qInfo() <<this <<"Baking";
    qInfo() <<this <<"BLAAH";


}

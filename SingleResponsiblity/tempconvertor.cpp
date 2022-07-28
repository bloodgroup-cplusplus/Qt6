#include "tempconvertor.h"

TempConvertor::TempConvertor(QObject *parent)
    : QObject{parent}
{

}

int TempConvertor::celsiusToFahrenheit(int value)
{
    auto o = (value * 9.0) /5.0 +32;
    return o;

}

int TempConvertor::fahrenheitToCelsius(int value)
{
    auto o = (value -32) * 5.0 /9.0;
    return o;

}

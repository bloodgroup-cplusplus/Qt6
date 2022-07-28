#include <QCoreApplication>
#include<QDebug>

/*
  What
  Single Responsible principle

  Define
  A class should only have a single responsibility, that is, only chages to one part of the software's specification


  Why

  Makes creating, and maintaining the classes easier


  Exmaple
  In this case a good exmaple is a temp converter

*/
#include "tempconvertor.h"

int main(int argc, char *argv[])
{


    QCoreApplication a(argc, argv);

    TempConvertor t;
    int value = 32;

    qInfo() << "celcius to farhenit "<< t.celsiusToFahrenheit(value);
    qInfo() <<"farehnit to celcius"<< t.fahrenheitToCelsius(value);




    return a.exec();
}

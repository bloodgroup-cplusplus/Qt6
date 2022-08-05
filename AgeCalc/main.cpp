#include <QCoreApplication>
#include<QDebug>
#include "agecalc.h"


void print(AgeCalc &calc)
{
    qInfo() <<calc.name()<<"Human Years"<<calc.humanYears();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    AgeCalc  ryan;
    AgeCalc chad;

    ryan.setName("ryan");
    ryan.setAge(28);

    chad.setName("chad");
    chad.setAge(27);


    return a.exec();
}

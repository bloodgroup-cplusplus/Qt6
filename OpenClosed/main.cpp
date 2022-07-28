#include <QCoreApplication>
#include <QDebug>
#include<QStringList>
#include "shop.h"
#include "coffeemachine.h"
#include "caffinator3000.h"

/*
  A coffee brewing interface
  We are going to brew coffee
  Open Closed principle
  Define
  Software Entities ( classes, modules, functions, etc). Should be open for extension, but closed for modification

  Why
  Avoid breaking things in the future if we modify the code

  Example
  Many frameworks use inheritance but this creates tight coupling
  Example Qt uses inhertiance mostly QTCPSocket and QSSL Socket
  we will use an interface so this example also compiles with the other solid principles
*/


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Shop shop;

    QStringList list;

    list << "Sugar"<<"Flavoring";
    //shop.sellDrink()
    CoffeeMachine machine;
    Caffinator3000 c3000;
    shop.sellDrink(list,&c3000);
   // c3000.sellDrink(list, &machine)

    return a.exec();
}

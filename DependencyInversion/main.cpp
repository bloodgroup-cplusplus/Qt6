#include <QCoreApplication>

/* What - Dependency Inversion Principle

Define :
High-level modules should not depend on low-level modules. Both should depend on abstractions.
Abstractions should not depend on details. Details should depend on abstractions.
High-level and low-level modules dpeend on the abstraction .

Why
If the details change, breaks could occur!
The interfaces enable you to add new functionality without changing any existing code by adding new interfaces

Example
Oven, AdvancedOven, Bad Oven

In our example if we change something in the basic oven the bad oven is going to break

*/

#include "basicoven.h"
#include "badoven.h"
#include "advancedoven.h"
#include "Interfaces/iOven.h"

void cook (iOven * oven)
{
    oven->bake();
}


int main(int argc, char *argv[])

{

    QCoreApplication a(argc, argv);
    BasicOven basicoven;
    AdvancedOven advancedoven;
    BadOven badoven;

    cook(&basicoven);
    cook(&advancedoven);
    cook(&badoven);


    return a.exec();
}

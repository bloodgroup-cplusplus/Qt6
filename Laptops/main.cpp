#include <QCoreApplication>

#include "laptop.h"


void  tests(Laptop & machine)
{
    machine.test();
}

void makeLaptops()

{
    // The stack ( c++ created this on the stack )
    // It is going to delete it when no longer needed

    Laptop mine(nullptr,"mac mini");
    Laptop yours(nullptr,"your laptop");
    mine.weight = 3;
    yours.weight =5 ;

    tests(mine);
    tests(yours);

    // will we deleted from the stack automatically

}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    makeLaptops();

    return a.exec();
}

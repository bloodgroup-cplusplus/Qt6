#include "lion.h"
#include <QDebug>

Lion::Lion(QObject *parent):Feline(parent)
{
    qInfo() << this << "Constructed";

}
void Lion::speak()
{
        qInfo() << this << "roar";

        // calling the function from a base class
        Feline::speak();
}

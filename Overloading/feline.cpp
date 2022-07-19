#include "feline.h"
#include <QDebug>
Feline::Feline(QObject *parent)
    : QObject{parent}
{
        qInfo() << this<<"constructred";
}

void Feline::speak()
{
    qInfo() << this << "meow ";
}

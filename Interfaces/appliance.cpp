#include "appliance.h"

Appliance::Appliance(QObject *parent)
    : QObject{parent}
{

}


bool Appliance::cook()
{
    return true;
}

bool Appliance::toast()
{
    return true;
}

bool Appliance::freeze()

{
    return true;
}

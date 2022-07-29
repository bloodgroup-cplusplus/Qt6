#include "badoven.h"

BadOven::BadOven(QObject *parent)
    :BasicOven{parent}
{

}


void BadOven::bake()
{
    qInfo() <<this<<"do advanced stuff";
    flip();
    rotate();
    qInfo() <<this<<"bake";
}

void BadOven::flip()
{
    qInfo() <<this << "flip the food";
}

void BadOven::rotate()
{
    qInfo() <<this <<"rotate the food";
}

#include "test.h"
#include<QDebug>

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() <<this <<"test constructeor ";

}




Test ::   ~Test ()
{
    qInfo() << this << " test is destroyed";
}



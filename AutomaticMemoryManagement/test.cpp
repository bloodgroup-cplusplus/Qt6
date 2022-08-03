#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() <<this<<"constructor";

}

Test::~Test()
{
    qInfo() <<this <<" deconstructor";

}

void Test::doStuff()
{

    qInfo() <<this << Q_FUNC_INFO;
}

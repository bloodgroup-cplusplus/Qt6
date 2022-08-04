#ifndef ILOGGER_H
#define ILOGGER_H

#include<QString>
// the interface now acts as a bridge
class iLogger
{
public:
    virtual void write(QString message) = 0;
};

#endif // ILOGGER_H

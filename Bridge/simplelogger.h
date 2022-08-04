#ifndef SIMPLELOGGER_H
#define SIMPLELOGGER_H

#include <QObject>
#include<QDebug>
#include<QFile>
#include "iLogger.h"

class SimpleLogger : public QObject, public iLogger
{
    Q_OBJECT
public:
    explicit SimpleLogger(QObject *parent = nullptr);

signals:


    // iLogger interface
public:
    void write(QString message);
};

#endif // SIMPLELOGGER_H

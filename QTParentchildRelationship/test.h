#ifndef TEST_H
#define TEST_H

#include <QObject>
#include<QDebug>
#include "animal.h"

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);
    ~Test();

    Animal * dog;
    // make a pointer to the animal class

signals:

};

#endif // TEST_H

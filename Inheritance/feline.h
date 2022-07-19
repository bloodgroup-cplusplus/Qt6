#ifndef FELINE_H
#define FELINE_H

#include <QObject>

#include<QDebug>
#include "animal.h"
class Feline : public  Mammal
{
    Q_OBJECT
public:
    explicit Feline(QObject *parent = nullptr);

signals:

};

#endif // FELINE_H

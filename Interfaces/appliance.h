#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>
#include<Qdebug>

#include "Freezer.h"
#include "Microwave.h"
#include "Toaster.h"
class Appliance : public QObject, public Freezer , public Toaster, public Microwave
{
    Q_OBJECT
public:
    explicit Appliance(QObject *parent = nullptr);

signals:


    // Microwave interface

    bool cook();

    // Toaster interface
    bool toast();

    // Freezer interface
public:
    bool freeze();
};

#endif // APPLIANCE_H

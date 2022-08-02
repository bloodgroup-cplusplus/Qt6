#ifndef RACECAR_H
#define RACECAR_H

#include <QObject>
#include "car.h"

class Racecar : public Car
{
    Q_OBJECT
public:
    explicit Racecar(QObject *parent = nullptr);

    QString color;
    void speed();
    void charge();
signals:

};

#endif // RACECAR_H

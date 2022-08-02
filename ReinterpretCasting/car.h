#ifndef CAR_H
#define CAR_H

#include <QObject>

class Car : public QObject
{
    Q_OBJECT
public:
    explicit Car(QObject *parent = nullptr);
    void drive();
    void stop();
    QString color;

signals:

};

#endif // CAR_H

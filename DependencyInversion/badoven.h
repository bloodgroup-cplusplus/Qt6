#ifndef BADOVEN_H
#define BADOVEN_H

#include <QObject>

class BadOven : public QObject
{
    Q_OBJECT
public:
    explicit BadOven(QObject *parent = nullptr);

signals:

};

#endif // BADOVEN_H

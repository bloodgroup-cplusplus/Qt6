#ifndef TEMPCONVERTOR_H
#define TEMPCONVERTOR_H

#include <QObject>

class TempConvertor : public QObject
{
    Q_OBJECT
public:
    explicit TempConvertor(QObject *parent = nullptr);
    int celsiusToFahrenheit(int value);
    int fahrenheitToCelsius (int value);

    // it is very tempting to add a lot more that we don't need
    // void to Int
    // it's very tempating to add a lot of utility functions here
    // do what you say what you are going to do


signals:

};

#endif // TEMPCONVERTOR_H

#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include<QDebug>
class Laptop : public QObject
{
    Q_OBJECT
public:
    explicit Laptop( QObject *parent = nullptr,QString name= "");
        // We want a deconstructor
    ~Laptop();

        int weight;
        QString name;
        double asKilo();
        void test();
signals:

};

#endif // LAPTOP_H

#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>

class Animal : public QObject
{
    Q_OBJECT
public:
    explicit Animal(QObject *parent = nullptr);// Magic!!
    // qt builds object tree
    // nullptr is not pointing to anything
    // this class has a parent and the parent is somewher else
    // when we delete the parent all the chidlren are also deleted
    // if you have childerne and you take your children with you

    ~Animal();

signals:

};

#endif // ANIMAL_H

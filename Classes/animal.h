/* ifndef means if not defined
 * if we haven't talked about it we are going to define it
 */
#ifndef ANIMAL_H
#define ANIMAL_H
#include<QDebug>
#include <QObject>
/*there is a file name QObject and we are including it
 * This is the actual blueprint
 * what we are going to do
 */
class Animal : public QObject
{
    Q_OBJECT // this is a macro and this has got some macro which adds lot of code in the background .
    // to recap we are including Q_object
    // we are inherting qobject
   // what aw are going to tell
   // the consturctor has the same name

public:
    explicit Animal(QObject *parent = nullptr);
       // explicit means we are going to define it somewher else
        // we are implementing the defintion in animal.cpp
    void speak(QString message);

signals:

};

#endif // ANIMAL_H
//this is somehthing we are trying to define if we've already defined it don't define it

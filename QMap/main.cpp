#include <QCoreApplication>
#include<QDebug>
#include "pet.h"

typedef QMap<QString, Pet*> petList;


petList createPets(int max)
{
    petList map;
    for(int i = 0;i<max; ++i)
    {
        QString id = QString::number(i);
        Pet * pet = new Pet(); // notice the possible memory leak!

        pet->setAge(i*3);
        pet->setName("Pet" + id);
        map.insert(id,pet);
        // we have to give it a pointer else copy gets disabled


    }
    return map; // notice the copy
    // we can copy the QMap cause qmap itself is not q object
}

void listPets(petList pets) // notice the copy
{
    // it is error prone and memory intensive
    foreach(QString key, pets.keys())
    {
        Pet * pet = pets.value(key);
        qInfo() <<key<< pet->name() <<"is Age :" <<pet->age();
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    petList pets = createPets(5);
    qInfo() <<"count:"<<pets.count();

    listPets(pets);
    return a.exec();
}

#include <QCoreApplication>
#include "teacher.h"
#include "student.h"
#include "school.h"
#include <QDebug>
// composite objects into tree sructures to represent whole-part hierarchies
//Composite recursive composition
// there is a tree example

// what - Composite pattern - objects in objects
// Description
// composite objects into tree structures to represent whole-part hierarchies
// Why
//building an object tree
// Example
// QT's parent child relations
// we have done this
// say we have
// school
// teacher
// student
// if we create teacher we have to create a qlist of teacher pointers
// and a qlist of student pointers.
// that is going to be extremely exhaustive
// instead we try some other thing.
//why do we use the parent child relationship among objects ?
// like in this case we made school the parent of teacher
// we made teacher the parent of student.
// it's easy to add any type of qobject and cast it back to whatever you need it
// it's easy to do memory managemet
// if you want to make some interface
// you could still under the hood t


void populateSchool (School *school)
{
    for(int t=0; t<5;++t)
    {
        Teacher *teacher = new Teacher(school);
        teacher->setObjectName("Teacher"+ QString::number(t));
        for(int s = 0; s<20;++s)
        {
                Student *student = new Student(teacher) ;
                teacher->setObjectName("Teacher"+QString::number(t));
        }
}

}

void showTeachers(School *school)
{
    qInfo() <<"Teachers";
    foreach(QObject *object, school->children())
    {
        Teacher *teacher = qobject_cast<Teacher *> (object);
        if(teacher)
        {
            qInfo()<<teacher;
        }
    }
}

void showStudents(School *school)
{
    qInfo() <<"Students";
    foreach(QObject * object, school->children())
   {
        Teacher *teacher = qobject_cast<Teacher *> (object);
        if(teacher)
        {
            foreach(QObject * object, teacher->children())
            {
                Student *student = qobject_cast<Student *> (object);
                if(student) qInfo() <<student;
            }
        }

    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    School school;
    populateSchool(&school);
    showTeachers(&school);
    showStudents(&school);

    return a.exec();
}

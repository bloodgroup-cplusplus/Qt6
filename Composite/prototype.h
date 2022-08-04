#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <QObject>
#include "school.h"
#include "teacher.h"
#include "student.h"

class Prototype : public QObject
{
    Q_OBJECT
public:
    explicit Prototype(QObject *parent = nullptr);

signals:

private:
    School m_school;
    Teacher m_teacher;
    Student m_student;

};

#endif // PROTOTYPE_H

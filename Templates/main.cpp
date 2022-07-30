#include <QCoreApplication>
#include<string>
#include<QDebug>
#include<QString>
/*
What
Template examples
Why
Templates are independent of any particular type. A template is a blueprint or formula
for creating a template class or a function

How -> Lets see
*/


template<typename T>
void print(T value)
{
    qInfo() <<value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
     print<int> (1);
     print<char>('c');
     print<double> (1.2320);
     print<QString>(QString("hello this is a string "));


    return a.exec();
}

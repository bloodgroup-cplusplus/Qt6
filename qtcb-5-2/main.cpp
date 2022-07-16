#include <QCoreApplication>
#include<iostream>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // learning cin and cout
    int age;
    qInfo() <<"Please enter the age";
    std::cin>>age;
    qInfo() <<"you entered " <<age;

    //cerr
    // c++ standard error

    // what do you want to output to user and what you are using
    // C++ standard out
    std::cout<<"Standard out "<<std::endl;

    // this is an error message

    std::cerr<<"Standard error " << std::endl;


    age = 23;
    qInfo() <<"Enter your age";
    std::cin>>age;

    qInfo() <<"You are :"<< age<<"years old ";
    // what happens if we want to emulate that it didn't enter age
    qInfo() <<"Information";
    qDebug() <<"Debug";
    // debug is for the developers
    // as the programmers become we need a debug information
   // qCritical() <<"This is a critical message";
    // this is a crash
   // qFatal("Test crash::::");

   std::string s;
    std::cout<<"Enter name"<<std::endl;
    std::cin>>s;
    qInfo() <<s.c_str() <<"is"<<age<<"years old";
     QString flow = "my name is chad ";
     qInfo() <<flow;

    return a.exec();
}

#include <QCoreApplication>
#include<iostream>

/*
 What
 Errors vs Exception

 Why
 Bad things happen, we need to know how to handle them

 How
 An Error
 "indicates  serious problems that a reasonable applicatoin should not try to catch . " -bad things

 An Exception
 "indicates conditions that a reasonable application might want to catch. " - most things

 Warning people use these interchangeably

 */

bool doDiv(int max)
{
    int value;
    qInfo() <<"Enter a number";

    std::cin>>value;
    if (value == 1) return false;
    // taking control of the process
    if(value==0)
    {
        qInfo() <<"ZERO- goodbye world";
        throw "Cannot divide by zero";
        // we can throw anything
    }
    int result = max/value;
    qInfo() <<"Result = "<< result;
    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

/*    do {
        int max =55;
        int div = 0;
        qInfo() <<"Enter a number to divide by (or zero or an issue)";
        std::cin>>div;
        int answer = max/div; // possible exception
        qInfo() <<answer;

    }while(true);
*/


         int max =44;
         do
        {
        // Loop
        } while (doDiv(max));


        return a.exec();
}

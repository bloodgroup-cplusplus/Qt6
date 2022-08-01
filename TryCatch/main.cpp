#include <QCoreApplication>
#include<iostream>
#include<QDebug>

bool doDiv(int max)
{
    // Throw -- ??
    try{

        int value;
        qInfo() <<"Enter a number";
        std::cin>>value;
        if(value ==0) throw QString ("Cannot divide by zero");

        if(value >5) throw 99;
        // we can throw anything

        if(value ==1) throw std::runtime_error("Should be greater than  1");
       // anything after a throw keyword is a type
        int result = max/value;
        qInfo() <<"Result  =" <<result;

    }

    catch(std::exception const &e)
    {
        qWarning() <<"We caught a STD exception"<<e.what();
    }

    catch(QString e)
    // catch(...) implies catch all  and it is bad bad bad
    // catch all does not catch everything
    // it doesn't do waht if imples
    // we as a dev try to take charge
    // we need to  define what we are catching

    {
        qWarning() <<"We caught a QString :."<<e;
        return false;

    }
    // no finally in C++  it can be added with another lib

    catch(int e)
    {
        qWarning() << "We caught an int:"<<e;
    }

    return true ;
}

int main(int argc, char *argv[])

{
    QCoreApplication a(argc, argv);
    int maxi = 55;


    return a.exec();
}

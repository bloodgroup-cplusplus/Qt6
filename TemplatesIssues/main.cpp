#include <QCoreApplication>
#include<QDebug>

/*

  What
  Template issues

  Why
  Lets look at how templates can fail
*/

template<class T, class F>
F add(T valueT, F valueF)
{
    return valueT+valueF;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // we are telling c++ explicitly casting what to do
    qInfo() << add<int,double> (2,3.00);
    // always declare your datatype and understand what you are doing
    qInfo() <<add(44,true);
    qInfo() <<add(true,44);
    qInfo() <<add(55,"true");
  //  qInfo() <<add("Bryan",55);


    return a.exec();
}

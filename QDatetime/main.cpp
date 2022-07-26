#include <QCoreApplication>
#include<QDebug>
#include<QDate>
#include<QTime>
//#include<QDateTime>
//#include<QDateTime>

/* what
 * Qt data time classes
 *
 * Why
 * Makes dates and times easy
 *
 * How
 * elts se
*/
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDate today = QDate::currentDate();
    qInfo() << today;

    // change it .

    qInfo() << today.addDays(+2);
    qInfo() << today.addYears(20);


    // formatting it to different formats
    // It is Different than Qt 5
    // If we are trying to run qt 5\

    qInfo() <<"ISODate"<<today.toString(Qt::DateFormat::ISODate);
    qInfo() << "ISODate"<< today.toString(Qt::DateFormat::ISODate);
    qInfo() <<"ISODate"<< today.toString(Qt::DateFormat::RFC2822Date);
    qInfo() << "Text Date"<< today.toString(Qt::DateFormat::TextDate);

   QTime now = QTime::currentTime();

   qInfo() <<"ISODATE"<< now.toString(Qt::DateFormat::ISODate);
   qInfo() <<"RFC2822Date"<<now.toString(Qt::DateFormat::RFC2822Date);
   qInfo() <<"TextDate"<<now.toString(Qt::DateFormat::TextDate);

   qInfo() <<"TextDate"<<now.toString(Qt::DateFormat::TextDate);

   QDateTime current = QDateTime::currentDateTime();

   qInfo() <<current ;

   //QDateTime expire = current.addDays(45);

   //qInfo() <<"Expire on " << expire;








    return a.exec();
}

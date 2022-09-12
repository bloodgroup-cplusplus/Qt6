#include <QCoreApplication>
#include<QObject>
#include<QCursor>
#include<ApplicationServices/ApplicationServices.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QCursor cursor;
    for(int i=0;i<10;++i)
    {
        cursor.setPos(i,100);

    }
    return a.exec();
}

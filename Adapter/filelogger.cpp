#include "filelogger.h"
#include<QFile>
#include<QTextStream>
#include<QDebug>


FileLogger::FileLogger(QObject *parent)
    : QObject{parent}
{

}


void FileLogger::write(QString message)
{
    QFile file("log.txt");
    if(!file.open(QIODevice::Append))
    {
                        qCritical()<<file.errorString();
                        return ;
    }


    QTextStream stream (&file);
    stream<< message<<"\r\n";
    file.close();
    qInfo() <<"Logged"<<message;
}

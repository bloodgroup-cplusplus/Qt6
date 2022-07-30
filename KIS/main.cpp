#include <QCoreApplication>

/*


  KEEP IT SIMPLE
  Just because a design pattern exists, does not mean you should use it . There is a mentality if a program
  does not use the latest trendy buzzwords that its somehow not a good program

  Simple is always better

  Example QFile vs iFile

  Interface and class in this example is overly complex and not needed.
 */

#include "iFile.h"
#include "filesystem.h"
#include <QFile>
#include<QTextStream>
#include<QDebug>

void testIO(iFile *io, QString path, QString data)
{
    if(io->write(path,data))
    {
        QString value = io->read(path);
        Q_ASSERT(data == value);
        qInfo() <<"Complex IO test passed";
    }
    else
    {
        qCritical() << " Complex IO test failed ";
    }
}


void complex(QString path, QString data)
{
    FileSystem fs;
    testIO(&fs,path,data);
}


void simple(QString path, QString data)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadWrite))
    {
        qCritical() <<"Simple Io test failed";
        return ;
    }
    QTextStream stream (&file);
    stream <<data ;
    stream.flush();
    stream.seek(0);

    QString value = stream.readAll() ;
    file.close();
   Q_ASSERT(value ==data) ;
    qInfo() <<"Simple test passed";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString path = "test.txt";
    QString data ="hello world";

    complex (path,data);
    simple(path,data);
    return a.exec();
}

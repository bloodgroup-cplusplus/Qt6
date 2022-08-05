#include <QCoreApplication>
#include<QDebug>
#include<QTextStream>
#include<iostream>
#include"radio.h"
#include "station.h"
/*
 * What
 * Disconnecting signals and slots
 *
 *
 * Why
 * We want to disconnect a signal from a slot
 *
 *
 * How
 * Use the disconnect function
 * This also talks about the connection types
*/

int main(int argc, char *argv[])
{
    Radio boombox;
    QCoreApplication a(argc, argv);
    station*channels[3]; // we are working with array of pointers
    // we are going to create some station
    channels[0] = new station(&boombox, 94, "Rock and Roll");
    // we are using new so we need to delete the memory
    channels[1] = new station (&boombox, 87, "hip hop");
    //
    channels[2] = new station (&boombox, 104, "news");
    // we need to connect radio to our applications
    // when the radio quits tell the application to quit

    // we want source destination signal and slot
    boombox.connect(&boombox, &Radio::quit, &a, &QCoreApplication::quit,Qt::QueuedConnection);
    // lets connect them


    do {

        qInfo() <<"Enter on, off , test, or quit";
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();
        // reading the line trimming the whitespace and converting it to uppercase
        // we aer going ot make sure we have a connection
        if(line == "ON")
        {
            qInfo() <<"turning the radio on ";
            for(int i = 0;i<3;++i)
            {
                station * channel = channels[i];
                boombox.connect(channel,&station::send, &boombox, &Radio::listen);
            }
        }
        if( line == "OFF")
        {
                qInfo() <<"Turning the radio off";
                for(int i = 0 ; i<3; i++)
                {
                    station * channel = channels[i];
                    boombox.disconnect(channel, &station::send, &boombox, &Radio::listen);
                }
                qInfo() <<"Radio is off ";
        }


        if (line == "TEST")
        {
            qInfo() <<"Turning the radio on ";
            for(int i = 0;i<3;++i)
            {

                station * channel = channels[i];
                channel->broadcast("Broadcasting live");
                boombox.connect(channel, &station::send, &boombox, &Radio::listen);
            }
            qInfo() <<"Test complete ";
        }

        if(line == "QUIT")
        {
            qInfo() <<"quitting";
            emit boombox.quit();
            break;}

     }  while(true);
    return a.exec();
}

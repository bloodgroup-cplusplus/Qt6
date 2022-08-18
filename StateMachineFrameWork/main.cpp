#include <QCoreApplication>

/*
 * What
 * Intro to the Qt State FrameWork
 *
 *Description
 *An applications state will change
 *We want to create, track, react to those changes
 *Why
 *Applications need to act differently based on their state
 *
 *
 *Example
 *What is state
 *https://doc.qt.io/qt-6/statemachine-api.html
*/

#include "bulb.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Bulb bulb; // this becomes part of the application state
    bulb.setPowered(true); // state change
    bulb.setPowered(false); // state changed

    return a.exec();
}

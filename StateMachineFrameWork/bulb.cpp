#include "bulb.h"

Bulb::Bulb(QObject *parent)
    : QObject{parent}
{
    m_powered = false; // initial class state

}

bool Bulb::powered() const
{
    return m_powered;
}

void Bulb::setPowered(bool newPowered)
{
    m_powered = newPowered; // state of the object has changed

    QString message;
    m_powered ? message = "On" : message = "Off";

    qInfo() <<this<<message;
}

#ifndef BULB_H
#define BULB_H

#include<QDebug>
#include <QObject>
// Since the values change insdie our class bulb therefore the bulb class is
// also a part of the state
// when we talk about state we are talking about very vague term
// (application state)

class Bulb : public QObject
{
    Q_OBJECT
public:
    explicit Bulb(QObject *parent = nullptr);

    bool powered() const;
    void setPowered(bool newPowered);

signals:

  private:
    bool m_powered; // the value becomes part of the object state
    // becaues that value can change
    // we are worried about the things that change
    // (class level state)

};

#endif // BULB_H

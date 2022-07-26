#ifndef CAT_H
#define CAT_H

#include <QObject>

#include<QDebug>

class Cat : public QObject
{
    Q_OBJECT
public:
    explicit Cat(QObject *parent = nullptr);

signals:

    void run();

public slots:
    // you can place your slots anywhere around signals

    void scared();

};

#endif // CAT_H

#ifndef CAFFINATOR3000_H
#define CAFFINATOR3000_H

#include <QObject>
#include<QDebug>
#include<QStringList>
#include "Interfaces/iBrew.h"

class Caffinator3000 : public QObject, public iBrew
{
    Q_OBJECT
public:
    explicit Caffinator3000(QObject *parent = nullptr);

signals:


    // iBrew interface
public:
    void addIngredients(QStringList &list) override;
    void brew() override;
    void marketing();
};

#endif // CAFFINATOR3000_H

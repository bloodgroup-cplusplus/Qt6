#ifndef AGECALC_H
#define AGECALC_H

#include <QObject>

class AgeCalc : public QObject
{
    Q_OBJECT
public:
    explicit AgeCalc(QObject *parent = nullptr);

    int age() const;
    void setAge(int newAge);

    const QString &name() const;
    void setName(const QString &newName);
    int dogYears() const ;
    int catYears() const;
    int humanYears() const;

signals:

private:
    int m_age;
    QString m_name;
    // we need to encapsulate things into getters and setters
    // our variables are in the private section

};

#endif // AGECALC_H
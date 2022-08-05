#ifndef TEST_H
#define TEST_H

#include <QObject>

class Test : public QObject
{
    Q_OBJECT
    QString m_message ; // this is private

public:
    explicit Test(QObject *parent = nullptr);
    // why we want Qstring private
    // we want to use getters and setters
    //
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    // this is the property bindings that qml would use to bind with the class
    // instead of calling a getter and setter we can work with the property wrt to QML
    // we modify just one thing instead of three;
    QString message() const ;
    void setMessage(const QString &message);

signals:
    void messageChanged(QString message);
    // we are going to fire this up in the setters .

};

#endif // TEST_H

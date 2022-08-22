#ifndef THEPING_H
#define THEPING_H

#include <QObject>
#include<QDebug>
#include<QSysInfo>
#include<QProcess>
#include<QByteArray>

class ThePing : public QObject
{
    Q_OBJECT
public:
    explicit ThePing(QObject *parent = nullptr);

    QString operatingSystem();

    QString getAddress() const;

    void setAddress(const QString &address);

signals:
    void output(QString data);


private:
    QProcess m_process;
    QString m_address;
    bool m_listening;
    QString getProcess();
    void startPing();

public slots:
    void start();
    void stop();


   private slots:
    void errorOccurred(QProcess::ProcessError error);
    void finished ( int exitCode, QProcess::ExitStatus exitStatus);
    void readyReadStandardError();
    void readyReadStandardOutput();
    void started();
    void stateChanged(QProcess::ProcessState newState);
    void readyRead();
};


#endif // THEPING_H

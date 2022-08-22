#include "theping.h"

ThePing::ThePing(QObject *parent)
    : QObject{parent}
{
    connect(&m_process, &QProcess::errorOccurred,this, &ThePing::errorOccurred);
    connect(&m_process, &QProcess::readyReadStandardError, this, &ThePing::readyReadStandardError);
    connect(&m_process, &QProcess::readyReadStandardOutput,this, &ThePing::readyReadStandardOutput);
    connect (&m_process , &QProcess::started, this, &ThePing::started);
    connect(&m_process, &QProcess::stateChanged, this, &ThePing::stateChanged);
    connect(&m_process, &QProcess::readyRead, this, &ThePing::readyRead);
    // finished is overloaded
    connect(&m_process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished), this, &ThePing::readyRead);
    m_listening = false;
    m_address = "";

}

QString ThePing::operatingSystem()
{
    return QSysInfo::prettyProductName();
    // string representation of what the os is





}

QString ThePing::getAddress() const
{
    return m_address;


}

void ThePing::setAddress(const QString &address)
{
    m_address = address;

}

void ThePing::stop()
{
    qInfo() <<Q_FUNC_INFO;
    m_listening= false;
    m_process.close();
}
void ThePing::errorOccurred(QProcess::ProcessError error)
{
    if(!m_listening) return ;
    qInfo() <<Q_FUNC_INFO<<error;
    emit output ("Error");
}


void ThePing::finished(int exitCode, QProcess::ExitStatus exitStatus)
{
    if(!m_listening) return ;
    qInfo() <<Q_FUNC_INFO;
    Q_UNUSED(exitCode);
    Q_UNUSED(exitStatus);
    emit output ("Complete");
}

void ThePing::readyReadStandardError()
{
    if(!m_listening) return ;
    qInfo() <<Q_FUNC_INFO;
    QByteArray data = m_process.readAllStandardError();
    QString message = "Standard Error:";
    message.append(m_process.readAllStandardError());
    emit output(message);

}


void ThePing::readyReadStandardOutput()
{
    if(!m_listening) return ;
    qInfo() <<Q_FUNC_INFO;
    QByteArray data = m_process.readAllStandardOutput();
    emit output(QString(data.trimmed()));

}


void ThePing::started()
{
    // Do nothing
    qInfo() <<Q_FUNC_INFO;
}


void ThePing::stateChanged(QProcess::ProcessState newState)
{
    qInfo() <<Q_FUNC_INFO;
    switch(newState)
    {
        case QProcess::NotRunning:
                emit output ("Not Running");
                break;
    case QProcess::Starting :
                emit output("Starting");
                break;

     case QProcess::Running:
                emit output("Running");
                startPing();
                break;


    }

   }

void ThePing::readyRead()
{
    if(!m_listening) return ;
    qInfo() <<Q_FUNC_INFO;
    QByteArray data = m_process.readAll().trimmed();
    qInfo() <<data;
    emit output(data);


}



void ThePing::start()
{
    qInfo() <<Q_FUNC_INFO;
    m_listening = true;
    // we are going to open a command line in the background and ping directly
    m_process.start(getProcess());

}


QString ThePing::getProcess()
{
    qInfo() <<Q_FUNC_INFO;
    if(QSysInfo::productType() == "windows") return "cmd";
    if(QSysInfo::productType() == "osx") return "/bin/zsh";

    return "bash";


}


void ThePing::startPing()
{
    QByteArray command;

    command.append("ping "+m_address);


    if(QSysInfo::productType() == "windows") command.append("\r");
    command.append("\n");
    m_process.write(command);

}

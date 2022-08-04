#ifndef LOGADAPTER_H
#define LOGADAPTER_H

#include <QObject>
// in this example we are going to wrap the object instead
#include "filelogger.h"
// when you think about adapter always think about wrapping objects

#include<QDebug>
#include<QDateTime>

class LogAdapter : public QObject
{
    Q_OBJECT
public:
    explicit LogAdapter(QObject *parent = nullptr);

    FileLogger *logger() const;
    void setLogger(FileLogger *newLogger);
    void write(QString message);

signals:
private:
    FileLogger *m_logger;

};

#endif // LOGADAPTER_H

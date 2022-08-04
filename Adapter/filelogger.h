#ifndef FILELOGGER_H
#define FILELOGGER_H

#include <QObject>

class FileLogger : public QObject
{
    Q_OBJECT
public:
    explicit FileLogger(QObject *parent = nullptr);
    void write(QString message);

signals:

};

#endif // FILELOGGER_H

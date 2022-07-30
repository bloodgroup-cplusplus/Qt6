#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <QObject>
#include<QDebug>
#include<QFile>
#include<QTextStream>
#include "iFile.h"

class FileSystem : public QObject, public iFile
{
    Q_OBJECT
public:
    explicit FileSystem(QObject *parent = nullptr);

signals:

public:
    bool write(QString path, QString data) override;
    QString read(QString path) override;
};

#endif // FILESYSTEM_H

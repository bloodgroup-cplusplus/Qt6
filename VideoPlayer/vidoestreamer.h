#ifndef VIDOESTREAMER_H
#define VIDOESTREAMER_H

#include <QObject>

class VidoeStreamer : public QObject
{
    Q_OBJECT
public:
    explicit VidoeStreamer(QObject *parent = nullptr);

signals:

};

#endif // VIDOESTREAMER_H

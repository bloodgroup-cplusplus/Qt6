#ifndef VIDOESTREAMER_H
#define VIDOESTREAMER_H
#include <QObject>
#include<QTimer>
#include "../opencv/modules/highgui/include/opencv2/highgui.hpp"
#include "../opencv/modules/imgproc/include/opencv2/imgproc.hpp"
#include <iostream>
#include<QImage>
#include<iostream>



class VidoeStreamer : public QObject
{
    Q_OBJECT
public:
    explicit VidoeStreamer(QObject *parent = nullptr);
    ~VidoeStreamer();
    void streamVideo();

public slots:
    void openVideoCamera();

private:
    cv::Mat frame;
    cv::VideoCapture  cap;
    cv::Subdiv2D sub;
    QTimer tUpdate;


signals:
    void newImage(QImage &);

};

#endif // VIDOESTREAMER_H

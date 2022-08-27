#include "vidoestreamer.h"

VidoeStreamer::VidoeStreamer(QObject *parent)
    : QObject{parent}
{

   // connect(&tUpdate, &QTimer::timeout, this, &VidoeStreamer::streamVideo);

}

VidoeStreamer::~VidoeStreamer()
{
    cap.release();
    tUpdate.stop();

}


void VidoeStreamer::streamVideo()
{
    cap>>frame;
    QImage img = QImage(frame.data,frame.cols,frame.rows,QImage::Format_RGB888).rgbSwapped();
    emit newImage(img);
}


void VidoeStreamer::openVideoCamera()
{
    double fps = cap.get(cv::CAP_PROP_FPS);
    tUpdate.start(1000/fps);
}


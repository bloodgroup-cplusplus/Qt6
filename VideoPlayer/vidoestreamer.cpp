#include "vidoestreamer.h"

VidoeStreamer::VidoeStreamer(QObject *parent)
    : QObject{parent}
{

}

VidoeStreamer::~VidoeStreamer()
{
    delete this;

}

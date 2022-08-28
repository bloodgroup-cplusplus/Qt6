#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "vidoestreamer.h"
#include "opencvimageprovider.h"
#include "../opencv/build/opencv2/opencv_modules.hpp"


using namespace cv;
int main(int argc, char *argv[])
{

   // qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    VidoeStreamer  *videoStreamer(new VidoeStreamer);
    OpenCvImageProvider *liveImageProvider(new OpenCvImageProvider);
    engine.rootContext()->setContextProperty("VidoeStreamer", videoStreamer);
    engine.rootContext()->setContextProperty("liveImageProvider",liveImageProvider);

    const QUrl url(u"qrc:/VideoPlayer/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}

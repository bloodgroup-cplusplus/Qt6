#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "../opencv/build/opencv2/opencv_modules.hpp"
#include "../opencv/include/opencv2/opencv.hpp"
#include "../opencv/modules/imgproc/include/opencv2/imgproc.hpp"
#include "../opencv/modules/imgcodecs/include/opencv2/imgcodecs.hpp"
#include "../opencv/modules/highgui/include/opencv2/highgui.hpp"


using namespace cv;
int main(int argc, char *argv[])
{

    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/VideoPlayer/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}

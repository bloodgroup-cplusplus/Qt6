#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
#include<QQmlComponent>
#include "restclient.h"


int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    RestClient *restClient = new RestClient();
    const QUrl url(u"qrc:/RestClient_Get_Post/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.rootContext()->setContextProperty("restClient",restClient);
    engine.load(url);



    return app.exec();
}

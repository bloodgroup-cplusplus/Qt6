#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
#include "Controllers/websockethandler.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    WebSocketHandler socketHandler;

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/DoodleDrawerClient/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    QQmlContext * context = engine.rootContext();
    context->setContextProperty("WebSocketHandler", &socketHandler);
   // we want socket handler lifetime within lifetime


    return app.exec();
}

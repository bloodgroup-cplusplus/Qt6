#include <QGuiApplication>
#include <QQmlApplicationEngine>
// the basic headers rquired for rest client to make http request
// we need the json processing api
// we need to convert the json string to json api
// json can have xml or json as data payload
// we implemented support for json data payload
// we use qnetwork module
// which provides request response


int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/RestClient_Lecture1/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}

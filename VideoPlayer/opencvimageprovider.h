#ifndef OPENCVIMAGEPROVIDER_H
#define OPENCVIMAGEPROVIDER_H

#include <QObject>
#include<QImage>
#include<QQuickImageProvider>

class OpenCvImageProvider : public QObject
{
    Q_OBJECT
public:
    explicit OpenCvImageProvider(QObject *parent = nullptr);
    QImage requestImage(const QString &id, QSize *size, const QSize &requestedSize) ;;
public slots:
    void updateImage(const QImage &image);

signals:
    void imageChanged();

private:
    QImage image;

};

#endif // OPENCVIMAGEPROVIDER_H

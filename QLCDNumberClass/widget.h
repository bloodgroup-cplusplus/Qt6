#ifndef WIDGET_H
#define WIDGET_H
// timer is used for performing repititve tasks
// that method in turn
// let's create our practical example
#include <QWidget>
#include<QLCDNumber>
#include<QHBoxLayout>
#include<QTimer>
#include<QTime>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void showTime();
 private:
    QLCDNumber *qlcd;

};
#endif // WIDGET_H

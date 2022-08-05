#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots: // slot is basically a function
    // it's just basically a function
    void changeText(); // this in the header

private:

    QLabel *label;

};
#endif // WIDGET_H

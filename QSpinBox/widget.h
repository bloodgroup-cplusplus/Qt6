#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QLineEdit>
#include<QSpinBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QLineEdit * price ;
    QLineEdit * total;
    QSpinBox * spinBox;

public slots :
    void changeSpin();
};
#endif // WIDGET_H

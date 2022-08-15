#include "widget.h"
#include "./ui_widget.h"
#include<QtCharts>
#include<QChartView>
#include<QPieSeries>
#include<QPieSlice>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPieSeries * series = new QPieSeries();
    series->append("C++", 80);
    series->append("Python", 70);
    series->append("Java", 50);
    series->append("JavaScript", 60);

    QPieSlice *slice = series->slices().at(1);
    slice->setExploded(true);
    slice->setLabelVisible(true);
    slice->setPen(QPen(Qt::darkGreen,2));
    slice->setBrush(Qt::green);


    QChart  *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Qt6 Pie Chart Example");

    QChartView * chartview = new QChartView(chart);
    chartview->setParent(ui->horizontalFrame);

}

Widget::~Widget()
{
    delete ui;
}


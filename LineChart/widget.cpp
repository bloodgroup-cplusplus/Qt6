#include "widget.h"
#include "./ui_widget.h"
#include <QtCharts>
#include<QChartView>
#include<QLineSeries>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QLineSeries *series = new QLineSeries();
    series->append(0,6);
    series->append(2,4);
    series->append(3,8);
    series->append(7,4);
    series->append(10,5);


    QChart * chart = new QChart();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("Line chart example");
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignmentFlag::AlignBottom);
    chart->setAnimationOptions(QChart::AnimationOption::SeriesAnimations);
    chart->setTheme(QChart::ChartTheme::ChartThemeDark);


    QChartView *chartview = new QChartView(chart);
    chartview->setParent(ui->horizontalFrame);
}

Widget::~Widget()
{
    delete ui;
}


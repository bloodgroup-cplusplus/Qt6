#include "widget.h"
#include "./ui_widget.h"

#include<QtCharts>
#include<QChartView>
#include<QPieSlice>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPieSeries  *series = new QPieSeries();
    series->setHoleSize(0.25);
    series->append("Protein 4.28%", 4.28);
    QPieSlice *slice = new QPieSlice("Fat 15.6%", 15.6);

    slice->setExploded(true);
    slice->setLabelVisible(true);
    series->append("Other 56.4", 56.4);
    series->append("Other 23.8%", 23.8);

    QChart *chart = new QChart();
    chart->addSeries(series);

    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->setTitle("Donut chart example");
    chart->setTheme(QChart::ChartThemeBlueCerulean);

    QChartView *chartview = new QChartView(chart);
    chartview->setParent(ui->horizontalFrame);

}

Widget::~Widget()
{
    delete ui;
}


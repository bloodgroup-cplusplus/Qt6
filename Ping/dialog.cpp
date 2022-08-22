#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->setText("OS Detected: " + m_ping->operatingSystem());
    m_ping->setAddress(ui->lineEdit->text());
    connect(ui->pushButton, &QPushButton::clicked, &m_ping,&ThePing::start);
    connect(ui->pushButton_2, &QPushButton::clicked, &m_ping, &ThePing::stop);
    connect(&m_ping, &ThePing::output, this, &Dialog::output);

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::output(QString data)
{
    ui->
}


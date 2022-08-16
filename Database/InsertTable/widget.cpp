#include "widget.h"
#include "./ui_widget.h"
#include <QSqlDatabase>
#include<QSqlQuery>
#include<QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/Users/bhushansharma/downloads/database.sqlite");
    if(!db.open())

    {
        QMessageBox::information(this,"Database Error", "Database is not created ");
    }

    else
    {
        QSqlQuery query ;
        QString firstname = ui->lineEdit_first_name->text();
        QString lastname = ui->lineEdit_last_name->text();
        QString age  = ui->lineEdit_age->text();

      query.exec("INSERT INTO users (firstname, lastname, age)  VALUES ('"+ firstname+ "', '"+ lastname + "', " +age + ") ");
      QMessageBox::information(this, "Database added", "Data added Values");

      ui->lineEdit_first_name->setText("");
      ui->lineEdit_last_name->setText("");
      ui->lineEdit_age->setText("");
    }


}


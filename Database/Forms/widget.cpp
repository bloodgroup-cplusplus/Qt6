#include "widget.h"
#include "./ui_widget.h"

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
    QString dbName = "users";
    db.setDatabaseName("/Users/bhushansharma/downloads/forms.sqlite");
    if(!db.open())
    {
        QMessageBox::information(this, "Database Error", "Database is not created");
    }

    else
    {
            QSqlQuery query;
                           query.exec("create table users"
                                      "(id integer primary key, "
                                      "name varchar(20), "
                                      "age integer)" );


        QString id = ui->lineEdit->text();
        QString name = ui->lineEdit_2->text();
        QString age = ui->lineEdit_3->text() ;
        QSqlQuery  query1;
        if(query1.exec())
         {

                 query1.exec("INSERT INTO users (id, name, age,email)  VALUES ('"+ id+ "', '"+ name + "', " +age + ") ");
                 QMessageBox::information(this, "Database added", "Data added Values");

                 ui->lineEdit->setText("");
                ui->lineEdit_2->setText("");
                ui->lineEdit_3->setText("");
         }


}
}






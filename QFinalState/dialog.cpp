#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{

    ui->setupUi(this);
    // naming the states
    for(int i = 0; i<10;i++)
    {
        QString s = QString::number(i);
        m_state[i].setObjectName("state"+s);

    }

    // we are going to connect these state to slots
    for (int i = 0 ;i<10;i++)
    {
        if(i!=9)
        {

        connect(&m_state[i], &QState::entered, this, &Dialog::stateEntered);
        connect(&m_state[i], &QState::exited,this, &Dialog::stateExited);
        }
        if(i==9)
        {
            connect(&m_state[i], &QState::entered, this, &Dialog::stateEntered);
            connect(&m_state[i], &QState::finished, this, &Dialog::stateFinished);

        }
    }

    // change the properties of the states
    // the state is going to hold some sort of internal property
    // show it in the ui

    for(int i =0; i<10;++i)
    {
        QString s = QString::number(i);
        if(i==9)
        {
            m_state[i].assignProperty(ui->lineEdit, "text", "Finished");
        }
        else
        {
        m_state[i].assignProperty(ui->lineEdit, "text", "In State"+ s);
        }
    }


    // we are going to add transitions
    for(int i = 0; i<10;i++) {
        if(i!=9)
        {
        m_state[i].addTransition(ui->pushButton,&QPushButton::clicked,&m_state[(i+1)]);
        }
        else
        {
            m_state[i].addTransition(ui->pushButton, &QPushButton::clicked, &m_state[9]);

        }
    }
// add them to a state machine
        for(int i = 0; i<10;i++)
        {
            m_statemachine.addState(&m_state[i]);
        }

        m_statemachine.setInitialState(&m_state[0]);
        m_statemachine.start();
 }

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    qInfo()<<"Clicked";

}

void Dialog::stateEntered()
{
    qInfo() <<sender()<<"Entered";

}

void Dialog::stateExited()
{
    qInfo() <<sender()<<"Exitted";

}

void Dialog::stateFinished()
{
    qInfo() <<sender()<<"Finished";
    ui->pushButton->setEnabled(false);
    QMessageBox::information(this, "Finished", "The state machine has finished");

}


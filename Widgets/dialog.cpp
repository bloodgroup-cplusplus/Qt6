#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    m_state1.setObjectName("State1");
    m_state2.setObjectName("State2");
    m_state3.setObjectName("State3");
    // we are gong to connect these states to slots
    // connect the states to the slots
    connect (&m_state1, &QState::entered , this, &Dialog::stateEntered);
    connect(&m_state1,&QState::exited, this, &Dialog::stateExited);
    connect(&m_state2, &QState::entered, this, &Dialog::stateEntered);
    connect(&m_state2, &QState::exited, this, &Dialog::stateExited);
    connect(&m_state3, &QState::entered, this, &Dialog::stateEntered);
    connect(&m_state3, &QState::exited, this, &Dialog::stateExited);


    // Change the properties of the states
    // the state is going to hold some sort of internal property

    m_state1.assignProperty(ui->lineEdit, "text", "In State 1");
    m_state2.assignProperty(ui->lineEdit, "text", "In State 2");
    m_state3.assignProperty(ui->lineEdit, "text", "In state 3");

    // add transitions from one state to another

    // what does it means to add a transition
    m_state1.addTransition(ui->pushButton, &QPushButton::clicked, &m_state2);
    m_state2.addTransition(ui->pushButton, &QPushButton::clicked, &m_state3);
    m_state3.addTransition(ui->pushButton, &QPushButton::clicked, &m_state1);


    // add them to the state machine

    m_statemachine.addState(&m_state1);
    m_statemachine.addState(&m_state2);
    m_statemachine.addState(&m_state3);

    m_statemachine.setInitialState(&m_state1);
    m_statemachine.start();


}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    qInfo() <<"Clicked";

}

void Dialog::stateEntered()
{
    qInfo() <<sender()<<"Entered";

}

void Dialog::stateExited()
{
    qInfo() <<sender() <<"Exitted";

}


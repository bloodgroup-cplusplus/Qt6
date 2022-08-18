#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    createGroup("Group1", 5, ui->lineEdit);
    createGroup("Group2", 5, ui->lineEdit_2);
    createGroup("Group3", 5, ui->lineEdit_3);
    createTransitions();
    createFinal();
    m_statemachine.setInitialState(m_states.at(0));
    m_statemachine.start();
}

Dialog::~Dialog()
{
    qDeleteAll(m_states);
    m_states.clear();
    delete ui;
}


void Dialog::on_pushButton_clicked()
{

    // if we left this blank we are going to have a problem
    // we are using the ide to automatically create signals and slots for us
    if(m_statemachine.isRunning()) qInfo() <<"Clicked";

   }

void Dialog::stateEntered()
{

        if(!sender()) return ;
        qInfo() <<sender() <<"Entered";
}

void Dialog::stateExited()
{
    if(!sender())return ;
    qInfo() <<sender() <<"Exited";

}

void Dialog::stateFinished()
{
    if(!sender()) return ;
    qInfo() <<sender() <<"Finishd";
    QMessageBox::information(this, "finished", "The state machine has finished");

}

void Dialog::createGroup(QString name, int count, QLineEdit *editor)
{
    QState * parent = new QState();
    connectState(parent, editor);
    parent->setObjectName(name);
    m_statemachine.addState(parent);

    QState * previous = nullptr;
    for(int i =0;i<count;++i)
    {
        QState * state = new QState(parent);
        // we have state and adding it to state machines
        // we are going to add that to our list
        if(i ==0) // if we are the first one
        {
            parent->setInitialState(state);
            state->setObjectName(name + ": "+QString::number(i));
            connectState(state,editor);
            if(previous)
            {
                previous ->addTransition(ui->pushButton, &QPushButton::clicked, state);
            }
            previous = state;
        }
    }
    m_states.append(parent);

}

void Dialog::connectState(QState *state, QLineEdit *editor)
{
    connect(state,&QState::entered, this, &Dialog::stateEntered);
    connect(state, &QState::exited, this, &Dialog::stateExited);
   connect(state, &QState::finished, this, &Dialog::stateFinished);
   state->assignProperty(editor, "text", state->objectName());


}

void Dialog::createTransitions()
{
    // this is where we move from one state to another

    QState * previous = nullptr;
    for(int i = 0; i<m_states.length();i++)
    {
        QState * state = m_states.at(i);
        if(previous)
        {
            previous->addTransition(ui->pushButton, &QPushButton::clicked, state);

        }
        previous = state;
    }


}

void Dialog::createFinal()
{
    QState  *previous = m_states.last();
    QFinalState *final = new QFinalState();
    previous->addTransition(ui->pushButton,&QPushButton::clicked, final);
    // this tells the state machine that we are done
    connect(&m_statemachine,&QStateMachine::finished,this, &Dialog::stateFinished);
    m_statemachine.addState(final);

}


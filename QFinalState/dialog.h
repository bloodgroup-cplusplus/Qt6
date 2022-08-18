#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QStateMachine>
#include<QState>
#include<QDebug>
#include<QFinalState>
#include<QAbstractState>
#include<QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:


    void on_pushButton_clicked();
    void stateEntered();
    void stateExited();
    void stateFinished();

private:
    Ui::Dialog *ui;
    QStateMachine m_statemachine;
    QState m_state[10];
};
#endif // DIALOG_H

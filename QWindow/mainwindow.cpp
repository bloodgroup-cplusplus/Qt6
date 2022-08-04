#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("QMainWindow");
    resize(500,300);
    // let's now create a status bar
    statusBar()->showMessage("hello world", 5000);

    // we could also add timer for status bar as second parameter


    // we could also craete menu bar
    menuBar()->addMenu("File");
    menuBar()->addMenu("Edit");

    // let's add some menu items and icons
    // to add menu items we need q action
    // since the user expects each commnet to be perfromed in thes ame
    // it's useful to represent each comments as actions
    // word processor and user processor
    // items will be automatically saved
    // now we have two menu bars in here
    QAction *copyAction = new QAction("Copy");
    copyAction->setIcon(QIcon(":/images/FZRpGGQXoAAKtYm.jpeg"));

    copyAction->setShortcut(QKeySequence::Copy);

    QAction* pasteAction = new QAction("Paste");
    copyAction->setIcon(QIcon(":/images/paste.png"));
    pasteAction->setShortcut(QKeySequence::Paste);

    QMenu * fileMenu = menuBar()->addMenu("File");
    fileMenu->addAction(copyAction);
    fileMenu->addAction(pasteAction);
}

MainWindow::~MainWindow()
{
}


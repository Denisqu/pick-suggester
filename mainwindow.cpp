#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "picksuggesterwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(new PickSuggesterWidget(this));
}

MainWindow::~MainWindow()
{
    delete ui;
}


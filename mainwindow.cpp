#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    zycie(new Zycie(this))
{
    ui->setupUi(this);
    QWidget * q = new QWidget();
    setCentralWidget(q);

    layout = new QVBoxLayout();
    paseklayout= new QHBoxLayout();
    startGuzik = new QPushButton("Start");
    stopGuzik = new QPushButton("Stop");


    layout->addLayout(paseklayout);
    layout->addWidget(zycie);
    paseklayout->addWidget(startGuzik);
    paseklayout->addWidget(stopGuzik);
    q->setLayout(layout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

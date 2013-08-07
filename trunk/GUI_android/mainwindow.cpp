#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(GotSkreenShot()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

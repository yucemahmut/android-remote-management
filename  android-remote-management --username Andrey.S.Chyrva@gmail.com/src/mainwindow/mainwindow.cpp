#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    command = new Commands();
    QObject::connect(ui->start_server, SIGNAL(clicked()), command, SLOT(startServer()));
    QObject::connect(ui->stop_server, SIGNAL(clicked()), command, SLOT(stopServer()));
    QObject::connect(ui->get_devices, SIGNAL(clicked()), command, SLOT(getDevices()));
    QObject::connect(ui->get_screenshot, SIGNAL(clicked()), command, SLOT(getScreenshot()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

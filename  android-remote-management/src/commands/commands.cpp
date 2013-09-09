#include "commands.h"

Commands::Commands(QObject *parent) :
    QObject(parent), pointerOnProcess(new QProcess())
{
}

void Commands::startServer()
{
    //pointerOnProcess->start("E:\\ADB\\adb.exe start-server");
    pointerOnProcess->start("..\\utils\\ADB\\adb.exe start-server");
    qDebug() << "process was started";
    pointerOnProcess->waitForFinished();
    pointerOnProcess->close();
}

void Commands::stopServer()
{
    pointerOnProcess->start("..\\utils\\ADB\\adb.exe kill-server");
    qDebug() << "process was stoped";
    pointerOnProcess->waitForFinished();
    pointerOnProcess->close();
}

void Commands::getDevices()
{
    pointerOnProcess->start("..\\utils\\ADB\\adb.exe devices");
    qDebug() << "getting of devices list...";
    if(pointerOnProcess->waitForFinished())
    {
        QByteArray bArray = pointerOnProcess->readAll();
        QString qs(bArray);
        qDebug() << qs;
        pointerOnProcess->finished(0, pointerOnProcess->NormalExit);
    }
    pointerOnProcess->close();
}

void Commands::getScreenshot()
{
    qDebug() << "getting of screenshot...";
    pointerOnProcess->start("..\\utils\\ADB\\adb.exe pull dev//graphics//fb0 E:\\ ");
    //pointerOnProcess->start("E:\\ADB\\adb.exe shell ");
    pointerOnProcess->waitForFinished();
    pointerOnProcess->close();
    QFile file("E:\\fbo");
    file.open(QIODevice::ReadOnly);
    qDebug() << file.readAll();

}

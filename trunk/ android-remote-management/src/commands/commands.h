#ifndef COMMANDS_H
#define COMMANDS_H

#include <QObject>
#include <QPointer>
#include <QProcess>

#include <QString>
#include <QByteArray>
#include <QDebug>
#include <QDataStream>
#include <QFile>

class Commands : public QObject
{
        Q_OBJECT
    public:
        explicit Commands(QObject *parent = 0);

    signals:

    public slots:
        void startServer();
        void stopServer();
        void getDevices();
        void getScreenshot();

    private:
        QPointer<QProcess> pointerOnProcess;
};

#endif // COMMANDS_H

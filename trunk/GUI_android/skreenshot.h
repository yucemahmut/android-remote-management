#ifndef SKREENSHOT_H
#define SKREENSHOT_H

#include <QThread>
#include <QString>
#include <QImage>
#include <QProcess>


class SkreenShot : public QThread
{
    Q_OBJECT
public:
    explicit SkreenShot(QObject *parent = 0);
    QString Name;   //name of device
    QString Path;
   // QImage Skreen;  //skreenshot from android
    void GotSkreenShot();
signals:
    
public slots:

};

#endif // SKREENSHOT_H

#include "skreenshot.h"

SkreenShot::SkreenShot(QObject *parent) :
    QThread(parent)
{
}

void SkreenShot::GotSkreenShot()
{

    //QString command = "adb pull /dev/graphics/fb0 E:/apriorit";
    QString command = "adb devices";
    QScopedPointer<QProcess> adb;
    QString cm="cd C:\adt-bundle-windows-x86-20130522\adt-bundle-windows-x86-20130522\sdk\platform-tools";
    adb->start(cm);
    adb->start(command);

}

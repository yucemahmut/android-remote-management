#include "mainwindow.h"
#include <QApplication>
#include <skreenshot.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    SkreenShot* obj;
    obj->Name="asd";
    obj->Path="E:/apriorit";
    obj->GotSkreenShot();
    w.show();

    return a.exec();
}

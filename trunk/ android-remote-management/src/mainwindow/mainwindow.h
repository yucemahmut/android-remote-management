#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "commands/commands.h"
#include <QMainWindow>
#include <Qobject>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;
        Commands *command;
};

#endif // MAINWINDOW_H

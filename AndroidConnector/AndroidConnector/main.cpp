#include "CommandGenerator.h"

#include "MainWindow.h"
#include <qtextstream.h>

#include <QApplication>
#include <QProcess>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

	QProcess *proc = new QProcess();
	CommandGenerator *cg = new CommandGenerator();
	QByteArray bArray;
	QTextStream Qcout(stdout);
	QString *qs;
	proc->start(cg->getPath(), cg->getDevices());

	if(proc->waitForFinished())
	{
		bArray = proc->readAll();
		qs = new QString(bArray);
		Qcout << qs;
		proc->finished(0, proc->NormalExit);
	}
	//bArray = proc->readAll();
	 
	
	
    w.show();
    
    return a.exec();
}

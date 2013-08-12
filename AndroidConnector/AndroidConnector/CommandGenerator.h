#include <qstring.h>
#include <qstringlist.h>


class CommandGenerator {

private: 
	QString path;
	QStringList arguments;

public:
	CommandGenerator();
	~CommandGenerator();
	QString getPath();
	QStringList startADBServer();
	QStringList stopADBServer();

	QStringList getDevices();
};
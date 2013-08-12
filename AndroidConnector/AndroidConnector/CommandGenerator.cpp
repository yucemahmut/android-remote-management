#include "CommandGenerator.h"

CommandGenerator::CommandGenerator()
{
	this->path = "ADB\\adb.exe";
	this->arguments.append("devices");
}

CommandGenerator::~CommandGenerator()
{

}

QString CommandGenerator::getPath()
{
	return this->path;
}

QStringList CommandGenerator::getDevices()
{
	return this->arguments;
}
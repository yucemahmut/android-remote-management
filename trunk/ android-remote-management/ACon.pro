#-------------------------------------------------
#
# Project created by QtCreator 2013-09-09T03:59:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ACon
TEMPLATE = app


SOURCES += src/main.cpp\
		src/mainwindow/mainwindow.cpp \
		src/commands/commands.cpp

HEADERS  += src/mainwindow/mainwindow.h \
			src/commands/commands.h

FORMS    += src/gui_forms/mainwindow.ui

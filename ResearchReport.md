Study of the development environment.
Purpose: Selection of the development environment and the necessary frameworks and libraries.
Description of the information: The study produced the following information relevant application development environment is QTcreator 5.1, since it has support for C + + and sdk android. Which is sufficient to complete the project. Setting up the environment is made in accordance with the recommendations on page http://doc-snapshot.qt-project.org/qtcreator-2.8/creator-developing-android.html

The research funds will provide remote access to the android from PC.
Purpose: The choice of means and methods of remote access to the android from PC.
Description of the information: The study produced the following information, the best means of gaining remote access to the android - have tool from android sdk - android debug bridge (adb). Adb - virualnymi is a link between android and PC, it is possible to control the behavior of, and access to the device's file system by sending a simple console commands. To work in an environment with adb QTcreator need to add the library sdk and ndk. Communication takes place by sending a standard adb commands from the PC to the android. An example of such a command: adb [-d |-e |-s <serial number>] command. Where: d - direction adb commands only devices connected via USB.
> e - yapravlenie adb commands only in emulators.
> s - direction adb commands specified emulator / device showing serialNumber
> command - one of the teams adb.
A full list of commands is available at the link below and at the document “AdbCommands”.
Information obtained from: http://developer.android.com/tools/help/adb.html
.
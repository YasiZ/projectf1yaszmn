#include "log.h"

void log::logg(const QString &event) {
    QFile logFile("log.txt");

    if(!logFile.open(QIODevice::Append | QIODevice::Text)) {
        qDebug() << "Eror: couldn't open log file!";
        return;
    }

    QTextStream logStream(&logFile);

    logStream << event << "\n";

    logFile.close();
}

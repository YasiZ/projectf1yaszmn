#ifndef LOG_H
#define LOG_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>

class log
{
public:
    static void logg(const QString &event);
};

#endif // LOG_H

#ifndef TOOL_H
#define TOOL_H

#include <QString>
#include <QDir>
#include <QFile>

class Tool
{
public:
    static bool isDirExist(QString strDir);
    static bool isFileExist(QString strFile);
    static QDir *tmpDir;
    static QFile *tmpFile;
};

#endif // TOOL_H

#include "tool.h"

bool Tool::isDirExist(QString strDir)
{
    QDir tmpDir(strDir);
    return tmpDir.exists();
}

bool Tool::isFileExist(QString strFile)
{
    QDir tmpFile(strFile);
    return tmpFile.exists();
}

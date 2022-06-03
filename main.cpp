#include "mainwindow.h"
#include <QApplication>
#include <QDir>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDir* d = new QDir;
    QFile configTemplete(":/user/config.ini");
    if(!Tool::isDirExist(QDir::currentPath()+"/user"))
    {
        d->mkpath(QDir::currentPath()+"/user");
        configTemplete.open(QFile::ReadOnly);
        QFile userConfig(QDir::currentPath()+"/user/config.ini");
        userConfig.open(QFile::WriteOnly);
        userConfig.write(configTemplete.readAll());
    }else if(!Tool::isFileExist(QDir::currentPath()+"/user/config.ini"))
    {
        configTemplete.open(QFile::ReadOnly);
        QFile userConfig(QDir::currentPath()+"/user/config.ini");
        userConfig.open(QFile::WriteOnly);
        userConfig.write(configTemplete.readAll());
    }

    MainWindow w;
    w.show();

    return a.exec();
}

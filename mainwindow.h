#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include <QTranslator>
#include <QSettings>
#include <QDebug>
#include <QDir>
#include <QFile>
#include "i18nwindow.h"
#include "tool.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actioni18n_triggered();

private:
    Ui::MainWindow *ui;
    QTranslator *trans;
    QSettings *configRead;

};

#endif // MAINWINDOW_H

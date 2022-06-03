#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "i18nwindow.h"

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
};

#endif // MAINWINDOW_H

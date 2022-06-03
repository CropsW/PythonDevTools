#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    trans = new QTranslator;
    QSettings settings(QDir::currentPath()+"/user/config.ini",QSettings::IniFormat);
    settings.setIniCodec("UTF8");
    settings.beginGroup("language");
    trans->load(":/lang/"+settings.value("cur").toString()+".qm");
    settings.endGroup();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_actioni18n_triggered()
{
    I18nWindow* I18nWindow = new class I18nWindow;
    I18nWindow->exec();
}

#include "i18nwindow.h"
#include "ui_i18nwindow.h"
#include <QDebug>

I18nWindow::I18nWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::I18nWindow)
{
    QStringList languages;
    QString tmp;
    ui->setupUi(this);
    QSettings settings(QDir::currentPath()+"/user/config.ini",QSettings::IniFormat);
    settings.setIniCodec("UTF8");
    settings.beginGroup("languages");
    languages = settings.value("all").toStringList();
    settings.endGroup();
    settings.beginGroup("language");
    tmp = settings.value("cur").toString();
    settings.endGroup();
    settings.beginGroup("languages");
    tmp = settings.value(tmp).toString();
    languages.removeOne(tmp);
    languages.insert(0,tmp);
    ui->comboBox->addItems(languages);
}

I18nWindow::~I18nWindow()
{
    delete ui;

}


void I18nWindow::on_btnReload_clicked()
{
    ui->retranslateUi(this);
}



void I18nWindow::on_comboBox_activated(const QString &arg1)
{
    QSettings settings(QDir::currentPath()+"/user/config.ini",QSettings::IniFormat);
    settings.setIniCodec("UTF8");
    settings.beginGroup("languages");
    qDebug()<<trans->load(":/lang/"+settings.value(arg1).toString()+".qm");
}

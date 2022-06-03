#include "i18nwindow.h"
#include "ui_i18nwindow.h"

I18nWindow::I18nWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::I18nWindow)
{
    ui->setupUi(this);
}

I18nWindow::~I18nWindow()
{
    delete ui;
}


void I18nWindow::on_btnReload_clicked()
{
    ui->retranslateUi(this);
}

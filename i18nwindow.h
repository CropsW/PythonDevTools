#ifndef I18NWINDOW_H
#define I18NWINDOW_H

#include <QDialog>
#include <QSettings>
#include <QDir>
#include <QTranslator>

namespace Ui {
class I18nWindow;
}

class I18nWindow : public QDialog
{
    Q_OBJECT

public:
    explicit I18nWindow(QWidget *parent = nullptr);
    ~I18nWindow();

private slots:

    void on_btnReload_clicked();

    void on_comboBox_activated(const QString &arg1);

private:
    Ui::I18nWindow *ui;
    QTranslator* trans;

};

#endif // I18NWINDOW_H

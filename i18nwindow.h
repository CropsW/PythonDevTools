#ifndef I18NWINDOW_H
#define I18NWINDOW_H

#include <QDialog>
#include <QSettings>

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

private:
    Ui::I18nWindow *ui;

};

#endif // I18NWINDOW_H

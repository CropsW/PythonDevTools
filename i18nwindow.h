#ifndef I18NWINDOW_H
#define I18NWINDOW_H

#include <QDialog>

namespace Ui {
class I18nWindow;
}

class I18nWindow : public QDialog
{
    Q_OBJECT

public:
    explicit I18nWindow(QWidget *parent = nullptr);
    ~I18nWindow();

private:
    Ui::I18nWindow *ui;
};

#endif // I18NWINDOW_H

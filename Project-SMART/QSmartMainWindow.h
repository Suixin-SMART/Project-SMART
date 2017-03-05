#ifndef QSMARTMAINWINDOW_H
#define QSMARTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class QSmartMainWindow;
}

class QSmartMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QSmartMainWindow(QWidget *parent = 0);
    ~QSmartMainWindow();

private:
    Ui::QSmartMainWindow *ui;
};

#endif // QSMARTMAINWINDOW_H

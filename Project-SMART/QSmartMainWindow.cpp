#include "QSmartMainWindow.h"
#include "ui_QSmartMainWindow.h"

QSmartMainWindow::QSmartMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QSmartMainWindow)
{
    ui->setupUi(this);
}

QSmartMainWindow::~QSmartMainWindow()
{
    delete ui;
}

#include "QSmartMainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSmartMainWindow w;
    w.show();

    return a.exec();
}

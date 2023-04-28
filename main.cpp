
#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::addLibraryPath("D:\QT_Project\GitHub\Demo\icon");
    MainWindow w;
    w.show();
    return a.exec();
}

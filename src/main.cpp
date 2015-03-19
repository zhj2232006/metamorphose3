#include "mainwindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window(new RenamerModel(), new OperationModel());
    window.show();

    return app.exec();
}

#include <QApplication>
#include <QPushButton>
#include "./ui_qt_tv.h"
#include "logic_controller.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    ControllerMainWindow window(nullptr);
    Ui::MainWindow tv;
    tv.setupUi(&window);
    window.resize(240,680);
    window.lineEdit = tv.lineEdit;
    window.lineEdit_2 = tv.lineEdit_2;
    window.show();
    return QApplication::exec();
}

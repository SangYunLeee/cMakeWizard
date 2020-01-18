#include "hellowwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HellowWidget w;
    w.show();
    return a.exec();
}

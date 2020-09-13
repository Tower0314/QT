#include "cwidget.h"
#include "pwdlineedit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CWidget w;
    PwdLineEdit pl;
    pl.show();

    //w.show();

    return a.exec();
}

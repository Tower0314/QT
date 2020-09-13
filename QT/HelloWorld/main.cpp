#include <QApplication>
#include "cwidget.h"
/*
*Function:创建应用程序，并运行应用程序，开始应用程序的消息循环和事件处理
*Author:taowei
*Date：2020-09-13
*/
int main(int argc, char** argv)
{
    QApplication app(argc,argv);   // 标准应用程序类
    CWidget widget;
    widget.init();
    app.exec();
    return 0;
}

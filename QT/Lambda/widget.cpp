/*copyright:tower
 *descrip:练习Lambda表达式的使用
 *last modify：2020-09-16
 */
#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    closeBtn.setParent(this);
    closeBtn.setCheckable(true); // setCheckable(true)为属性，表示可以选中
    /* Lambda 表达式，即匿名函数
     *[]:传入外部的参数：
     *  para：
     *      = ：值传递（只读）
     *      = mutable （可修改）
     *      & 引用
     *（）：参数列表
     * {}：函数体
     */
    connect(&closeBtn,&CPushButton::toggled,
            [=](bool checked) mutable
    {
        qDebug()<<checked;
        if (checked) {
            closeBtn.setText("good");
        } else {
            closeBtn.setText("see you");
        }


    }
    );
}

Widget::~Widget()
{

}

void Widget::init()
{
    resize(640,480);
    setMaximumSize(640,480);
    setMinimumSize(640,480);
    closeBtn.resize(100,50);
    closeBtn.move(100,100);
    show();
}

#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget),
    userName(this),
    passWord(this),
    userNameText(this),
    passWordText(this)
    //headimg(this)
{
    ui->setupUi(this);
    setItemGeometry();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setItemGeometry()
{
    this->userNameText.setGeometry(100,100,60,25);
    userNameText.setText("用户名：");
    this->userName.setGeometry(180,100,120,25);
    this->passWordText.setGeometry(100,150,60,25);
    passWordText.setText("密码：");
    this->passWord.setGeometry(180,150,120,25);
}

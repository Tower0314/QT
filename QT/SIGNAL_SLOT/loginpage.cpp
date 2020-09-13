#include "loginpage.h"

LoginPage::LoginPage(QWidget *parent) : QWidget(parent),
    usrLabel(this),
    pwdLabel(this),
    usrselect(this),
    loginBtn(this)
{
       pwdLineEdit.setParent(this);
}

void LoginPage::init()
{
    resize(800,600);
    setMaximumSize(800,600);
    setMinimumSize(800,600);
    initItemGemotry();
    setItemGemotry();
    setWindowTitle("welcome login");
    show();
}

void LoginPage::initItemGemotry()
{
    usrLabel.setText("用户名：");
    usrselect.addItem("admin");
    usrselect.addItem("operator");
    pwdLabel.setText("密码：");
    loginBtn.setText("登录");

}
void LoginPage::setItemGemotry()
{
   usrLabel.resize(80,20);
   usrselect.resize(100,20);
   pwdLabel.resize(80,20);
   pwdLineEdit.resize(100,20);
   loginBtn.resize(50,20);

   usrLabel.move(100,100);
   usrselect.move(150,100);
   pwdLabel.move(100,150);
   pwdLineEdit.move(150,150);
   loginBtn.move(150,200);

}

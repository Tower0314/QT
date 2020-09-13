#include <QApplication>
#include "loginpage.h"

int main(int argc, char** argv)
{
  QApplication app(argc, argv);
  LoginPage login;
  login.init();
  return app.exec();
}

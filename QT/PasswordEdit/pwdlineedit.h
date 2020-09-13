#ifndef PWDLINEEDIT_H
#define PWDLINEEDIT_H
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QFile>
#include <QDebug>

class PwdLineEdit:public QLineEdit
{
    Q_OBJECT
public:
  PwdLineEdit();
  ~PwdLineEdit();
private:

protected slots:
  void showEye(bool checked);

};

#endif // PWDLINEEDIT_H

#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include "ui_passwordlineedit.h"

class LoginPage : public QWidget
{
    Q_OBJECT
public:
    explicit LoginPage(QWidget *parent = nullptr);

signals:

public slots:
public:
    void init();
    void initItemGemotry();
    void setItemGemotry();
private:
    QLabel usrLabel;
    QLabel pwdLabel;
    QComboBox usrselect;
    CPasswordLineEdit pwdLineEdit;
    QPushButton loginBtn;
};

#endif // LOGINPAGE_H

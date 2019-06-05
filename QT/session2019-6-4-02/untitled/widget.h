#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QImage>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QLineEdit userName;
    QLineEdit passWord;
    QLabel userNameText;
    QLabel passWordText;
    QImage headimg;

private:
    void setItemGeometry();

};

#endif // WIDGET_H

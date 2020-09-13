#ifndef CWIDGET_H
#define CWIDGET_H
#include <QWidget>
#include <QPushButton>
#include <QIcon>

class CWidget:public QWidget
{
    Q_OBJECT
public:
   explicit CWidget(QWidget *parent = nullptr);
public:
    void init();
    void setItemGeometry();
private:
    QPushButton m_pushBtn;
};

#endif // CWIDGET_H

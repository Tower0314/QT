#include "cwidget.h"

CWidget::CWidget(QWidget *parent) : QWidget(parent),m_pushBtn(this)
{

}

void CWidget::init()
{
    connect(&m_pushBtn,&QPushButton::pressed,this,&CWidget::close); // QT5写法
    // connect(&m_pushBtn,SIGNAL(pressed()),this,SLOT(close())); // QT4写法
    setStyleSheet("border-image:url(:/IU.jpg);");
    setWindowTitle("Hello World!!!");
    resize(700,698);
    show();
    setItemGeometry();
    setMaximumSize(700,698);
    setMinimumSize(700,698);
}

void CWidget::setItemGeometry()
{
    m_pushBtn.sizePolicy();
    m_pushBtn.setGeometry(0,0,700,698);
}

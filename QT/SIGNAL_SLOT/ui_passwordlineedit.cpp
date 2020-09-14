#include "ui_passwordlineedit.h"

CPasswordLineEdit::CPasswordLineEdit()
{
    eyeBtn.setParent(this);
    init();
    connect(&eyeBtn,SIGNAL(toggled(bool)),this,SLOT(controlEye(bool)));
}

void CPasswordLineEdit::init()
{
    eyeBtn.setCursor(Qt::PointingHandCursor);
    eyeBtn.setCheckable(true);
    QHBoxLayout* layout = new QHBoxLayout();
    layout->addStretch();
    layout->addWidget(&eyeBtn);
    layout->setContentsMargins(0, 0, 0, 0);
    setLayout(layout);
}

void CPasswordLineEdit::controlEye(bool checked)
{
    // qDebug()<<checked;
    if(checked)
    {
        setEchoMode(QLineEdit::Normal);
        QIcon ico("image\eye_hidden.png");
        eyeBtn.setIcon(ico);
    }
    else
    {
        setEchoMode(QLineEdit::Password);
        QIcon ico("image\eye_show.png");
        eyeBtn.setIcon(ico);
    }
}

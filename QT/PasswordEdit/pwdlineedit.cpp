#include "pwdlineedit.h"

PwdLineEdit::PwdLineEdit()
{
    setEchoMode(QLineEdit::Password);

    QPushButton* button = new QPushButton();
    button->setCursor(Qt::PointingHandCursor);
    button->setCheckable(true);

    connect(button, SIGNAL(toggled(bool)),this, SLOT(showEye(bool)));

    QHBoxLayout* layout = new QHBoxLayout();
    layout->addStretch();
    layout->addWidget(button);
    layout->setContentsMargins(0, 0, 0, 0);
    setLayout(layout);

}

PwdLineEdit::~PwdLineEdit()
{}

void PwdLineEdit::showEye(bool checked)
{
    if (checked)
    {
        setEchoMode(QLineEdit::Normal);
    }
    else
    {
        setEchoMode(QLineEdit::Password);
    }
}



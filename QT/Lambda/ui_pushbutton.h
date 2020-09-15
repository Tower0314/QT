#ifndef UI_PUSHBUTTON_H
#define UI_PUSHBUTTON_H

#include <QWidget>
#include <QPushButton>

class CPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit CPushButton(QPushButton *parent = nullptr);

signals:

public slots:
};

#endif // UI_PUSHBUTTON_H

#ifndef UI_PASSWORDLINEEDIT_H
#define UI_PASSWORDLINEEDIT_H
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>
class CPasswordLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    CPasswordLineEdit();
private:
    void init();
private slots:
    void controlEye(bool checked);
private:
    QPushButton eyeBtn;
};

#endif // UI_PASSWORDLINEEDIT_H

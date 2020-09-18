#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QComboBox>
#include <QDebug>
#include <QFont>

enum ParaNum{
    ZERO,
    FIVE = 5,
    SEVEN = 7,
    NINE = 9,
};

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
public:
  void Init(void);
  void InitItemGemotry(void);
  void CreateLeftTable(int num);
  void CreateRightTable(int num);
public slots:
  void AddItemNum(int index);
private:
  QTableWidget tw;
  QComboBox selectCombox;
  qint16 tableRow;
};

#endif // WIDGET_H

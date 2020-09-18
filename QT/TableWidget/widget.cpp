/*
 *解决元素个数从多到少的刷新问题
 *
 *
 */
#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent),tableRow(0)
{
    tw.setParent(this);
    selectCombox.setParent(this);
    connect(&selectCombox,SIGNAL(activated(int)), this, SLOT(AddItemNum(int)));
}

Widget::~Widget()
{

}

void Widget::Init()
{
    show();
    tw.showGrid();
    InitItemGemotry();
}

void Widget::InitItemGemotry(void)
{
    QFont font("Helvetica [Cronyx]", 16);
    selectCombox.setFont(font);
    tw.setColumnCount(2);
    tw.setRowCount(5);
    tw.setShowGrid(true);
    tw.move(100,0);
    selectCombox.resize(100,50);
    selectCombox.move(150,200);
    selectCombox.addItem("5");
    selectCombox.addItem("7");
    selectCombox.addItem("9");
}

void Widget::AddItemNum(int index)
{
    qDebug() << index;
    qint16 totle = 0;
    if (index == 0) {
        totle = FIVE;
    } else if (index == 1){
        totle = SEVEN;
    } else if (index == 2) {
        totle = NINE;
    }

   tableRow = (totle % 2 == 0)? totle / 2 : totle / 2 + 1;
   qint16 left = tableRow;
   qint16 right = totle - tableRow;
   // 切换时如果上一轮显示比当前多，且左右列的数目不等，则去除多列
   if(right < left)
   {
       tw.takeItem(right, 1);
   }
   qDebug() << "tableRow:" << tableRow << "left:" << left << "right:" << right;
   tw.setRowCount(tableRow);
   CreateLeftTable(left);
   CreateRightTable(right);
}

void Widget::CreateLeftTable(int num)
{
    for(int i = 0;i < num; i++){
        QTableWidgetItem *it = new QTableWidgetItem;
        it->setText(QString("%1").arg(i + 1));
        tw.setItem(i, 0, it);
    }
}

void Widget::CreateRightTable(int num)
{
    qDebug() << "tableRow:" << tableRow;
    for(int i = tableRow;i < num + tableRow; i++) {
        QTableWidgetItem *it = new QTableWidgetItem;
        it->setText(QString("%1").arg(i + 1));
        tw.setItem(i - tableRow, 1, it);
    }
}



#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QTableWidget>
#include <QStringList>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //创建一个窗口，作为输入框的父窗口
    QWidget main_window;

    //设置main_window窗口属性
    main_window.setWindowTitle("***测斜仪");
    main_window.resize(1000,600);
    main_window.setWindowIcon(QIcon(":/logo.ico"));

    //设置表格相关属性
    QTableWidget data_table(100,4,&main_window);
    data_table.resize(560,500);
    data_table.setHorizontalHeaderLabels(QStringList()<<"你好"<<"谢谢"<<"再见"<<"肉夹馍");

    //创建开始按键
    QPushButton start_button("开始",&main_window);
    start_button.move(100,520);
    start_button.resize(150,60);

    //创建导出数据按键
    QPushButton output_button("导出数据",&main_window);
    output_button.move(450,520);
    output_button.resize(150,60);

    //创建关机按键
    QPushButton turn_off_button("关机",&main_window);
    turn_off_button.move(800,520);
    turn_off_button.resize(150,60);


    main_window.show();

    return a.exec();
}

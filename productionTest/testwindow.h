#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <unistd.h>
#include <QTime>
#include <QTimer>

namespace Ui {
class TestWindow;
}

class TestWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestWindow(QWidget *parent = 0);
    void delay();
    ~TestWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();



private:
    Ui::TestWindow *ui;
};

#endif // TESTWINDOW_H

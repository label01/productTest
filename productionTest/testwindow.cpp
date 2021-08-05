#include "testwindow.h"
#include "ui_testwindow.h"

TestWindow::TestWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestWindow)
{
    system("term &");
    ui->setupUi(this);
}

TestWindow::~TestWindow()
{
    delete ui;
}

void TestWindow::on_pushButton_clicked()
{
    //system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roslaunch keepbot_robot_bringup keepbot_robot_start.launch' &");
    //system("term &");
    system(" gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roslaunch keepbot_robot_bringup keepbot_robot_start.launch' &");
    qDebug("loading,please wait");
   //delay();
}





void TestWindow::on_pushButton_2_clicked()
{
    system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; rosrun odom_test odom_test_node' &");
}

void TestWindow::on_pushButton_3_clicked()
{
     system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roslaunch astra_camera astra.launch' &");
    qDebug("loading,please wait");
    //delay();

}

void TestWindow::on_pushButton_4_clicked()
{
    system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roslaunch keepbot_robot_bringup test_astra_rpliar.launch' &");
}


void TestWindow::delay()
{
    QTime delayTime = QTime::currentTime().addMSecs(9000);
    while(QTime::currentTime() < delayTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);

//    QEventLoop loop;
//    QTimer::singleShot(100, &loop, SLOT(quit()));
//    loop.exec();

    //sleep(10);
    qDebug("OK,NEXT");

}

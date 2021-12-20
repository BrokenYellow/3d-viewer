#include <QFileDialog>
#include <QMouseEvent>
#include <QMessageBox>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "errors.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView->show();

    ui->txtDeltaX->setText("10");
    ui->txtDeltaY->setText("20");
    ui->txtDeltaZ->setText("0");
    ui->txtScaleCenterX->setText("0");
    ui->txtScaleCenterY->setText("0");
    ui->txtScaleCenterZ->setText("0");
    ui->txtScaleX->setText("2");
    ui->txtScaleY->setText("2");
    ui->txtScaleZ->setText("2");
    ui->txtRotCenterX->setText("0");
    ui->txtRotCenterY->setText("0");
    ui->txtRotCenterZ->setText("0");
    ui->txtRotAngleOX->setText("10");
    ui->txtRotAngleOY->setText("20");
    ui->txtRotAngleOZ->setText("5");
}

MainWindow::~MainWindow()
{
    user_data.event = QUIT;
    EventHandler(user_data);
    delete ui;
}

void MainWindow::on_btnImport_clicked()
{
    user_data.event = IMPORT;

    QString fileNameQStr = QFileDialog::getOpenFileName(this,
                                                tr("Frame"),
                                                "/home/default/Desktop/Study/OOP/oop_Projects/oopLab_1/oopLab_1/Resources",
                                                tr("Text Files (*.txt)"));
    if (fileNameQStr.isEmpty())
        return;

    user_data.imp.filename = new char[fileNameQStr.length() + 1];
    strcpy(user_data.imp.filename, fileNameQStr.toStdString().c_str());

    int rc = EventHandler(user_data);
    delete [] user_data.imp.filename;
    if (rc == OK)
        Draw();
    else
        show_err_msg(rc);
}

void MainWindow::on_btnMove_clicked()
{
    user_data.event = MOVE;

    user_data.mov.dX = ui->txtDeltaX->text().toFloat();
    user_data.mov.dY = ui->txtDeltaY->text().toFloat();
    user_data.mov.dZ = ui->txtDeltaZ->text().toFloat();

    int rc = EventHandler(user_data);
    if (rc == OK)
        Draw();
    else
        show_err_msg(rc);
}

void MainWindow::on_btnRotate_clicked()
{
    user_data.event = ROTATE;

    user_data.rot.OX = ui->txtRotAngleOX->text().toFloat();
    user_data.rot.OY = ui->txtRotAngleOY->text().toFloat();
    user_data.rot.OZ = ui->txtRotAngleOZ->text().toFloat();
    user_data.rot.center.x = ui->txtRotCenterX->text().toFloat();
    user_data.rot.center.y = ui->txtRotCenterY->text().toFloat();
    user_data.rot.center.z = ui->txtRotCenterZ->text().toFloat();

    int rc = EventHandler(user_data);
    if (rc == OK)
        Draw();
    else
        show_err_msg(rc);
}

void MainWindow::on_btnScale_clicked()
{
    user_data.event = SCALE;

    user_data.scl.kX = ui->txtScaleX->text().toFloat();
    user_data.scl.kY = ui->txtScaleY->text().toFloat();
    user_data.scl.kZ = ui->txtScaleZ->text().toFloat();
    user_data.scl.center.x = ui->txtScaleCenterX->text().toFloat();
    user_data.scl.center.y = ui->txtScaleCenterY->text().toFloat();
    user_data.scl.center.z = ui->txtScaleCenterZ->text().toFloat();

    int rc = EventHandler(user_data);
    if (rc == OK)
        Draw();
    else
        show_err_msg(rc);
}

void MainWindow::Draw()
{
    user_data.event = DRAW;
    user_data.gr.scene = nullptr;
    user_data.gr.gr_view = ui->graphicsView;
    EventHandler(user_data);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    int rc = OK;
    switch(event->key())
    {
    case Qt::Key_D:
        user_data.rot_cam.dLongit += 10;
        user_data.event = ROTATE_CAMERA;
        rc = EventHandler(user_data);
        if (rc == OK)
            Draw();
        else
            show_err_msg(rc);
        break;
    case Qt::Key_A:
        user_data.rot_cam.dLongit -= 10;
        user_data.event = ROTATE_CAMERA;
        rc = EventHandler(user_data);
        if (rc == OK)
            Draw();
        else
            show_err_msg(rc);
        break;
    case Qt::Key_W:
        user_data.rot_cam.dLatit += 10;
        user_data.event = ROTATE_CAMERA;
        rc = EventHandler(user_data);
        if (rc == OK)
            Draw();
        else
            show_err_msg(rc);
        break;
    case Qt::Key_S:
        user_data.rot_cam.dLatit -= 10;

        user_data.event = ROTATE_CAMERA;
        rc = EventHandler(user_data);
        if (rc == OK)
            Draw();
        else
            show_err_msg(rc);
        break;
    }
}

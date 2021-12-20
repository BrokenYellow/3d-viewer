#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "evehandl.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Draw();
    void keyPressEvent(QKeyEvent *event);

private slots:
    void on_btnImport_clicked();

    void on_btnMove_clicked();

    void on_btnRotate_clicked();

    void on_btnScale_clicked();

private:
    Ui::MainWindow *ui;
    user_data_t user_data;
};
#endif // MAINWINDOW_H

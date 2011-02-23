#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_btnAdd_clicked();
    void on_btnFlags_clicked();
    void on_btnBuild_clicked();
    void on_actOpen_triggered();
};

#endif // MAINWINDOW_H

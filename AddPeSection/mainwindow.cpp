#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lstInfo->header()->setResizeMode(0,QHeaderView::Stretch);
    ui->lstInfo->header()->setResizeMode(1,QHeaderView::Stretch);
    ui->lstInfo->header()->setResizeMode(2,QHeaderView::Stretch);
    ui->lstInfo->header()->setResizeMode(3,QHeaderView::Stretch);
    ui->lstInfo->header()->setResizeMode(4,QHeaderView::Stretch);
    ui->lstInfo->header()->setResizeMode(5,QHeaderView::Stretch);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAdd_clicked()
{
    QMessageBox::information(this,"Evento","btnAdd!");
}

void MainWindow::on_btnBuild_clicked()
{
    QMessageBox::information(this,"Evento","btnBuild!");
}

void MainWindow::on_btnFlags_clicked()
{
    QMessageBox::information(this,"Evento","btnFlags!");
}

void MainWindow::on_actOpen_triggered()
{
    QString szFileName= QFileDialog::getOpenFileName(this,"Open File","/home","Executable Files (*.exe);;All Files (*)");
    if(szFileName!=QString::null)
    {
        QFile hFile(szFileName);
        if(hFile.exists())
        {
            QByteArray FileBuffer=hFile.readAll();
            char* lpFileBuffer=FileBuffer.data();

            //Creo que ya está

        }
    }
}

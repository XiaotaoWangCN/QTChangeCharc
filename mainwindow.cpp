#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
using namespace  std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ClearButton_clicked()
{
    ui->InputText->clear();
    ui->OutputText->clear();

}

void MainWindow::on_ChangeButton_clicked()
{
     QString text=ui->InputText->toPlainText();
     string test = text.toStdString();
     test.push_back('\n');
     cout<<test;
     cout<<endl;
     int len=test.length();
     cout<<len<<endl;
     string str;
     for (int i=0;i<len;++i)
     {
         if(test[i]=='-')
         {
             ;
             if(test[i+1]=='\n')
             {
               i+=1;
             }
             else
             {
                str.push_back(test[i]);
             }
         }
         else if(test[i]=='.')
         {
             //str.append(test[i],1);

             str.push_back(test[i]);
             if(test[i+1]=='\n')
             {
                str.append("\n");
                cout<<"HERE"<<endl;
             }

         }
         else if(test[i]==',')
         {
             //str.append(test[i],1);
             str.push_back(test[i]);
         }
         else if(test[i]==' ')
         {
              //str.append(test[i],1);
             str.push_back(test[i]);
         }
         else if(test[i]=='\n')
         {
              str.append(" ");
         }
         else
         {
             str.push_back(test[i]);
             //str.append(test[i]);
             //CString.GetBuffer(test[i].GetLength())
         }

     }
     cout<<"****************"<<endl;
     cout<<str<<endl;
     len=str.length();
    cout<<"END,len="<<len<<endl;
    QString ans = QString::fromStdString(str);
    ui->OutputText->insertPlainText(ans);
    //ui->OutputText->setPlainText(ans);

}

void MainWindow::on_ClearButton_2_clicked()
{
    ui->InputText->clear();
}

void MainWindow::on_ClearButton_3_clicked()
{
    ui->OutputText->clear();
}

void MainWindow::on_ClearInputButton_clicked()
{
    ui->InputText->clear();
}

void MainWindow::on_ClearOutputButton_clicked()
{
     ui->OutputText->clear();
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ClearButton_clicked();

    void on_ChangeButton_clicked();

    void on_ClearButton_2_clicked();

    void on_ClearButton_3_clicked();

    void on_ClearInputButton_clicked();

    void on_ClearOutputButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
#include <QMainWindow>
#include <QTimer>
#include <QtSerialPort/QSerialPort>

#include "myserial.h"
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
namespace Ui {class MainWindow;}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //--------------------------------------------------
private slots:
    void on_comboBox_ports_currentIndexChanged(int index);

    void on_action_Open_triggered();

    void on_action_Close_triggered();

    void on_pushButton_char_clicked();
    //........................
    void on_readData(QByteArray data);
    //--------------------------------------------------
    void on_pushButton_code_clicked();

    void on_action_Clear_triggered();

    void on_pushButton_run1_clicked();

    void on_pushButton_run2_clicked();

    void on_action_Refresh_triggered();

    void on_action_export_triggered();

    void on_pushButton_charwn_clicked();


private:
    void get_Ports(void);
    void get_Settings(void);
    bool setup_Serial(void);
    void setup_graph(void);
    void parsdata   (QByteArray data);
    //........................
    QString inBuffer_char;
    QString inBuffer_code;

    QTimer *timer1;
    QTimer *timer2;

    MySerial *QSP;
    Ui::MainWindow *ui;
};
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
#endif // MAINWINDOW_H

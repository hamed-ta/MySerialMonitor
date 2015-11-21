/************************************************
 *  My Serial Monitor Project by hamed tahery   *
 *    hamed.t@live.com                          *
 *    24-4-92                                   *
 ************************************************/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myserial.h"


#include <QMessageBox>
#include <QScrollBar>
#include <QTimer>
#include <QFileDialog>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
QVector<double> prs,tmp;

//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    get_Ports();
    get_Settings();

    setup_graph();
    //............................................
    QSP = new MySerial(0);
    connect(QSP, SIGNAL(readyRead(QByteArray)), this, SLOT(on_readData(QByteArray)));




    //............................................
    ui->TextEdit_char->document()->setMaximumBlockCount(1000);
    ui->TextEdit_code->document()->setMaximumBlockCount(1000);
    //............................................
    timer1 = new QTimer(this);
    timer2 = new QTimer(this);

    connect(timer1,SIGNAL(timeout()),this,SLOT(on_pushButton_char_clicked()));
    connect(timer2,SIGNAL(timeout()),this,SLOT(on_pushButton_code_clicked()));
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
bool MainWindow::setup_Serial()
{
    if (QSP->openPort(ui->comboBox_ports->currentText(),
                      static_cast<QSerialPort::BaudRate>(ui->comboBox_Baud   ->itemData(ui->comboBox_Baud   ->currentIndex()).toInt()),
                      static_cast<QSerialPort::DataBits>(ui->comboBox_Databit->itemData(ui->comboBox_Databit->currentIndex()).toInt()),
                      static_cast<QSerialPort::Parity>  (ui->comboBox_Parity ->itemData(ui->comboBox_Parity ->currentIndex()).toInt()),
                      static_cast<QSerialPort::StopBits>(ui->comboBox_Stopbit->itemData(ui->comboBox_Stopbit->currentIndex()).toInt())))

         {
           ui->statusBar->showMessage(tr("%1 Opened Succesfully.").arg(ui->comboBox_ports->currentText()));
           return true;
         }
           QSP->closePort();
           ui->statusBar->showMessage(tr("Can,t Open %1  [%2]").arg(QSP->portName()).arg( QSP->errorString()));
           return false;

}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::setup_graph()
{
    ui->plot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    ui->plot->setBackground(this->palette().background());
    ui->plot->addGraph();
    ui->plot->graph(0)->setName("Temprature");
    ui->plot->legend->setVisible(true);
  //  ui->plot->xAxis->setVisible(false);
    ui->plot->yAxis->setRange(20, 50);
    ui->plot->yAxis->setLabel("Temprature (°C)");
    ui->plot->xAxis->setLabel("Samples");
    ui->plot->graph(0)->setPen(QPen(Qt::red));
    ui->plot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssDisc, 2));
    ui->plot->xAxis->setRange(1,50, Qt::AlignLeft);

    //ui->plot->xAxis->setAutoTickStep(1);
    //ui->plot->xAxis->setAutoTickLabels(false);
    //ui->plot->xAxis->setTicks(false);
   // ui->plot->xAxis->setAutoTicks(false);
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::get_Ports()
{
    ui->comboBox_ports->clear();
     foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
           {
             ui->comboBox_ports->addItem(info.portName(),info.description());
           }
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::get_Settings()
{
  ui->comboBox_Baud->clear();
  ui->comboBox_Baud->addItem(QLatin1String("1200"),   QSerialPort::  Baud1200);
  ui->comboBox_Baud->addItem(QLatin1String("2400"),   QSerialPort::  Baud2400);
  ui->comboBox_Baud->addItem(QLatin1String("4800"),   QSerialPort::  Baud4800);
  ui->comboBox_Baud->addItem(QLatin1String("9600"),   QSerialPort::  Baud9600);
  ui->comboBox_Baud->addItem(QLatin1String("19200"),  QSerialPort::  Baud19200);
  ui->comboBox_Baud->addItem(QLatin1String("38400"),  QSerialPort::  Baud38400);
  ui->comboBox_Baud->addItem(QLatin1String("57600"),  QSerialPort::  Baud57600);
  ui->comboBox_Baud->addItem(QLatin1String("115200"), QSerialPort::  Baud115200);
  ui->comboBox_Baud->setCurrentIndex(3);

  ui->comboBox_Databit->addItem(QLatin1String("5")   ,QSerialPort::Data5);
  ui->comboBox_Databit->addItem(QLatin1String("6")   ,QSerialPort::Data6);
  ui->comboBox_Databit->addItem(QLatin1String("7")   ,QSerialPort::Data7);
  ui->comboBox_Databit->addItem(QLatin1String("8")   ,QSerialPort::Data8);
  ui->comboBox_Databit->setCurrentIndex(3);

  ui->comboBox_Parity->addItem(QLatin1String("None") ,QSerialPort::NoParity);
  ui->comboBox_Parity->addItem(QLatin1String("Even") ,QSerialPort::EvenParity);
  ui->comboBox_Parity->addItem(QLatin1String("Odd")  ,QSerialPort::OddParity);
  ui->comboBox_Parity->addItem(QLatin1String("Mark") ,QSerialPort::MarkParity);
  ui->comboBox_Parity->addItem(QLatin1String("Space"),QSerialPort::SpaceParity);

  ui->comboBox_Stopbit->addItem(QLatin1String("1")   ,QSerialPort::OneStop);
  ui->comboBox_Stopbit->addItem(QLatin1String("1.5") ,QSerialPort::OneAndHalfStop);
  ui->comboBox_Stopbit->addItem(QLatin1String("2")   ,QSerialPort::TwoStop);

}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::parsdata(QByteArray data)
{
    UINT8 tmpval;
        //................................
        tmpval = data[0];
           // ui->lcdNumber_press->display(SDatas.press);
           // ui->lcdNumber_presspas->display((SDatas.press * 1.01325));
            //--------------------------------------------------------
            tmp.append(tmpval);
            prs.append(prs.last()+1);
            ui->plot->graph(0)->setData(prs,tmp);

            if (prs.last() > ui->plot->xAxis->range().size())
            {
               ui->plot->xAxis->moveRange (1);
            }

            ui->plot->replot();
            //--------------------------------------------------------

}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_readData(QByteArray data)
{ QTextCursor cursor;
    //static QString datLine = "";
    //if (ui->tab_graph->isVisible())
    //parsdata(data);
    //datLine += data;
    //if (datLine.contains("\r"))
    //{
    // record (datLine.replace("\r","\r\n"));
    //  datLine.clear();
    //}
    cursor = QTextCursor(ui->TextEdit_code->document());
    for (int i=0;i<=data.count();i++)
    {
        if (data[i])
        {
             cursor.movePosition(QTextCursor::End);
             cursor.insertText(QString::number(data[i]) + "  ");
             if (data[i] == char(10))
             {
                 cursor.insertText("-> \n");
                 ui->TextEdit_code->verticalScrollBar()->setValue(ui->TextEdit_code->verticalScrollBar()->maximum());

             }
        }
    }
    cursor = QTextCursor(ui->TextEdit_char->document());
    cursor.movePosition(QTextCursor::End);
    cursor.insertText(QString(data).replace("\r",""));

    ui->TextEdit_char->verticalScrollBar()->setValue(ui->TextEdit_char->verticalScrollBar()->maximum());
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_comboBox_ports_currentIndexChanged(int index)
{
    ui->statusBar->showMessage(ui->comboBox_ports->itemData(index).toString());
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_action_Open_triggered()
{
   if (setup_Serial())
   {
     ui->comboBox_Baud   ->setDisabled(true);
     ui->comboBox_ports  ->setDisabled(true);
     ui->comboBox_Databit->setDisabled(true);
     ui->comboBox_Parity ->setDisabled(true);
     ui->comboBox_Stopbit->setDisabled(true);
     ui->action_Open     ->setDisabled(true);
     ui->action_Close    ->setEnabled (true);
     ui->lineEdit_char   ->setEnabled (true);
     ui->lineEdit_lf     ->setEnabled (true);
     ui->lineEdit_code   ->setEnabled (true);
     ui->pushButton_char ->setEnabled (true);
     ui->pushButton_charwn->setEnabled(true);
     ui->pushButton_code ->setEnabled (true);
     ui->pushButton_run1 ->setEnabled (true);
     ui->pushButton_run2 ->setEnabled (true);
   }
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_action_Close_triggered()
{
    timer1->stop();
    timer2->stop();
    QSP->closePort();
    ui->comboBox_Baud   ->setEnabled  (true);
    ui->comboBox_ports  ->setEnabled  (true);
    ui->comboBox_Databit->setEnabled  (true);
    ui->comboBox_Parity ->setEnabled  (true);
    ui->comboBox_Stopbit->setEnabled  (true);
    ui->action_Open     ->setEnabled  (true);
    ui->action_Close    ->setDisabled (true);
    ui->lineEdit_char   ->setDisabled (true);
    ui->lineEdit_code   ->setDisabled (true);
    ui->lineEdit_lf     ->setDisabled (true);
    ui->pushButton_char ->setDisabled (true);
    ui->pushButton_charwn->setDisabled(true);
    ui->pushButton_code ->setDisabled (true);


    ui->pushButton_run1 ->setDisabled (true);
    ui->pushButton_run2 ->setDisabled (true);

    ui->statusBar->showMessage(tr("%1 Closed").arg(QSP->portName()));
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_pushButton_char_clicked()
{QString data;
 QStringList lfv;
    lfv = ui->lineEdit_lf->text().split(' ');
    if (lfv.count() == 2)
     data = ui->lineEdit_char->text() + lfv[0].toInt() + lfv[1].toInt();
    if (lfv.count() == 1)
     data = ui->lineEdit_char->text() + lfv[0].toInt();

    QSP->write(data.toLocal8Bit());
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_pushButton_charwn_clicked()
{
    QString data = ui->lineEdit_char->text();
    QSP->write(data.toLocal8Bit());
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_pushButton_code_clicked()
{
    if (ui->lineEdit_code->text().toInt())
       QSP->write(QByteArray(1,ui->lineEdit_code->text().toInt()));
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_action_Clear_triggered()
{
  inBuffer_char.clear();
  inBuffer_code.clear();
  ui->TextEdit_code->clear();
  ui->TextEdit_char->clear();
  tmp.clear();
  prs.clear();
  ui->plot->graph(0)->clearData();
  ui->plot->replot();
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_pushButton_run1_clicked()
{
  if (ui->pushButton_run1->isChecked())
  {
     if (ui->pushButton_run2->isChecked())
         ui->pushButton_run2->click();
     timer1->start(ui->spinBox_char->value());
  } else
  {
     timer1->stop();

  }
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_pushButton_run2_clicked()
{
    if (ui->pushButton_run2->isChecked())
    {
       if (ui->pushButton_run1->isChecked())
           ui->pushButton_run1->click();
       timer2->start(ui->spinBox_code->value());
    } else
    {
       timer2->stop();

    }
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_action_Refresh_triggered()
{
  get_Ports();
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
MainWindow::~MainWindow()
{
    delete timer1;
    delete timer2;
    delete QSP;
    delete ui;

}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
void MainWindow::on_action_export_triggered()
{ QString filename;
   if (ui->tabWidget->currentIndex() == 1)
   {
       filename = QFileDialog::getSaveFileName(this,tr("Save Image"), "/home/", tr("Image Files (*.bmp)"));
       if (!filename.isEmpty())
          ui->plot->saveBmp(filename);
   } else
   {
       filename = QFileDialog::getSaveFileName(this,tr("Save Data Text"), "/home/", tr("Text Files (*.txt)"));
       if (!filename.isEmpty())
       {
           QString sMyString = ui->TextEdit_char->toPlainText();
           QFile fMyFile(filename);
           if (fMyFile.open(QIODevice::WriteOnly)) {
           QTextStream st( &fMyFile );
           st << sMyString << endl;
           fMyFile.close(); }
       }
       filename = QFileDialog::getSaveFileName(this,tr("Save Code Text"), "/home/", tr("Text Files (*.txt)"));
       if (!filename.isEmpty())
       {
           QString sMyString = ui->TextEdit_code->toPlainText();
           QFile fMyFile(filename);
           if (fMyFile.open(QIODevice::WriteOnly)) {
           QTextStream st( &fMyFile );
           st << sMyString << endl;
           fMyFile.close(); }
       }
   }
}



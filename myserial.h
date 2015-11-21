#ifndef MYSERIAL_H
#define MYSERIAL_H
//-------------------------------------------------------------
//-------------------------------------------------------------
#include <QObject>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>
//-------------------------------------------------------------

//-------------------------------------------------------------
class MySerial : public QObject
{
    Q_OBJECT
public:
    explicit MySerial(QObject *parent = 0);
    ~MySerial();
//=================================
    bool openPort(const QString &Port ,const QSerialPort::BaudRate &Baud,const QSerialPort::DataBits &Data,const QSerialPort::Parity &Parity,const QSerialPort::StopBits &Stop);
    bool closePort(void);
    void write(const QByteArray &data);
    QString portName(void);
    QString errorString(void);
//=================================
private:
    QSerialPort *serial;
    QTimer *timer;
    QString PortName ;
    QString ErrorString;
//=================================
signals:
    void readyRead(QByteArray data);
//=================================
private slots:
     void on_readData();
//=================================
public slots:
//=================================
};
//-------------------------------------------------------------
//-------------------------------------------------------------
#endif // MYSERIAL_H

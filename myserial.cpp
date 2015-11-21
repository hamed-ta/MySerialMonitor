#include "myserial.h"
//-------------------------------------------------------------

//-------------------------------------------------------------
MySerial::MySerial(QObject *parent) :QObject(parent)
{
    serial = new QSerialPort(0);
    connect(serial,SIGNAL(readyRead()),this,SLOT(on_readData()));
}
//-------------------------------------------------------------

//-------------------------------------------------------------
MySerial::~MySerial()
{
    serial->close();
    delete serial;
}
//-------------------------------------------------------------

//-------------------------------------------------------------
bool MySerial::openPort(const QString &Port ,const QSerialPort::BaudRate &Baud,const QSerialPort::DataBits &Data,const QSerialPort::Parity &Parity,const QSerialPort::StopBits &Stop)
{
    serial->setPortName(Port);
    if (serial->open(QIODevice::ReadWrite))
     if  (serial->setBaudRate(Baud) && serial->setDataBits(Data) && serial->setParity(Parity) && serial->setStopBits(Stop))
        {
            PortName = Port;
            qDebug() << "Opened !" << PortName;
            return 1;

        }
    ErrorString = serial->errorString();
    return 0;
}
//-------------------------------------------------------------

//-------------------------------------------------------------
bool MySerial::closePort()
{
    serial->close();
    return 1;
}
//-------------------------------------------------------------

//-------------------------------------------------------------
void MySerial::write(const QByteArray &data)
{
    serial->write(data);
}
//-------------------------------------------------------------

//-------------------------------------------------------------
QString MySerial::portName()
{
    return PortName;
}
//-------------------------------------------------------------

//-------------------------------------------------------------
QString MySerial::errorString()
{
    return ErrorString;
}
//-------------------------------------------------------------

//-------------------------------------------------------------
void MySerial::on_readData()
{
    QByteArray data = serial->readLine();
    emit(readyRead(data));
}
//-------------------------------------------------------------

//-------------------------------------------------------------

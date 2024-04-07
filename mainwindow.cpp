/****************************************************************************
**
** Copyright (C) 2012 Denis Shienkov <denis.shienkov@gmail.com>
** Copyright (C) 2012 Laszlo Papp <lpapp@kde.org>
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtSerialPort module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "settingsdialog.h"

#include <QMessageBox>
#include <QLabel>
#include <QtSerialPort/QSerialPort>

#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QTextStream>
#include <QDataStream>
#include <QTimer>
#include <QIntValidator>
#include <QProcess>

#define APP_DISPLAY_SIZE        64
#define FIXED_PACK_SIZE         10

#define INITIAL_INTERVAL_TIME         500
#define INITIAL_ADDR_CODE         170
#define INITIAL_SPLIT_MAX         238


// 读内容
#define     READ_VERSIONS           1



//! [0]
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
//! [0]
    ui->setupUi(this);
//    console = new Console;
//    console->setEnabled(false);
//    setCentralWidget(console);
//! [1]
    serial = new QSerialPort(this);
//! [1]
    settings = new SettingsDialog;

     ui->splitter->setSizes(QList<int>() << 400 << 200);
    //初始值
    data_interval_time = INITIAL_INTERVAL_TIME;
    ui->lineEdit_send_time->setValidator(new QIntValidator(ui->lineEdit_send_time));//格式
    ui->lineEdit_send_time->setText(QString::number(data_interval_time));
    data_addr_code = INITIAL_ADDR_CODE;
    ui->lineEdit_addr_code->setText(QString::number(data_addr_code,16).toUpper());
    data_split_max = INITIAL_SPLIT_MAX;
    ui->lineEdit_data_Max->setText(QString::number(data_split_max));


    ui->actionConnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    ui->actionQuit->setEnabled(true);
    ui->actionConfigure->setEnabled(true);

    status = new QLabel;
    ui->statusBar->addWidget(status);

    initActionsConnections();

    connect(serial, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error),
            this, &MainWindow::handleError);

//! [2]
    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);
//! [2]
//    connect(console, &Console::getData, this, &MainWindow::writeData);
//! [3]
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerTransDate()));
    ulNum = 0;
//    timer->start(1000);
//    setCentralWidget(MainWindow);
}
//! [3]

MainWindow::~MainWindow()
{
    delete settings;
    delete ui;
}


//! [4] 打开串口
void MainWindow::openSerialPort()
{
    SettingsDialog::Settings p = settings->settings();
    serial->setPortName(p.name);
    serial->setBaudRate(p.baudRate);
    serial->setDataBits(p.dataBits);
    serial->setParity(p.parity);
    serial->setStopBits(p.stopBits);
    serial->setFlowControl(p.flowControl);
    if (serial->open(QIODevice::ReadWrite)) {
//        console->setEnabled(true);
//        console->setLocalEchoEnabled(p.localEchoEnabled);
        ui->actionConnect->setEnabled(false);
        ui->actionDisconnect->setEnabled(true);
        ui->actionConfigure->setEnabled(false);
        showStatusMessage(tr("Connected to %1 : %2, %3, %4, %5, %6")
                          .arg(p.name).arg(p.stringBaudRate).arg(p.stringDataBits)
                          .arg(p.stringParity).arg(p.stringStopBits).arg(p.stringFlowControl));
    } else {
        QMessageBox::critical(this, tr("Error"), serial->errorString());

        showStatusMessage(tr("Open error"));
    }
}
//! [4]

//! [5]  关闭串口
void MainWindow::closeSerialPort()
{
    if (serial->isOpen())
        serial->close();
//    console->setEnabled(false);
    ui->actionConnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
    ui->actionConfigure->setEnabled(true);
    showStatusMessage(tr("Disconnected"));
}
//! [5]

void MainWindow::about()
{
    QMessageBox::about(this, tr("About Simple Terminal"),
                       tr("The <b>Simple Terminal</b> example demonstrates how to "
                          "use the Qt Serial Port module in modern GUI applications "
                          "using Qt, with a menu bar, toolbars, and a status bar."));
}

//! [6]  写数据
void MainWindow::writeData(const QByteArray &data,  qint64 len)
{
    serial->write(data,len);
    ui->TextEdit_sendbuf->append(data.toHex()+'\n');
    //ui->lcdNumber_Write->display(ui->lcdNumber_Write->value() + 1);
}
//! [6]
//!
void MainWindow::delay_2(quint32 msec)
{
    QElapsedTimer t;

    t.start();

    //关键部分 QCoreApplication::processEvents()
    while(t.elapsed()<msec) QCoreApplication::processEvents();
}

//! [7]  接收
void MainWindow::readData()
{

    delay_2(50);
    QByteArray temp = serial->readAll();
    //QByteArray buf = serial->readAll().toHex();
    QString buf;
    int i;
        if(!temp.isEmpty())
        {
            if(Read_Data == READ_VERSIONS)
            {
                //AA 04 04 00 02 00 02 C1 4F
                buf.sprintf("V %X%X.%X.%X ", (unsigned char)temp.at(3), (unsigned char)temp.at(4), (unsigned char)temp.at(5), (unsigned char)temp.at(6));
                ui->pushButton_readversions->setText(buf);
                Read_Data = 0;
            }
            buf.clear();

            //if( Mode_Setting == 1 ) // 监听
            {
                for(i = 0; i < temp.count(); i++)
                {
                    QString s;
                    if( i == 0)
                    {
                        if(temp.at(i) == 0 )
                        {
                            s.sprintf("W:↓ ");
                        }
                        else if(temp.at(i) == 1 )
                        {
                            s.sprintf("R:↑ ");
                        }
                        else
                        {
                            s.sprintf("%02X ", (unsigned char)temp.at(i));
                        }
                    }
                    else
                    {
                        s.sprintf("%02X ", (unsigned char)temp.at(i));
                    }
                    buf += s;
                }
            }

            ui->textBrowser->setTextColor(Qt::black);
            if( Mode_Setting == 0 ) // 发送文件
            {
                ui->receivebyteLcdNumber->display(ui->receivebyteLcdNumber->value() + 1);
            }
            else if( Mode_Setting == 1 ) // 监听
            {
                if(temp.at(0) == 0 )
                {
                    ui->textBrowser->setTextColor(Qt::darkBlue);
                    ui->lcdNumber_Write->display(ui->lcdNumber_Write->value() + 1);
                }
                else
                {
                    ui->textBrowser->setTextColor(Qt::red);
                    ui->lcdNumber_Read->display(ui->lcdNumber_Read->value() + 1);
                }
            }
            else if( Mode_Setting == 2 ) // 调试
            {
                ui->lcdNumber_Read->display(ui->lcdNumber_Read->value() + 1);
            }

            ui->textBrowser->append(buf);
        }
}
//! [7]

//! [8]
void MainWindow::handleError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, tr("Critical Error"), serial->errorString());
        closeSerialPort();
    }
}
//! [8]

void MainWindow::initActionsConnections()
{
    connect(ui->actionConnect, &QAction::triggered, this, &MainWindow::openSerialPort);
    connect(ui->actionDisconnect, &QAction::triggered, this, &MainWindow::closeSerialPort);
    connect(ui->actionQuit, &QAction::triggered, this, &MainWindow::close);
    connect(ui->actionConfigure, &QAction::triggered, settings, &SettingsDialog::show);
    connect(ui->actionClear, &QAction::triggered, this, &MainWindow::clearTextBrowser);
    connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::about);
    connect(ui->actionAboutQt, &QAction::triggered, qApp, &QApplication::aboutQt);
}

void MainWindow::showStatusMessage(const QString &message)
{
    status->setText(message);
}

// 格式转换  string -->  unsigned char
void MainWindow::changeStringTo8Bit(const QString &input_data, unsigned char* output_data)
{
    /// 将QT textEdit的十六进制转换成字符串
    quint32 len = 0;
    int i;
    for (i = 0; i < input_data.length(); i++)
    {
        unsigned char high_value = 0;
        unsigned char low_value = 0;
        if (input_data.toLocal8Bit().data()[i] >= 'A')
        {
            high_value = input_data.toLocal8Bit().data()[i] - 'A' + 10;
        }
        else
        {
            high_value = input_data.toLocal8Bit().data()[i] - '0';
        }

        if (input_data.toLocal8Bit().data()[i + 1] >= 'A')
        {
            low_value = input_data.toLocal8Bit().data()[i + 1] - 'A' + 10;
        }
        else
        {
            low_value = input_data.toLocal8Bit().data()[i + 1] - '0';
        }

        unsigned char data = high_value * 16 + low_value;
        output_data[len++] = data;

        if (i + 2 < input_data.length())
        {
            i += 1;
        }

        if (input_data.toLocal8Bit().data()[i] >= ' ')
            i++;
    }
}

// 按键 发送
void MainWindow::on_pushButton_clicked()
{
    unsigned char temp;

    data_interval_time = ui->lineEdit_send_time->text().toInt();    // 发送时间

    changeStringTo8Bit(ui->lineEdit_addr_code->text(),&temp);
    data_addr_code =  temp;    // 地址码
    data_split_max =  ui->lineEdit_data_Max->text().toInt();    // 分包大小

    timer->start(data_interval_time);
}

// 按键 停止
void MainWindow::on_pushButton_Stop_clicked()
{
    timer->stop();
}

// 清空
void MainWindow::clearTextBrowser()
{
    ui->textBrowser->setText(NULL);
    ui->TextEdit_sendbuf->setText(NULL);

    ui->lcdNumber_send->display(0);
    ui->receivebyteLcdNumber->display(0);

    ui->lcdNumber_Write->display(0);
    ui->lcdNumber_Read->display(0);

    pack_cnt=0;
    binfileseek = 0;
}

// 打开文件
void MainWindow::on_openFileButton_clicked()
{
    pack_cnt = 0;
    //get file name
    fileName = QFileDialog::getOpenFileName(this,"Open File",QDir::currentPath());
//    qDebug()<< "fileName is" << fileName;
    ui->filePathLineEdit->setText (fileName);
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message", "Please Select a Text File");
        return;
    }
    QFileInfo *pcsfileInfo = new QFileInfo(fileName);
    binSize = pcsfileInfo->size ();

    QFile* file = new QFile;
    file->setFileName(fileName);
    bool ok = file->open(QIODevice::ReadOnly);
    if(ok)
    {
//        QTextStream in(file);
//        ui->textEdit->setText(in.readAll());//read all context from the file
    }
    else
    {
        QMessageBox::information(this,"Error Message", "File Open Error" + file->errorString());
        return;
    }
    QDataStream in(file);
    char * binByte = new char[binSize];
    in.setVersion (QDataStream::Qt_5_9);

    ui->statusBar->showMessage(tr("准备读取数据"));
    in.readRawData (binByte, binSize);      //读出文件到缓存
    ui->statusBar->showMessage(tr("读取数据完毕"));

    tempByte = new QByteArray(binByte, binSize);                //格式转换

    QString *tempStr = new QString(tempByte->toHex ().toUpper ());

    //显示文件内容
    qint8 cnt = 1;
    qint16 kcnt = 0;
    for(qint64 i = 2; i < tempStr->size ();)
    {
        tempStr->insert (i, ' ');//每个字节之间空一格
        i += 3;
        cnt++;
        if(cnt == 8)//每8个字节空2格
        {
            tempStr->insert (i, ' ');
            i += 1;
        }
        if(cnt == 16)//每16个字节空一格
        {
            cnt = 1;
            kcnt ++;
            if(kcnt == 64)//每64行，即1K数据，空一行
            {
                kcnt = 0;
                tempStr->insert (i, '\n');
                i++;
            }
            tempStr->insert (i, '\n');
            i += 3;         //避免换行后开头一个空格,换行相当于从新插入
        }

    }
    ui->statusBar->showMessage(tr("准备显示"));
    ui->fileViewPlainTextEdit->insertPlainText (*tempStr);
    ui->statusBar->showMessage(tr("显示完毕"));

//    timer->start(1000);
//    serial->write(binByte,25);
    delete tempByte;
    delete[] binByte;
    delete tempStr;

    binfileseek = 0;
    file->close ();
    delete file;
}


// 定时器
void MainWindow::timerTransDate()
{
    quint32 len;
    quint32 len_all;
    quint32 i;
    uint16_t crc;
    unsigned char charData[255];
    QString msg;
    //qint16 temp = 0;            //剩余待传数据
    QString str1;
    QString number;
    QFile *binFile = new QFile(fileName);
    binFile->open (QIODevice::ReadOnly);
    binFile->seek (ulNum * 1024);

    QDataStream in(binFile);
    char * binByte = new char[binSize];
    in.setVersion (QDataStream::Qt_5_9);

    in.readRawData (binByte, binSize);      //读出文件到缓存

    QByteArray binLitByte;//bin缓存

    if(binfileseek >= binSize)
    {
        timer->stop();
        return;
    }

    if((binfileseek + data_split_max) > binSize ) //最后?
    {
        len = binSize - binfileseek;
        pack_cnt = 0xFFFF;
    }
    else
    {
        len = data_split_max;
    }

    if(ui->checkBox_add_format->isChecked())
    {
        if(ui->comboBox_format_details->currentIndex() == 0)
        {
            binLitByte[0] = data_addr_code;
            binLitByte[1] = 0x15;//先固定
            binLitByte[2] = len + 7;
            binLitByte[3] = 6;
            binLitByte[4] = 0;
            binLitByte[5] = 1;
            binLitByte[6] = pack_cnt>>8;
            binLitByte[7] = pack_cnt;
            binLitByte[8] = 0;
            binLitByte[9] = len/2;

            for(i=0;i<len;i++){binLitByte[i+10]=binByte[binfileseek+i];}
            len_all = len+10;

            // 获取 QByteArray 的数据指针
            unsigned char *unsignedCharData = reinterpret_cast<unsigned char*>(binLitByte.data());

            crc = usMBCRC16(unsignedCharData,len_all);
            binLitByte[len_all] = crc&0xFF;
            binLitByte[len_all+1] = crc>>8;
            len_all += 2;
        }
        else
        {
            len_all = len;
        }
    }
    else
    {
        for(i=0;i<len;i++){binLitByte[i]=binByte[binfileseek+i];}
        //memcpy (&binLitByte, binByte + binfileseek, len);
        memcpy(charData,&binLitByte,len);
        len_all = len;
    }
    binfileseek += len;
    //temp = binSize - 1024*ulNum;
    serial->write(binLitByte,(len_all));

    if(pack_cnt == 0xFFFF)
    {
       ui->TextEdit_sendbuf->append("结束包\n");
    }
    else
    {
        str1 = "第 %1 包\n";
        number = QString::number((pack_cnt+1), 10);
        ui->TextEdit_sendbuf->append(str1.arg(number));
    }
    ui->TextEdit_sendbuf->append(binLitByte.toHex()+'\n');

    ui->lcdNumber_send->display(ui->lcdNumber_send->value() + 1);
    pack_cnt++;

    delete[] binByte;

}


void MainWindow::on_pushButton_send_assign_clicked()
{
    quint32 pack_num;
    quint32 begin;
    quint32 len;
    quint32 len_all;
    quint32 i;
    uint16_t crc;
    unsigned char charData[255];
    QString msg;
    QString str1;
    QString number;
    QFile *binFile = new QFile(fileName);
    binFile->open (QIODevice::ReadOnly);
    binFile->seek (ulNum * 1024);

    QDataStream in(binFile);
    char * binByte = new char[binSize];
    in.setVersion (QDataStream::Qt_5_9);

    in.readRawData (binByte, binSize);      //读出文件到缓存

    QByteArray binLitByte;//bin缓存

    pack_num = ui->lineEdit_send_assign->text().toInt()-1;    // 指定包 0开始

    begin = data_split_max * pack_num;

    if(begin >= binSize)
    {
        QMessageBox::information(this,"指定发送失败", "指定超过文件大小或未知指定");
        return;
    }

    if(begin + data_split_max > binSize ) //最后?
    {
        len = binSize - begin;
        pack_num = 0xFFFF;
    }
    else
    {
        len = data_split_max;
    }

    if(ui->checkBox_add_format->isChecked())
    {
        if(ui->comboBox_format_details->currentIndex() == 0)
        {
            binLitByte[0] = data_addr_code;
            binLitByte[1] = 0x15;//先固定
            binLitByte[2] = len + 7;
            binLitByte[3] = 6;
            binLitByte[4] = 0;
            binLitByte[5] = 1;
            binLitByte[6] = pack_num>>8;
            binLitByte[7] = pack_num;
            binLitByte[8] = 0;
            binLitByte[9] = len/2;

            for(i=0;i<len;i++){binLitByte[i+10]=binByte[begin+i];}
            len_all = len+10;

            // 获取 QByteArray 的数据指针
            unsigned char *unsignedCharData = reinterpret_cast<unsigned char*>(binLitByte.data());

            crc = usMBCRC16(unsignedCharData,len_all);
            binLitByte[len_all] = crc&0xFF;
            binLitByte[len_all+1] = crc>>8;
            len_all += 2;
        }
        else
        {
            len_all = len;
        }
    }
    else
    {
        for(i=0;i<len;i++){binLitByte[i]=binByte[begin+i];}
        memcpy(charData,&binLitByte,len);
        len_all = len;
    }
    begin += len;
    serial->write(binLitByte,(len_all));

    if(pack_num == 0xFFFF)
    {
       ui->TextEdit_sendbuf->append("结束包\n");
    }
    else
    {
        str1 = "第 %1 包\n";
        number = QString::number((pack_num+1), 10);
        ui->TextEdit_sendbuf->append(str1.arg(number));
    }
    ui->TextEdit_sendbuf->append(binLitByte.toHex()+'\n');

    ui->lcdNumber_send->display(ui->lcdNumber_send->value() + 1);

    delete[] binByte;

}


void MainWindow::on_pushButton_readversions_clicked()
{
    QByteArray writeByteBuf;//bin缓存

    Read_Data = READ_VERSIONS;
    //AA 04 00 00 00 02 68 10
    writeByteBuf[0] = 0xAA;
    writeByteBuf[1] = 0x04;
    writeByteBuf[2] = 0x00;
    writeByteBuf[3] = 0x00;
    writeByteBuf[4] = 0x00;
    writeByteBuf[5] = 0x02;
    writeByteBuf[6] = 0x68;
    writeByteBuf[7] = 0x10;

    //serial->write(writeByteBuf,(8));
    writeData(writeByteBuf,8);

}

void MainWindow::on_pushButton_getin_ReadMode_clicked()
{
    QByteArray writeByteBuf;//bin缓存

    //for (int i=0; i<3; i++)
    {
        if(Mode_Setting == 2)//
        {
            //AA 06 00 02 00 01 F0 11
            writeByteBuf[0] = 0xAA;
            writeByteBuf[1] = 0x06;
            writeByteBuf[2] = 0x00;
            writeByteBuf[3] = 0x02;
            writeByteBuf[4] = 0x00;
            writeByteBuf[5] = 0x01;
            writeByteBuf[6] = 0xF0;
            writeByteBuf[7] = 0x11;

            //serial->write(writeByteBuf,(8));
            writeData(writeByteBuf,(8));

        }
        else
        {
            //7E AD 60 DE 0D 0A
            writeByteBuf[0] = 0x7E;
            writeByteBuf[1] = 0xAD;
            writeByteBuf[2] = 0x60;
            writeByteBuf[3] = 0xDE;
            writeByteBuf[4] = 0x0D;
            writeByteBuf[5] = 0x0A;

            //serial->write(writeByteBuf,(6));
            writeData(writeByteBuf,(6));
        }
        delay_2(500);
    }
    Mode_Setting = 1;
    ui->pushButton_getin_DebugMode->setChecked(0);
}

void MainWindow::on_pushButton_getin_DebugMode_clicked()
{
    QByteArray writeByteBuf;//bin缓存

    //for (int i=0; i<3; i++)
    {
        //DE B8 60 DE 0D 0A
        writeByteBuf[0] = 0xDE;
        writeByteBuf[1] = 0xB8;
        writeByteBuf[2] = 0x60;
        writeByteBuf[3] = 0xDE;
        writeByteBuf[4] = 0x0D;
        writeByteBuf[5] = 0x0A;

        //serial->write(writeByteBuf,(6));
        writeData(writeByteBuf,(6));

        delay_2(500);
    }
    Mode_Setting = 2;
}

void MainWindow::on_pushButton_getout_Mode_clicked()
{
    QByteArray writeByteBuf;//bin缓存

    //for (int i=0; i<3; i++)
    {
        if(Mode_Setting == 2)//
        {
            // AA 06 00 02 00 00 31 D1
            writeByteBuf[0] = 0xAA;
            writeByteBuf[1] = 0x06;
            writeByteBuf[2] = 0x00;
            writeByteBuf[3] = 0x02;
            writeByteBuf[4] = 0x00;
            writeByteBuf[5] = 0x00;
            writeByteBuf[6] = 0x31;
            writeByteBuf[7] = 0xD1;

            //serial->write(writeByteBuf,(8));
            writeData(writeByteBuf,(8));
        }
        else
        {
            //00 00 60 DE 0D 0A
            writeByteBuf[0] = 0x00;
            writeByteBuf[1] = 0x00;
            writeByteBuf[2] = 0x60;
            writeByteBuf[3] = 0xDE;
            writeByteBuf[4] = 0x0D;
            writeByteBuf[5] = 0x0A;

            //serial->write(writeByteBuf,(6));
            writeData(writeByteBuf,(6));
        }
        delay_2(500);
    }
    Mode_Setting = 0;
}


void MainWindow::on_pushButton_open_comtools_clicked()
{
    //QString QCoreApplication::applicationDirPath()
    QProcess *process = new QProcess;
    QStringList msglist;
    //process->start("D:/Tool/iControl_Tools/com_tool/sscom5.12.1.exe", msglist);
    process->start(QCoreApplication::applicationDirPath() + "/com_tool/sscom5.12.1.exe", msglist);
}

void MainWindow::on_checkBox_add_format_stateChanged(int arg1)
{
    if(ui->checkBox_add_format->isChecked())
    {
        ui->comboBox_format_details->setEnabled(1);
        ui->label_3->setEnabled(1);
        ui->lineEdit_addr_code->setEnabled(1);
    }
    else
    {
        ui->comboBox_format_details->setDisabled(1);
        ui->label_3->setDisabled(1);
        ui->lineEdit_addr_code->setDisabled(1);
    }
}


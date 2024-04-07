/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionConfigure;
    QAction *actionClear;
    QAction *actionQuit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QTextEdit *TextEdit_sendbuf;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *filePathLineEdit;
    QPushButton *openFileButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_send_num;
    QLCDNumber *lcdNumber_send;
    QLabel *label_read_num;
    QLCDNumber *receivebyteLcdNumber;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QPushButton *pushButton_Stop;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_add_format;
    QComboBox *comboBox_format_details;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QLineEdit *lineEdit_addr_code;
    QLabel *label_4;
    QLineEdit *lineEdit_data_Max;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_send_time;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_send_assign;
    QLineEdit *lineEdit_send_assign;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_open_comtools;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_getin_ReadMode;
    QPushButton *pushButton_getin_DebugMode;
    QPushButton *pushButton_getout_Mode;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Write;
    QLCDNumber *lcdNumber_Write;
    QLabel *label_Read;
    QLCDNumber *lcdNumber_Read;
    QPushButton *pushButton_readversions;
    QPlainTextEdit *fileViewPlainTextEdit;
    QMenuBar *menuBar;
    QMenu *menuCalls;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1019, 607);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/disconnect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QString::fromUtf8("actionConfigure"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure->setIcon(icon2);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon3);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setFrameShadow(QFrame::Plain);
        splitter->setLineWidth(5);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(5);
        splitter->setChildrenCollapsible(true);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    /*font-family: \"Microsoft YaHei\";\n"
"    font-size: 18px;*/\n"
"    color: #000000;\n"
"    /*font-style: normal;\n"
"    font-weight: normal;*/\n"
" \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: aqua;\n"
"    border-radius: 20px;\n"
" \n"
"    padding-left: 2px;\n"
"    padding-top: 2px;\n"
" \n"
"    /*background-color: rgb(237, 242, 255);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    /*background-image: url(\"./image.png\");*/\n"
"    /*background-repeat: no-repeat;*/\n"
"    background-position: left center;\n"
"}\n"
"\n"
"\n"
"QLabel:hover{\n"
"color: red;\n"
"border-color: green;\n"
"    background-color: aqua;\n"
"}\n"
"\n"
"QLabel:disabled{\n"
"	color: blue;\n"
"	border-color: brown;\n"
"    background-color: aqua;\n"
"}\n"
""));

        verticalLayout->addWidget(label_5);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(textBrowser);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    /*font-family: \"Microsoft YaHei\";\n"
"    font-size: 18px;*/\n"
"    color: #000000;\n"
"    /*font-style: normal;\n"
"    font-weight: normal;*/\n"
" \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: aqua;\n"
"    border-radius: 20px;\n"
" \n"
"    padding-left: 2px;\n"
"    padding-top: 2px;\n"
" \n"
"    /*background-color: rgb(237, 242, 255);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    /*background-image: url(\"./image.png\");*/\n"
"    /*background-repeat: no-repeat;*/\n"
"    background-position: left center;\n"
"}\n"
"\n"
"\n"
"QLabel:hover{\n"
"color: red;\n"
"border-color: green;\n"
"    background-color: aqua;\n"
"}\n"
"\n"
"QLabel:disabled{\n"
"	color: blue;\n"
"	border-color: brown;\n"
"    background-color: aqua;\n"
"}\n"
""));

        verticalLayout->addWidget(label_2);

        TextEdit_sendbuf = new QTextEdit(layoutWidget);
        TextEdit_sendbuf->setObjectName(QString::fromUtf8("TextEdit_sendbuf"));
        TextEdit_sendbuf->setStyleSheet(QString::fromUtf8("/*Display*/\n"
"/*QTextBrowser*/\n"
"QTextBrowser#textBrowser\n"
"{\n"
"    border:1px solid transparent;\n"
"    border-radius:2px;\n"
"    color: white;\n"
"    background-color: rgba(22,99,138,50%);\n"
"    border-color: rgba(0,156,255,50%);\n"
"    font-size: 12px;\n"
"    font-weight: 400;\n"
"    selection-background-color: #8c8c8c;\n"
"    selection-color:#e6e6e6;\n"
"    padding-left:6px;\n"
"    padding-right:6px;\n"
"}\n"
"\n"
"QTextBrowser QScrollBar:vertical\n"
"{\n"
"    border: none;\n"
"    background: transparent;\n"
"    width: 6px;\n"
"}\n"
"\n"
"QTextBrowser QScrollBar::handle:vertical\n"
"{\n"
"    background-color: rgb(13,74,107);\n"
"    min-height: 30px;\n"
"    border-radius:3px;\n"
"    width: 6px;\n"
"}\n"
"\n"
"QTextBrowser QScrollBar::add-line:vertical\n"
"{\n"
"   border: none;\n"
"   height: 0px;\n"
" }\n"
"\n"
"QTextBrowser QScrollBar::sub-line:vertical\n"
"{\n"
"   border: none;\n"
"   height: 0px;\n"
"}\n"
"\n"
"QTextBrowser QScrollBar::add-page:vertical,QScrollBar::sub-page:ve"
                        "rtical\n"
"{\n"
"    background:transparent;\n"
"    border-radius:3px;\n"
"}\n"
"\n"
"\n"
"QGraphicsView\n"
"{\n"
"    border:1px solid transparent;\n"
"    border-radius:2px;\n"
"    color: white;\n"
"    background-color: rgba(22,99,138,50%);\n"
"    border-color: rgba(0,156,255,50%);\n"
"}\n"
"\n"
"/*QCalendarWidget*/\n"
"QCalendarWidget QToolButton\n"
"{\n"
"    padding-right: 20px;\n"
"}\n"
"\n"
"/*QLcdNumber*/\n"
"QLCDNumber\n"
"{\n"
"    border:1px solid transparent;\n"
"    border-color: rgba(0,156,255,50%);\n"
"    border-radius:2px;\n"
"    color: white;\n"
"    background-color: rgba(22,99,138,50%);\n"
"    font-size:16px;\n"
"    font-weight: 400;\n"
"}\n"
"\n"
"/*QProgressBar*/\n"
"QProgressBar\n"
"{\n"
"    height:21px;\n"
"    border-color: rgba(0,156,255,50%);\n"
"    border-radius:2px;\n"
"    text-align: center;\n"
"    color:red;\n"
"}\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color:rgb(0,177,255);\n"
"    width:20px;\n"
"}\n"
"\n"
"/*line*/\n"
"QFrame#line\n"
"{\n"
"    color:red;\n"
""
                        "}\n"
"\n"
"QFrame#line_2\n"
"{\n"
"    color:blue;\n"
"}\n"
""));

        verticalLayout->addWidget(TextEdit_sendbuf);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        filePathLineEdit = new QLineEdit(layoutWidget1);
        filePathLineEdit->setObjectName(QString::fromUtf8("filePathLineEdit"));
        filePathLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid #A0A0A0; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #A0A0A0; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #A0A0A0; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 20pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 "
                        "*/\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #298DFF;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"        color: #298DFF;\n"
"        selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"] { /* QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	lineedit-password-character: 9679;\n"
"	lineedit-password-mask-delay: 2000;\n"
"}\n"
"\n"
"QLineEdit:disabled { /* QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLineEdit:read-only { /* QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #CDCDCD;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        horizontalLayout_6->addWidget(filePathLineEdit);

        openFileButton = new QPushButton(layoutWidget1);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        openFileButton->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346"
                        "\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));

        horizontalLayout_6->addWidget(openFileButton);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_send_num = new QLabel(layoutWidget1);
        label_send_num->setObjectName(QString::fromUtf8("label_send_num"));
        label_send_num->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    /*font-family: \"Microsoft YaHei\";\n"
"    font-size: 18px;*/\n"
"    color: #000000;\n"
"    /*font-style: normal;\n"
"    font-weight: normal;*/\n"
" \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: aqua;\n"
"    border-radius: 20px;\n"
" \n"
"    padding-left: 2px;\n"
"    padding-top: 2px;\n"
" \n"
"    /*background-color: rgb(237, 242, 255);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    /*background-image: url(\"./image.png\");*/\n"
"    /*background-repeat: no-repeat;*/\n"
"    background-position: left center;\n"
"}\n"
"\n"
"\n"
"QLabel:hover{\n"
"color: red;\n"
"border-color: green;\n"
"    background-color: aqua;\n"
"}\n"
"\n"
"QLabel:disabled{\n"
"	color: blue;\n"
"	border-color: brown;\n"
"    background-color: aqua;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(label_send_num);

        lcdNumber_send = new QLCDNumber(layoutWidget1);
        lcdNumber_send->setObjectName(QString::fromUtf8("lcdNumber_send"));
        lcdNumber_send->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumber_send);

        label_read_num = new QLabel(layoutWidget1);
        label_read_num->setObjectName(QString::fromUtf8("label_read_num"));
        label_read_num->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    /*font-family: \"Microsoft YaHei\";\n"
"    font-size: 18px;*/\n"
"    color: #000000;\n"
"    /*font-style: normal;\n"
"    font-weight: normal;*/\n"
" \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: aqua;\n"
"    border-radius: 20px;\n"
" \n"
"    padding-left: 2px;\n"
"    padding-top: 2px;\n"
" \n"
"    /*background-color: rgb(237, 242, 255);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    /*background-image: url(\"./image.png\");*/\n"
"    /*background-repeat: no-repeat;*/\n"
"    background-position: left center;\n"
"}\n"
"\n"
"\n"
"QLabel:hover{\n"
"color: red;\n"
"border-color: green;\n"
"    background-color: aqua;\n"
"}\n"
"\n"
"QLabel:disabled{\n"
"	color: blue;\n"
"	border-color: brown;\n"
"    background-color: aqua;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(label_read_num);

        receivebyteLcdNumber = new QLCDNumber(layoutWidget1);
        receivebyteLcdNumber->setObjectName(QString::fromUtf8("receivebyteLcdNumber"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(receivebyteLcdNumber->sizePolicy().hasHeightForWidth());
        receivebyteLcdNumber->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(16);
        receivebyteLcdNumber->setFont(font1);
        receivebyteLcdNumber->setStyleSheet(QString::fromUtf8(""));
        receivebyteLcdNumber->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(receivebyteLcdNumber);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346"
                        "\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_Stop = new QPushButton(layoutWidget1);
        pushButton_Stop->setObjectName(QString::fromUtf8("pushButton_Stop"));
        pushButton_Stop->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346"
                        "\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton_Stop);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_add_format = new QCheckBox(layoutWidget1);
        checkBox_add_format->setObjectName(QString::fromUtf8("checkBox_add_format"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBox_add_format->sizePolicy().hasHeightForWidth());
        checkBox_add_format->setSizePolicy(sizePolicy2);
        checkBox_add_format->setFont(font1);
        checkBox_add_format->setMouseTracking(true);
        checkBox_add_format->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"    spacing: 2px;\n"
"    color: blace;\n"
"}\n"
"QCheckBox::indicator {\n"
"    width: 60px;\n"
"    height: 40px;\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"    image: url(:/images/switch_off.png);\n"
"}\n"
"QCheckBox::indicator:unchecked:hover {\n"
"    image: url(:/images/switch_off.png);\n"
"}\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"    image: url(:/images/switch_off.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/images/switch_on.png);\n"
"}\n"
"QCheckBox::indicator:checked:hover {\n"
"    image: url(:/images/switch_on.png);\n"
"}\n"
"QCheckBox::indicator:checked:pressed {\n"
"    image: url(:/images/switch_on.png);\n"
"}\n"
""));
        checkBox_add_format->setIconSize(QSize(64, 64));
        checkBox_add_format->setCheckable(true);
        checkBox_add_format->setChecked(true);

        horizontalLayout->addWidget(checkBox_add_format);

        comboBox_format_details = new QComboBox(layoutWidget1);
        comboBox_format_details->addItem(QString());
        comboBox_format_details->setObjectName(QString::fromUtf8("comboBox_format_details"));
        sizePolicy2.setHeightForWidth(comboBox_format_details->sizePolicy().hasHeightForWidth());
        comboBox_format_details->setSizePolicy(sizePolicy2);
        comboBox_format_details->setStyleSheet(QString::fromUtf8("/*QCombobox\344\270\273\344\275\223*/\n"
"QComboBox {\n"
"    border: 2px solid #f3f3f3;/*\350\256\276\347\275\256\347\272\277\345\256\275*/\n"
"	background-color: rgb(237, 242, 255);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    border-radius: 15px;/*\345\234\206\350\247\222*/\n"
"    padding: 1px 2px 1px 2px;  /*\351\222\210\345\257\271\344\272\216\347\273\204\345\220\210\346\241\206\344\270\255\347\232\204\346\226\207\346\234\254\345\206\205\345\256\271*/\n"
"	text-align:bottom;\n"
"    min-width: 9em;   /*# \347\273\204\345\220\210\346\241\206\347\232\204\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"    /*min-height: 5em;*/\n"
"\n"
"	border-style:solid;/*\350\276\271\346\241\206\344\270\272\345\256\236\347\272\277\345\236\213*/\n"
"	border-width:2px;/*\350\276\271\346\241\206\345\256\275\345\272\246*/\n"
"	border-color:rgb(77, 123, 255);/*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"\n"
"	padding-left: 10px;/*\345\267\246\344\276\247\350\276\271\350\267\235*/\n"
"}\n"
"/*QC"
                        "ombobox\345\217\263\344\276\247\346\214\211\351\222\256*/\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;/*\346\224\276\344\272\216\345\217\263\346\226\271\351\241\266\351\203\250*/\n"
"    width: 50px;/*\350\256\276\347\275\256\346\214\211\351\222\256\350\214\203\345\233\264\345\256\275\345\272\246*/\n"
" 	/*border-radius: 15px;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;*/\n"
"\n"
"    border-top-right-radius: 3px;/*\350\256\276\347\275\256\350\276\271\346\241\206\345\234\206\350\247\222*/\n"
"    border-bottom-right-radius: 3px;\n"
"/*padding-right: 50px;*/\n"
"}\n"
"/*QCombobox\345\217\263\344\276\247\346\214\211\351\222\256\347\232\204\347\256\255\345\244\264\345\233\276\346\240\207*/\n"
"QComboBox::down-arrow {\n"
"	border-image: url(:/image/down_list.png);\n"
"	width: 10px;\n"
"	height: 7px;\n"
"}\n"
"\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270"
                        "\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    border: 2px solid #f3f3f3;/*\350\276\271\346\241\206\345\256\275\345\272\246\343\200\201\347\272\277\345\275\242\343\200\201\351\242\234\350\211\262*/\n"
"	background-color: rgba(237, 242, 255, 1);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    border-radius: 15px;/*\345\234\206\350\247\222*/\n"
"    padding: 1px 2px 1px 2px;  /*\351\222\210\345\257\271\344\272\216\347\273\204\345\220\210\346\241\206\344\270\255\347\232\204\346\226\207\346\234\254\345\206\205\345\256\271*/\n"
"    min-width: 9em;   /*# \347\273\204\345\220\210\346\241\206\347\232\204\346\234\200\345\260\217\345\256\275\345\272\246*/\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item {\n"
"	border-radius: 15px;/*\345\234\206\350\247\222*/"
                        "\n"
"    height: 30px;   /* \351\241\271\347\232\204\351\253\230\345\272\246\357\274\210\350\256\276\347\275\256pComboBox->setView(new QListView());\345\220\216\357\274\214\350\257\245\351\241\271\346\211\215\350\265\267\344\275\234\347\224\250\357\274\211 */\n"
"	background-color: rgb(237, 242, 255);\n"
"\n"
"}\n"
"\n"
"/*\344\273\245\344\270\213\351\203\250\345\210\206\344\270\215\347\237\245\344\270\272\344\275\225\344\270\215\347\224\237\346\225\210\357\274\214\346\234\211\345\276\205\350\260\203\350\257\225*/\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"    color: #FFFFF0;\n"
"       /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"	background-color: rgb(98, 0, "
                        "255);\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\346\213\251\347\232\204\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    color: #FFFFF0;\n"
"	background-color: rgb(0, 85, 200);\n"
"}\n"
""));

        horizontalLayout->addWidget(comboBox_format_details);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    /*font-family: \"Microsoft YaHei\";\n"
"    font-size: 18px;*/\n"
"    color: #000000;\n"
"    /*font-style: normal;\n"
"    font-weight: normal;*/\n"
" \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: aqua;\n"
"    border-radius: 20px;\n"
" \n"
"    padding-left: 2px;\n"
"    padding-top: 2px;\n"
" \n"
"    /*background-color: rgb(237, 242, 255);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    /*background-image: url(\"./image.png\");*/\n"
"    /*background-repeat: no-repeat;*/\n"
"    background-position: left center;\n"
"}\n"
"\n"
"\n"
"QLabel:hover{\n"
"color: red;\n"
"border-color: green;\n"
"    background-color: aqua;\n"
"}\n"
"\n"
"QLabel:disabled{\n"
"	color: blue;\n"
"	border-color: brown;\n"
"    background-color: aqua;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_3);

        lineEdit_addr_code = new QLineEdit(layoutWidget1);
        lineEdit_addr_code->setObjectName(QString::fromUtf8("lineEdit_addr_code"));
        lineEdit_addr_code->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid #A0A0A0; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: black; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #A0A0A0; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 20pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */"
                        "\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #298DFF;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"        color: #298DFF;\n"
"        selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"] { /* QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	lineedit-password-character: 9679;\n"
"	lineedit-password-mask-delay: 2000;\n"
"}\n"
"\n"
"QLineEdit:disabled { /* QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLineEdit:read-only { /* QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #CDCDCD;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        horizontalLayout->addWidget(lineEdit_addr_code);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    /*font-family: \"Microsoft YaHei\";\n"
"    font-size: 18px;*/\n"
"    color: #000000;\n"
"    /*font-style: normal;\n"
"    font-weight: normal;*/\n"
" \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: aqua;\n"
"    border-radius: 20px;\n"
" \n"
"    padding-left: 2px;\n"
"    padding-top: 2px;\n"
" \n"
"    /*background-color: rgb(237, 242, 255);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    /*background-image: url(\"./image.png\");*/\n"
"    /*background-repeat: no-repeat;*/\n"
"    background-position: left center;\n"
"}\n"
"\n"
"\n"
"QLabel:hover{\n"
"color: red;\n"
"border-color: green;\n"
"    background-color: aqua;\n"
"}\n"
"\n"
"QLabel:disabled{\n"
"	color: blue;\n"
"	border-color: brown;\n"
"    background-color: aqua;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_4);

        lineEdit_data_Max = new QLineEdit(layoutWidget1);
        lineEdit_data_Max->setObjectName(QString::fromUtf8("lineEdit_data_Max"));
        lineEdit_data_Max->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid #A0A0A0; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: black; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #A0A0A0; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 20pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */"
                        "\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #298DFF;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"        color: #298DFF;\n"
"        selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"] { /* QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	lineedit-password-character: 9679;\n"
"	lineedit-password-mask-delay: 2000;\n"
"}\n"
"\n"
"QLineEdit:disabled { /* QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLineEdit:read-only { /* QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #CDCDCD;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        horizontalLayout->addWidget(lineEdit_data_Max);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    /*font-family: \"Microsoft YaHei\";\n"
"    font-size: 18px;*/\n"
"    color: #000000;\n"
"    /*font-style: normal;\n"
"    font-weight: normal;*/\n"
" \n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: aqua;\n"
"    border-radius: 20px;\n"
" \n"
"    padding-left: 2px;\n"
"    padding-top: 2px;\n"
" \n"
"    /*background-color: rgb(237, 242, 255);/*\350\203\214\346\231\257\351\242\234\350\211\262*/\n"
"    /*background-image: url(\"./image.png\");*/\n"
"    /*background-repeat: no-repeat;*/\n"
"    background-position: left center;\n"
"}\n"
"\n"
"\n"
"QLabel:hover{\n"
"color: red;\n"
"border-color: green;\n"
"    background-color: aqua;\n"
"}\n"
"\n"
"QLabel:disabled{\n"
"	color: blue;\n"
"	border-color: black;\n"
"    background-color: aqua;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(label);

        lineEdit_send_time = new QLineEdit(layoutWidget1);
        lineEdit_send_time->setObjectName(QString::fromUtf8("lineEdit_send_time"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_send_time->sizePolicy().hasHeightForWidth());
        lineEdit_send_time->setSizePolicy(sizePolicy3);
        lineEdit_send_time->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid #A0A0A0; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: black; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #A0A0A0; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 20pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */"
                        "\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #298DFF;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"        color: #298DFF;\n"
"        selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"] { /* QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	lineedit-password-character: 9679;\n"
"	lineedit-password-mask-delay: 2000;\n"
"}\n"
"\n"
"QLineEdit:disabled { /* QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLineEdit:read-only { /* QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #CDCDCD;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(lineEdit_send_time);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_send_assign = new QPushButton(layoutWidget1);
        pushButton_send_assign->setObjectName(QString::fromUtf8("pushButton_send_assign"));
        pushButton_send_assign->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346"
                        "\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_send_assign);

        lineEdit_send_assign = new QLineEdit(layoutWidget1);
        lineEdit_send_assign->setObjectName(QString::fromUtf8("lineEdit_send_assign"));
        lineEdit_send_assign->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: 1px solid #A0A0A0; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: black; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #A0A0A0; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 20pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */"
                        "\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #298DFF;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"        color: #298DFF;\n"
"        selection-background-color: #298DFF;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"] { /* QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	lineedit-password-character: 9679;\n"
"	lineedit-password-mask-delay: 2000;\n"
"}\n"
"\n"
"QLineEdit:disabled { /* QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLineEdit:read-only { /* QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	background-color: #CDCDCD;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(lineEdit_send_assign);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_open_comtools = new QPushButton(layoutWidget1);
        pushButton_open_comtools->setObjectName(QString::fromUtf8("pushButton_open_comtools"));
        pushButton_open_comtools->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346"
                        "\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(pushButton_open_comtools);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButton_getin_ReadMode = new QPushButton(layoutWidget1);
        pushButton_getin_ReadMode->setObjectName(QString::fromUtf8("pushButton_getin_ReadMode"));
        pushButton_getin_ReadMode->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346"
                        "\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));
        pushButton_getin_ReadMode->setCheckable(true);
        pushButton_getin_ReadMode->setAutoExclusive(true);

        horizontalLayout_3->addWidget(pushButton_getin_ReadMode);

        pushButton_getin_DebugMode = new QPushButton(layoutWidget1);
        pushButton_getin_DebugMode->setObjectName(QString::fromUtf8("pushButton_getin_DebugMode"));
        pushButton_getin_DebugMode->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346"
                        "\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));
        pushButton_getin_DebugMode->setCheckable(true);
        pushButton_getin_DebugMode->setAutoExclusive(true);

        horizontalLayout_3->addWidget(pushButton_getin_DebugMode);

        pushButton_getout_Mode = new QPushButton(layoutWidget1);
        pushButton_getout_Mode->setObjectName(QString::fromUtf8("pushButton_getout_Mode"));
        pushButton_getout_Mode->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346"
                        "\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));
        pushButton_getout_Mode->setCheckable(true);
        pushButton_getout_Mode->setChecked(true);
        pushButton_getout_Mode->setAutoExclusive(true);

        horizontalLayout_3->addWidget(pushButton_getout_Mode);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_Write = new QLabel(layoutWidget1);
        label_Write->setObjectName(QString::fromUtf8("label_Write"));
        label_Write->setFont(font1);

        horizontalLayout_5->addWidget(label_Write);

        lcdNumber_Write = new QLCDNumber(layoutWidget1);
        lcdNumber_Write->setObjectName(QString::fromUtf8("lcdNumber_Write"));
        lcdNumber_Write->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumber_Write);

        label_Read = new QLabel(layoutWidget1);
        label_Read->setObjectName(QString::fromUtf8("label_Read"));
        label_Read->setFont(font1);

        horizontalLayout_5->addWidget(label_Read);

        lcdNumber_Read = new QLCDNumber(layoutWidget1);
        lcdNumber_Read->setObjectName(QString::fromUtf8("lcdNumber_Read"));
        lcdNumber_Read->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_5->addWidget(lcdNumber_Read);

        pushButton_readversions = new QPushButton(layoutWidget1);
        pushButton_readversions->setObjectName(QString::fromUtf8("pushButton_readversions"));
        pushButton_readversions->setStyleSheet(QString::fromUtf8("/**\346\255\243\345\270\270\346\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton{\n"
"	font: 18pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2f3640;\n"
"    background-color: #f5f6fa;\n"
"    border-color: #2f3640;\n"
"    border-radius: 15px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\345\201\234\347\225\231\345\234\250\346\214\211\351\222\256\344\270\212\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"/**\351\274\240\346\240\207\346\214\211\345\216\213\344\270\213\345\216\273\347\232\204\346\240\267\345\274\217**/\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"/**\346\214\211\351\222\256\345\244\261\350\203\275\346"
                        "\203\205\345\206\265\344\270\213\346\240\267\345\274\217**/\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));

        horizontalLayout_5->addWidget(pushButton_readversions);


        verticalLayout_2->addLayout(horizontalLayout_5);

        fileViewPlainTextEdit = new QPlainTextEdit(layoutWidget1);
        fileViewPlainTextEdit->setObjectName(QString::fromUtf8("fileViewPlainTextEdit"));

        verticalLayout_2->addWidget(fileViewPlainTextEdit);

        verticalLayout_2->setStretch(3, 1);
        verticalLayout_2->setStretch(4, 1);
        verticalLayout_2->setStretch(5, 1);
        splitter->addWidget(layoutWidget1);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1019, 26));
        menuCalls = new QMenu(menuBar);
        menuCalls->setObjectName(QString::fromUtf8("menuCalls"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCalls->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuCalls->addAction(actionConnect);
        menuCalls->addAction(actionDisconnect);
        menuCalls->addSeparator();
        menuCalls->addAction(actionQuit);
        menuTools->addAction(actionConfigure);
        menuTools->addAction(actionClear);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        mainToolBar->addAction(actionConnect);
        mainToolBar->addAction(actionDisconnect);
        mainToolBar->addAction(actionConfigure);
        mainToolBar->addAction(actionClear);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Simple Terminal", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "About program", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionAbout->setShortcut(QCoreApplication::translate("MainWindow", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAboutQt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "C&onnect", nullptr));
#if QT_CONFIG(tooltip)
        actionConnect->setToolTip(QCoreApplication::translate("MainWindow", "Connect to serial port", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionConnect->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDisconnect->setText(QCoreApplication::translate("MainWindow", "&Disconnect", nullptr));
#if QT_CONFIG(tooltip)
        actionDisconnect->setToolTip(QCoreApplication::translate("MainWindow", "Disconnect from serial port", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDisconnect->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionConfigure->setText(QCoreApplication::translate("MainWindow", "&Configure", nullptr));
#if QT_CONFIG(tooltip)
        actionConfigure->setToolTip(QCoreApplication::translate("MainWindow", "Configure serial port", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionConfigure->setShortcut(QCoreApplication::translate("MainWindow", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear->setText(QCoreApplication::translate("MainWindow", "C&lear", nullptr));
#if QT_CONFIG(tooltip)
        actionClear->setToolTip(QCoreApplication::translate("MainWindow", "Clear data", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClear->setShortcut(QCoreApplication::translate("MainWindow", "Alt+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        openFileButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        label_send_num->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_read_num->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        checkBox_add_format->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\240\274\345\274\217", nullptr));
        comboBox_format_details->setItemText(0, QCoreApplication::translate("MainWindow", "\344\270\255\346\216\247_Modbus", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\345\234\260\345\235\200", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\214\205\345\244\247\345\260\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\351\227\264\351\232\224", nullptr));
        pushButton_send_assign->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\214\207\345\256\232\345\214\205", nullptr));
        pushButton_open_comtools->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
        pushButton_getin_ReadMode->setText(QCoreApplication::translate("MainWindow", "\347\233\221\345\220\254", nullptr));
        pushButton_getin_DebugMode->setText(QCoreApplication::translate("MainWindow", "\350\260\203\350\257\225", nullptr));
        pushButton_getout_Mode->setText(QCoreApplication::translate("MainWindow", "\346\255\243\345\270\270", nullptr));
        label_Write->setText(QCoreApplication::translate("MainWindow", "Write", nullptr));
        label_Read->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        pushButton_readversions->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\234\254", nullptr));
        menuCalls->setTitle(QCoreApplication::translate("MainWindow", "Calls", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

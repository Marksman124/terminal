QT += widgets serialport

TARGET = terminal
TEMPLATE = app

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mbcrc.cpp \
    settingsdialog.cpp

HEADERS += \
    mainwindow.h \
    mbcrc.h \
    port.h \
    settingsdialog.h \
    stdint.h

FORMS += \
    mainwindow.ui \
    settingsdialog.ui

RESOURCES += \
    terminal.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/serialport/terminal
INSTALLS += target

RC_ICONS = app_icon.ico

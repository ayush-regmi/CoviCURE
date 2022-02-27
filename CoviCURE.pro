QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Source\login.cpp \
    Source\main.cpp \
    Source\mainwindow.cpp \
    Source\signup.cpp

HEADERS += \
    Header\login.h \
    Header\mainwindow.h \
    Header\signup.h

FORMS += \
    UI\login.ui \
    UI\mainwindow.ui \
    UI\signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Sources\login.cpp \
    Sources\main.cpp \
    Sources\mainwindow.cpp \
    Sources\signup.cpp \
    Sources\dashboard.cpp \
    Sources\choosehospitals.cpp \
    Sources\vaccine_login.cpp \
    Sources\loginview.cpp \
    Sources\signupvaccine.cpp \
    Sources\hospitals.cpp \
    Sources\database.cpp \
    Sources\database.cpp \

HEADERS += \
    Headers\login.h \
    Headers\mainwindow.h \
    Headers\signup.h \
    Headers\dashboard.h \
    Headers\choosehospitals.h \
    Headers\vaccine_login.h \
    Headers\loginview.h \
    Headers\signupvaccine.h \
    Headers\hospitals.h \
    Headers\database.h \
    Headers\database.h \

FORMS += \
    Forms\login.ui \
    Forms\mainwindow.ui \
    Forms\signup.ui \
    Forms\dashboard.ui \
    Forms\choosehospitals.ui \
    Forms\vaccine_login.ui \
    Forms\loginview.ui \
    Forms\signupvaccine.ui \
    Forms\hospitals.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    img/login.jpg

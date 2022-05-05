QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Sources\Main\login.cpp \
    Sources\Main\main.cpp \
    Sources\Main\mainwindow.cpp \
    Sources\Main\signup.cpp \
    Sources\Hospital\choosehospitals.cpp \
    Sources\Vaccine\vaccine_login.cpp \
    Sources\Vaccine\loginview.cpp \
    Sources\Vaccine\signupvaccine.cpp \
    Sources\Rapidcovid\rapidcovid.cpp \
    Sources\Hospital\hospitals.cpp \
    Sources\database.cpp \
    Sources\Rapidcovid\quepage1.cpp \
    Sources\Rapidcovid\quepage2.cpp \
    Sources\Rapidcovid\quepage3.cpp \
    Sources\Hospital\hospdash.cpp \
    Sources/Hospital/appointment.cpp \
    Sources/Live/livedash.cpp \
    Sources/Hospital/myhospital.cpp \
    Sources/Rapidcovid/quepage4.cpp \
    Sources/Rapidcovid/messagepage.cpp \
    Sources/Main/home.cpp \
    Sources/VAccine/card1.cpp


HEADERS += \
    Headers\Main\login.h \
    Headers\Main\mainwindow.h \
    Headers\Main\signup.h \
    Headers\Hospital\choosehospitals.h \
    Headers\Vaccine\vaccine_login.h \
    Headers\Vaccine\loginview.h \
    Headers\Vaccine\signupvaccine.h \
    Headers\Hospital\hospitals.h \
    Headers\database.h \
    Headers\Rapidcovid\rapidcovid.h \
    Headers\Rapidcovid\quepage1.h \
    Headers\Rapidcovid\quepage2.h \
    Headers\Rapidcovid\quepage3.h \
    Headers\Hospital\hospdash.h \
    Headers\Hospital\appointment.h \
    Headers\Live\livedash.h \
    Headers/Hospital/myhospital.h \
    Headers/Rapidcovid/quepage4.h \
    Headers/Rapidcovid/messagepage.h \
    Headers/Main/home.h \
    Headers/Vaccine/card1.h


FORMS += \
    Forms\Main\login.ui \
    Forms\Main\mainwindow.ui \
    Forms\Main\signup.ui \
    Forms\Hospital\choosehospitals.ui \
    Forms\Vaccine\vaccine_login.ui \
    Forms\Vaccine\loginview.ui \
    Forms\Vaccine\signupvaccine.ui \
    Forms\Rapidcovid\rapidcovid.ui \
    Forms\Hospital\hospitals.ui \
    Forms\Rapidcovid\quepage1.ui \
    Forms\Rapidcovid\quepage2.ui \
    Forms\Rapidcovid\quepage3.ui \
    Forms\Hospital\hospdash.ui \
    Forms\Hospital\appointment.ui \
    Forms\Live\livedash.ui \
    Forms/Hospital/myhospital.ui \
    Forms/Rapidcovid/quepage4.ui \
    Forms/Rapidcovid/messagepage.ui \
    Forms/Main/home.ui \
    Forms/Vaccine/card1.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    img/login.jpg

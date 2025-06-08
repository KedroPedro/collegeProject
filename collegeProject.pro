QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addappointmentwindow.cpp \
    addpatientwindow.cpp \
    addservicewindow.cpp \
    database.cpp \
    datatable.cpp \
    editappointmentwindow.cpp \
    editpatientwindow.cpp \
    editservicewindow.cpp \
    main.cpp \
    authorizationwindow.cpp \
    mainmenuwindow.cpp \
    passwordhasher.cpp \
    patienttablewindow.cpp \
    picture.cpp \
    regadminconfirm.cpp \
    regfullinfo.cpp \
    settings.cpp

HEADERS += \
    addappointmentwindow.h \
    addpatientwindow.h \
    addservicewindow.h \
    authorizationwindow.h \
    database.h \
    datatable.h \
    editappointmentwindow.h \
    editpatientwindow.h \
    editservicewindow.h \
    mainmenuwindow.h \
    passwordhasher.h \
    patienttablewindow.h \
    picture.h \
    regadminconfirm.h \
    regfullinfo.h \
    settings.h


FORMS += \
    addappointmentwindow.ui \
    addpatientwindow.ui \
    addservicewindow.ui \
    authorizationwindow.ui \
    editappointmentwindow.ui \
    editpatientwindow.ui \
    editservicewindow.ui \
    mainmenuwindow.ui \
    patienttablewindow.ui \
    regadminconfirm.ui \
    regfullinfo.ui \
    settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    config.ini \
    pictures/derevya.jpg

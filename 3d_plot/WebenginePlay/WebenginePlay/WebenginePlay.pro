# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Add-in.
# ------------------------------------------------------
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = app
TARGET = WebenginePlay

QT+= core gui axcontainer webenginewidgets webchannel
HEADERS += ./webengineplay.h \
    ./webview.h
SOURCES += ./main.cpp \
    ./webengineplay.cpp \
    ./webview.cpp
FORMS += ./webengineplay.ui
RESOURCES += webengineplay.qrc

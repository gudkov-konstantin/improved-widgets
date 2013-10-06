CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(improvedwidgetsplugin)
TEMPLATE    = lib

HEADERS     = \
    improvedlineeditplugin.h \
    improvedmessagewidgetplugin.h \
    improvedwidgets.h \
    improvedbusyindicatorplugin.h

SOURCES     = \
    improvedlineeditplugin.cpp \
    improvedmessagewidgetplugin.cpp \
    improvedwidgets.cpp \
    improvedbusyindicatorplugin.cpp

RESOURCES   = \
    images.qrc \
    improvedwidgets/improvedwidgets.qrc

LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(improvedmessagewidget.pri)
include(improvedlineedit.pri)
include(improvedbusyindicator.pri)

OTHER_FILES += \
    images/lineedit.png \
    images/frame.png \
    images/busyindicator.png \
    improvedwidgets/images/warning.png \
    improvedwidgets/images/positive.png \
    improvedwidgets/images/information.png \
    improvedwidgets/images/go-up.png \
    improvedwidgets/images/go-down.png \
    improvedwidgets/images/error.png \
    improvedwidgets/images/close.png \
    improvedwidgets/images/clear_left.png

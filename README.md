# Improved Widgets

## Description

My modification of some standart Qt &amp; KDE widgets

Widgets list:

* ImprovedMessageWidget - component KMessageWidget with feature show detailed message text.
* ImprovedLineEdit - component QLineEdit with feature quick clean text.

This repository also consist plugin for QtDesigner.

## Building plugin

```git clone https://github.com/gudkov-konstantin/improved-widgets.git
mkdir build-iw
cd build-iw
qmake "CONFIG+=release" ../improved-widgets/improved-widgets.pro
make
```

## Installing plugin

```cp libimprovedwidgetsplugin.so %QT_DIR%/qtbase/plugins/designer
```

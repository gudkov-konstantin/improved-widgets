#include "improvedwidgets/improvedmessagewidget.h"
#include "improvedmessagewidgetplugin.h"

#include <QtPlugin>

ImprovedMessageWidgetPlugin::ImprovedMessageWidgetPlugin(QObject *parent)
    : QObject(parent)
{
    mInitialized = false;
}

void ImprovedMessageWidgetPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (mInitialized)
        return;

    // Add extension registrations, etc. here

    mInitialized = true;
}

bool ImprovedMessageWidgetPlugin::isInitialized() const
{
    return mInitialized;
}

QWidget *ImprovedMessageWidgetPlugin::createWidget(QWidget *parent)
{
    return new ImprovedMessageWidget(parent);
}

QString ImprovedMessageWidgetPlugin::name() const
{
    return QLatin1String("ImprovedMessageWidget");
}

QString ImprovedMessageWidgetPlugin::group() const
{
    return QLatin1String("Improved Widgets");
}

QIcon ImprovedMessageWidgetPlugin::icon() const
{
    return QIcon(QLatin1String(":/images/frame.png"));
}

QString ImprovedMessageWidgetPlugin::toolTip() const
{
    return QLatin1String("Widget for show error/info/warning/positive text");
}

QString ImprovedMessageWidgetPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool ImprovedMessageWidgetPlugin::isContainer() const
{
    return false;
}

QString ImprovedMessageWidgetPlugin::domXml() const
{
    return QLatin1String("<widget class=\"ImprovedMessageWidget\" native=\"true\" name=\"messageWidget\">S\n</widget>\n");
}

QString ImprovedMessageWidgetPlugin::includeFile() const
{
    return QLatin1String("improvedwidgets/improvedmessagewidget.h");
}


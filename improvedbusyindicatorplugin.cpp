#include "improvedbusyindicatorplugin.h"

#include "improvedwidgets/improvedbusyindicator.h"
#include <QtPlugin>

ImprovedBusyIndicatorPlugin::ImprovedBusyIndicatorPlugin(QObject *parent)
: QObject(parent)
{
    mInitialized = false;
}

bool ImprovedBusyIndicatorPlugin::isContainer() const
{
    return false;
}

bool ImprovedBusyIndicatorPlugin::isInitialized() const
{
    return mInitialized;
}

QIcon ImprovedBusyIndicatorPlugin::icon() const
{
    return QIcon(QLatin1String(":/images/busyindicator.png"));
}

QString ImprovedBusyIndicatorPlugin::domXml() const
{
    return QLatin1String("<widget class=\"ImprovedBusyIndicator\" name=\"busyIndicator\">\n</widget>\n");
}

QString ImprovedBusyIndicatorPlugin::group() const
{
    return QLatin1String("Improved Widgets");
}

QString ImprovedBusyIndicatorPlugin::includeFile() const
{
    return QLatin1String("improvedwidgets/improvedbusyindicator.h");
}

QString ImprovedBusyIndicatorPlugin::name() const
{
    return QLatin1String("ImprovedBusyIndicator");
}

QString ImprovedBusyIndicatorPlugin::toolTip() const
{
    return QLatin1String("Widget for show animated busy indicator");
}

QString ImprovedBusyIndicatorPlugin::whatsThis() const
{
    return "";
}

QWidget *ImprovedBusyIndicatorPlugin::createWidget(QWidget *parent)
{
    return new ImprovedBusyIndicator(parent);
}

void ImprovedBusyIndicatorPlugin::initialize(QDesignerFormEditorInterface * /*core*/)
{
    if (mInitialized)
        return;

    // Add extension registrations, etc. here

    mInitialized = true;
}

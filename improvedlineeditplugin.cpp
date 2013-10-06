#include "improvedwidgets/improvedlineedit.h"
#include "improvedlineeditplugin.h"

#include <QtPlugin>

ImprovedLineEditPlugin::ImprovedLineEditPlugin(QObject *parent)
    : QObject(parent)
{
    mInitialized = false;
}

void ImprovedLineEditPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (mInitialized)
        return;

    // Add extension registrations, etc. here

    mInitialized = true;
}

bool ImprovedLineEditPlugin::isInitialized() const
{
    return mInitialized;
}

QWidget *ImprovedLineEditPlugin::createWidget(QWidget *parent)
{
    return new ImprovedLineEdit(parent);
}

QString ImprovedLineEditPlugin::name() const
{
    return QLatin1String("ImprovedLineEdit");
}

QString ImprovedLineEditPlugin::group() const
{
    return QLatin1String("Improved Widgets");
}

QIcon ImprovedLineEditPlugin::icon() const
{
    return QIcon(QLatin1String(":/images/lineedit.png"));
}

QString ImprovedLineEditPlugin::toolTip() const
{
    return QLatin1String("QLineEdit with clear button");
}

QString ImprovedLineEditPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool ImprovedLineEditPlugin::isContainer() const
{
    return false;
}

QString ImprovedLineEditPlugin::domXml() const
{
    return QLatin1String("<widget class=\"ImprovedLineEdit\" name=\"improvedLineEdit\">\n</widget>\n");
}

QString ImprovedLineEditPlugin::includeFile() const
{
    return QLatin1String("improvedwidgets/improvedlineedit.h");
}


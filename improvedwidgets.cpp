#include "improvedlineeditplugin.h"
#include "improvedmessagewidgetplugin.h"
#include "improvedbusyindicatorplugin.h"
#include "improvedwidgets.h"

ImprovedWidgets::ImprovedWidgets(QObject *parent)
    : QObject(parent)
{
    mWidgets.append(new ImprovedLineEditPlugin(this));
    mWidgets.append(new ImprovedMessageWidgetPlugin(this));
    mWidgets.append(new ImprovedBusyIndicatorPlugin(this));
}

QList<QDesignerCustomWidgetInterface*> ImprovedWidgets::customWidgets() const
{
    return mWidgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(improvedwidgetsplugin, ImprovedWidgets)
#endif // QT_VERSION < 0x050000

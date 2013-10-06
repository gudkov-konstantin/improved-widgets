#include "improvedlineeditplugin.h"
#include "improvedmessagewidgetplugin.h"
#include "improvedwidgets.h"

ImprovedWidgets::ImprovedWidgets(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new ImprovedLineEditPlugin(this));
    m_widgets.append(new ImprovedMessageWidgetPlugin(this));

}

QList<QDesignerCustomWidgetInterface*> ImprovedWidgets::customWidgets() const
{
    return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(improvedwidgetsplugin, ImprovedWidgets)
#endif // QT_VERSION < 0x050000

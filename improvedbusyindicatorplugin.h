#ifndef IMPROVEDBUSYINDICATORPLUGIN_H
#define IMPROVEDBUSYINDICATORPLUGIN_H

#include <QDesignerCustomWidgetInterface>

class ImprovedBusyIndicatorPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    ImprovedBusyIndicatorPlugin(QObject *parent = 0);

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;
    QString domXml() const;
    QString group() const;
    QString includeFile() const;
    QString name() const;
    QString toolTip() const;
    QString whatsThis() const;
    QWidget *createWidget(QWidget *parent);
    void initialize(QDesignerFormEditorInterface *);

private:
    bool mInitialized;

};

#endif // IMPROVEDBUSYINDICATORPLUGIN_H

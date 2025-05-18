#include "DistroboxModule.h"
#include "DistroboxBackend.h"

#include <KQuickConfigModule>
#include <QQmlEngine>
#include <QUrl>

DistroboxModule::DistroboxModule(QObject *parent, const KPluginMetaData &metaData, const QVariantList &args)
    : KQuickConfigModule(metaData, parent)
{
    Q_UNUSED(args)
    qmlRegisterType<DistroboxBackend>("org.kde.distrobox", 1, 0, "DistroboxBackend");
    setQmlSource(QUrl(QStringLiteral("qrc:/ui/main.qml")));
}

void DistroboxModule::save()
{
    // TODO: Implement saving the config when user applies changes
}

void DistroboxModule::load()
{
    // TODO: Implement loading the config when module is opened
}

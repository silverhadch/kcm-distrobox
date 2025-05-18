#pragma once

#include <KQuickConfigModule>

class DistroboxModule : public KQuickConfigModule
{
    Q_OBJECT

public:
    DistroboxModule(QObject *parent, const KPluginMetaData &metaData, const QVariantList &args);

    void load() override;
    void save() override;
};


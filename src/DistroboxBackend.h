#pragma once

#include <QObject>
#include <QStringList>

class DistroboxBackend : public QObject
{
    Q_OBJECT
public:
    explicit DistroboxBackend(QObject *parent = nullptr);

    Q_INVOKABLE QStringList listDistroboxes();
    Q_INVOKABLE bool addDistrobox(const QString &name, const QString &image);
    Q_INVOKABLE bool removeDistrobox(const QString &name);
    Q_INVOKABLE bool enterDistrobox(const QString &name);
    Q_INVOKABLE bool exportApp(const QString &boxName, const QString &appName);
    Q_INVOKABLE bool unexportApp(const QString &boxName, const QString &appName);
    Q_INVOKABLE bool openPackageFile(const QString &boxName, const QString &packagePath);

signals:
    void errorOccurred(const QString &message);
};


#include "DistroboxBackend.h"

DistroboxBackend::DistroboxBackend(QObject *parent) : QObject(parent) {}

QStringList DistroboxBackend::listDistroboxes() {
    // TODO: Implement scanning and listing installed distroboxes
    return {};
}

bool DistroboxBackend::addDistrobox(const QString &name, const QString &image) {
    // TODO: Implement creating a new distrobox with given name and image
    return false;
}

bool DistroboxBackend::removeDistrobox(const QString &name) {
    // TODO: Implement removing an existing distrobox by name
    return false;
}

bool DistroboxBackend::enterDistrobox(const QString &name) {
    // TODO: Implement entering the shell of a given distrobox
    return false;
}

bool DistroboxBackend::exportApp(const QString &boxName, const QString &appName) {
    // TODO: Implement exporting an app from the distrobox
    return false;
}

bool DistroboxBackend::unexportApp(const QString &boxName, const QString &appName) {
    // TODO: Implement removing the exported app from the host system
    return false;
}

bool DistroboxBackend::openPackageFile(const QString &boxName, const QString &packagePath) {
    // TODO: Implement opening and installing a package file inside the distrobox
    return false;
}


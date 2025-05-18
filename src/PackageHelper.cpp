#include "PackageHelper.h"

bool PackageHelper::openPackageInBox(const QString &boxName, const QString &packagePath) {
    // TODO: Detect package type and dispatch to appropriate installer inside distrobox
    return false;
}

bool PackageHelper::openDebPackage(const QString &boxName, const QString &path) {
    // TODO: Implement opening a .deb package inside the box
    return false;
}

bool PackageHelper::openRpmPackage(const QString &boxName, const QString &path) {
    // TODO: Implement opening a .rpm package inside the box
    return false;
}


#pragma once

#include <QString>

class PackageHelper
{
public:
    bool openPackageInBox(const QString &boxName, const QString &packagePath);

private:
    bool openDebPackage(const QString &boxName, const QString &path);
    bool openRpmPackage(const QString &boxName, const QString &path);
};


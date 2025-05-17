/**
 * SPDX-FileCopyrightText: Year Author <author@domain.com>
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#pragma once

#include <KQuickConfigModule>

class DistroboxSettings : public KQuickConfigModule
{
    Q_OBJECT
    public:
        DistroboxSettings(QObject *parent, const KPluginMetaData &data);
};


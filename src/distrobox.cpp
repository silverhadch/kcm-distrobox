/**
 * SPDX-FileCopyrightText: Year Author <author@domain.com>
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "distrobox.h"

#include <KPluginFactory>

K_PLUGIN_CLASS_WITH_JSON(DistroboxSettings, "kcm_distrobox.json")

DistroboxSettings::DistroboxSettings(QObject *parent, const KPluginMetaData &data)
    : KQuickConfigModule(parent, data)
{
    setButtons(Help | Apply | Default);
}

#include "distrobox.moc"


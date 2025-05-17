# SPDX-FileCopyrightText: Year Author <email@company.com>
#
# SPDX-License-Identifier: BSD-2-Clause

kcmutils_add_qml_kcm(kcm_distrobox)
target_sources(kcm_distrobox PRIVATE
   distrobox.cpp
   distrobox.h
)
target_link_libraries(kcm_distrobox PRIVATE
    Qt::Quick
    KF6::CoreAddons
    KF6::KCMUtils
    KF6::I18n
)


cmake_minimum_required(VERSION 3.16)

project(kcm-distrobox VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Minimum versions
set(QT_MIN_VERSION "6.5.0")
set(KF6_MIN_VERSION "6.0.0")

# ECM setup
find_package(ECM REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH})

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings NO_POLICY_SCOPE)

# Find Qt6 packages
find_package(Qt6 ${QT_MIN_VERSION} REQUIRED COMPONENTS Core Quick Qml)

# Find KDE Frameworks 6 packages
find_package(KF6 ${KF6_MIN_VERSION} REQUIRED COMPONENTS
    Config
    ConfigWidgets
    CoreAddons
    KCMUtils
    Kirigami
    I18n
)

# Define the KCM library target
add_library(kcm_distrobox MODULE
    src/DistroboxBackend.cpp
    src/DistroboxBackend.h
    src/DistroboxModule.cpp
    src/DistroboxModule.h
    src/PackageHelper.cpp
    src/PackageHelper.h
)

# Add resources
qt6_add_resources(kcm_distrobox "kcm-distrobox.qrc")

# Link required libraries
target_link_libraries(kcm_distrobox
    Qt6::Core
    Qt6::Quick
    Qt6::Qml
    KF6::ConfigWidgets
    KF6::KCMUtils
    KF6::CoreAddons
    KF6::Kirigami
    KF6::I18n
)

# Set output name
set_target_properties(kcm_distrobox PROPERTIES
    OUTPUT_NAME kcm_distrobox
)

# Install the plugin (adjust if needed)
install(TARGETS kcm_distrobox DESTINATION ${KDE_INSTALL_PLUGINDIR}/plasma/kcms/systemsettings)

# Optional: install metadata.desktop (needed if not embedded)
# install(FILES org.kde.distrobox.desktop DESTINATION ${KDE_INSTALL_KSERVICES5DIR})

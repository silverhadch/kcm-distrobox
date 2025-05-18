import QtQuick 2.15
import QtQuick.Controls 2.15
import org.kde.kirigami 2.20 as Kirigami

Kirigami.Page {
    title: "Install Package File"

    ColumnLayout {
        spacing: Kirigami.Units.smallSpacing

        TextField {
            id: packagePath
            placeholderText: "Path to .deb or .rpm"
        }

        Button {
            text: "Install"
            onClicked: {
                // TODO: backend.openPackageFile(box, packagePath.text)
            }
        }
    }
}


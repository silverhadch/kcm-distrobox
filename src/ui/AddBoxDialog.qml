import QtQuick 2.15
import QtQuick.Controls 2.15
import org.kde.kirigami 2.20 as Kirigami

Kirigami.Dialog {
    id: dialog
    title: "Add Distrobox"

    ColumnLayout {
        spacing: Kirigami.Units.smallSpacing

        TextField {
            id: nameField
            placeholderText: "Box name"
        }

        TextField {
            id: imageField
            placeholderText: "Image (e.g., ubuntu:22.04)"
        }

        Button {
            text: "Create"
            onClicked: {
                backend.addDistrobox(nameField.text, imageField.text)
                dialog.close()
            }
        }
    }
}


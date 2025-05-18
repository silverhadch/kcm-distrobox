import QtQuick 2.15
import QtQuick.Controls 2.15
import org.kde.kirigami 2.20 as Kirigami

Kirigami.ScrollablePage {
    id: exportPage
    title: "Exported Applications"

    ListView {
        anchors.fill: parent
        model: []
        delegate: RowLayout {
            Label { text: modelData }

            Button {
                text: "Unexport"
                onClicked: {
                    // TODO: Remove exported app from host system
                }
            }
            Button {
                text: "Add to Menu"
                // TODO: Add exported app to system menu/launcher
            }
        }
    }
}


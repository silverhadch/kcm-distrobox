import QtQuick 2.15
import QtQuick.Controls 2.15
import org.kde.kirigami 2.20 as Kirigami
import org.kde.distrobox 1.0

Kirigami.ScrollablePage {
    id: mainPage
    title: "Distrobox Manager"

    DistroboxBackend {
        id: backend
    }

    ColumnLayout {
        anchors.fill: parent
        spacing: Kirigami.Units.smallSpacing

        RowLayout {
            Layout.alignment: Qt.AlignRight
            Button {
                text: "Create Distrobox"
                onClicked: console.log("TODO: Open AddBoxDialog")
            }
        }

        ListView {
            Layout.fillWidth: true
            Layout.fillHeight: true
            model: backend.listDistroboxes()
            delegate: Item {
                width: parent.width
                height: Kirigami.Units.gridUnit * 2

                RowLayout {
                    spacing: Kirigami.Units.smallSpacing

                    Label {
                        text: modelData
                        Layout.fillWidth: true
                    }

                    Button { text: "Enter"; onClicked: backend.enterDistrobox(modelData) }
                    Button { text: "Clone" /* TODO: implement cloning */ }
                    Button { text: "Update" /* TODO: implement updating */ }
                    Button { text: "Delete"; onClicked: backend.removeDistrobox(modelData) }
                    Button {
                        text: "Export Apps"
                        onClicked: {
                            // TODO: Open ExportApps dialog/page
                        }
                    }
                }
            }
        }
    }
}


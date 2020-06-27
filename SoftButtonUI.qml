import QtQuick 2.4
import Buttons 1.0


SoftButton {
    id:widgetRoot

    Item {
        id: name
        anchors.fill: parent

        Image {
            width: 100
            height:100
            id:img
            anchors.centerIn:parent
            source: widgetRoot.buttonImageId

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    handleClicked()
                }
            }
        }

        Text {
            anchors.top: img.bottom
            anchors.horizontalCenter: img.horizontalCenter
            anchors.margins: 50
            font.pointSize: 18
            text: qsTr(widgetRoot.buttonText)
        }



    }
}

import QtQuick 2.13
import QtQuick.Controls 2.13
import QtQuick.Window 2.13



Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Button{
        anchors.centerIn: parent
        text:  "Click  Me!"
        onClicked: webSocketHandler.connectToServer(  "www.google.com" )

    }
}

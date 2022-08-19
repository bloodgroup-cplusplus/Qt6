import QtQuick
import QtQuick.VirtualKeyboard

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Image {
        x:20;y:20
        width:200
        height:100
        source:"qrc:images/exit.png"

    }

}

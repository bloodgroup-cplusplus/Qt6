import QtQuick
import QtQuick.VirtualKeyboard


Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle
    {
        id: background
        anchors.fill: parent
        color: "blue"
        // we want to do some animations on the rectangle
        // we want to change the color of the window to different color 
        // let's use sequential animation 
        
        SequentialAnimation on color
        {
            ColorAnimation {to: "yellow"; duration:1000}
            ColorAnimation{to:"red"; duration:1000}
            ColorAnimation{to:"green"; duration:1000}

            
        }

    }

}


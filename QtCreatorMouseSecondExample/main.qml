import QtQuick
import QtQuick.VirtualKeyboard

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Rectangle {

        // we want to create button from rectangle

        id :button
        x:12;y:12
        width:116;height:26
        color :"lightsteelblue"
        border.color:"slategrey"




        Text{


            anchors.centerIn:parent
            text :"Change Text"

        }

        MouseArea
        {
            anchors.fill:parent
                        onClicked:{
                            // id of the text below
                            status.text = "Welcome to qt6 Course"
                            status.color = "red"
                            status.font.pixelSize = 20

                        }
        }




    }


    Text
    {
        id :status
        x:12;y:76
        width:116;height:26
        text:"Hello World"
    }


   }

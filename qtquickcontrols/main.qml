import QtQuick
import QtQuick.VirtualKeyboard
import QtQuick.Controls 2.0

ApplicationWindow {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    background: Rectangle
    {
        gradient: Gradient {

            GradientStop {
                position:0; color: "#ffffff"
            }

            GradientStop
            {
                position:0; color:"#c1bbf9"
            }

        }
    }

    Button
    {
        id:control1
        text:"Click Me"
        contentItem:Text{
        text :control1.text}
        x:50;y:50
        width:100;height:40
        font.pixelSize:20
    }
    // let's customize our botton with new button

    Button
    {
        id:control
        text:"Click me "
        contentItem: Text {
            text:control.text
            font:contorl.font
            opacity:enabled? 1.0 :0.3
           color:  control.down? "red" : "green"
           horizontalAlignment: Text.AlignHCenter
           verticalAlignment: Text.AlignVCenter
        }

        background:Rectangle
        {
            implicitWidth: 100
            implicitHeight:40
            opacity :enabled?1.0:03
           border. color:control.down? "red":"green"
            border.width:1
            radius:2
        }
    }


    Label
    {
        id:label1
        text:"Welcome to Qt6 Course"
        font.pixelSize:22
        font.italic:true
        x:200
        y:200
        color:"red"



    }
}


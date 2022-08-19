import QtQuick
import QtQuick.VirtualKeyboard

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    // set background element
   // color:"red"

    // this window object creates a new top level scene
    // a window can be declared inside an ietm
    // we have the window and then we have width and height

    // all visual elements inherits from item
    // geometry , layout and transformation is used as a container for all toher eleemnts

    // the element that we use a lot is called rectangle

    // the rectanlge extends from item and adds fill color to it


    Rectangle
    {
        // we can add id for every element
        id :rect1
        width : 200
        height:200
        x:30;y:30
        color:"blue"


    }


    Rectangle
    {
        id: rect2
        width:100;height:100
        x:60; y:60

        border.color:"green"
        border.width:4
        radius:8
    }


    Rectangle
    {
        id:rect3
        x:200;y:200
        width:176;height:94
        gradient: Gradient{
            // give the gradients top
            GradientStop{position:0.0;color:"lightsteelblue"}
            GradientStop{position:1.0;color:"Slategray"}

        }
        border.color:"slategray"
    }


    Text
    {
        text:"Welcome to Qt6Course"
        x:111;y:111
        color:"green"
        font.family:"Times"
        font.pixelSize:28
    }

   }

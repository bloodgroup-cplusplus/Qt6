import QtQuick
import QtQuick.VirtualKeyboard

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")



    Canvas
    {
        id :mycanvas
        width: window.width
        height:window.height


        onPaint:{
            const context = getContext("2d")
            context.fillStyle  = "white"
            context.fillRect (0,0,width,height)
            context.lineWidth = 2
            context.stokeStyle = "black"


            // draw cross
            context.beginPath()
            context.moveTo(50,50)
            context.lineTo(100,100)
            context.closePath()
            context.stroke()
            context.beginPath()
            context.moveTo(100,50)
            context.lineTo(50,100)
            context.closePath()
            context.stroke()
        }
    }
}

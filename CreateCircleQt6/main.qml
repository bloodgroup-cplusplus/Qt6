import QtQuick
import QtQuick.VirtualKeyboard
import QtCharts 2.13

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Canvas
    {
        id: myCanvas
        width : window.width
        height : window.height


        onPaint: {
            const context = getContext("2d")
            context.lineWidth = 4
            context.strokeStyle = "blue"
            context.fillStyle = "steelblue"
            const pi = 3.141592653589793
            context.beginPath()
            context.arc(220,280,60,0,2*pi,true)
            context.closePath()
            context.fill()
            context.stroke()
        }
    }
}


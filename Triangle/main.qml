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
      id:myCanvas
      width:window.width
      height:window.height


      onPaint:{
          const context = getContext("2d")
         // context.fillStyle = 'white'
         // context.fillRect(0,0,width, height)
         // context.lineWidth =2
         // context.strokeStyle = 'black'


          //Draw Traingle
         context.lineWidth = 4
          context.strokeStyle = "red"
          context.fillStyle = "salmon"
          context.beginPath()
          context.moveTo(50,150)
          context.lineTo(150,150)
          context.lineTo(50,250)
          context.closePath()
          context.fill()
          context.stroke()


      }

  }

}

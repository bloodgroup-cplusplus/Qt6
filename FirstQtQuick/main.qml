import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Window 2.0



 Window {
     id:window
    width: 640
    height: 480
    visible: true
    title: qsTr("Automobile Dashboard")


    Rectangle
    {
        id:dashboard
        height:500
        width:800
        color:"black";
        CircularGauge
        {
            id:speedometer
            value: acceleration? maximumValue:0;
            anchors.centerIn:parent
            width: parent.width*0.5 //400
            height:parent.height * 0.8 //400
            maximumValue:180

            property bool acceleration:false

            Keys.onUpPressed:
            {
                acceleration = true
            }

            Keys.onReleased:{
                if(event.key === Qt.Key_Up)
                {
                    acceleration = false;
                    event.accepted = true;
                }
            }

            Behavior on value
            {
                NumberAnimation{
                    duration:5000
                }
            }

            Component.onCompleted : forceActiveFocus();
        }
    }
}

// we need to use the circular guage
// which displays vehicles speed at runtime
// use QtQuick.Extras
// use QtQuick.Controls.Styles
// useQtQuick.Controls
// so import all of them

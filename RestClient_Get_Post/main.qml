import QtQuick
import QtCharts 2.13
import QtQuick.VirtualKeyboard
import QtQuick.Controls 2.12
import QtQml

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Column{

        anchors.fill:  parent
        Button
        {

            id:buttonid
            text:"SendGetRequest"
            onClicked:{
                // send get request
                restClient.createGetRequest("");

        }

            Text {
                id: responsetext
                text:restClient.responseText
                font.pointSize:10
            }
       }

}
}

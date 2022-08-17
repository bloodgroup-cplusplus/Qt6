import QtQuick
import QtCharts
import QtQuick.VirtualKeyboard
Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr ("Pie Chart")


    ChartView
    {
        anchors.fill:parent
        theme:ChartView.ChartThemeDark


        PieSeries
        {
            id:pieseries
            PieSlice {label: "C++" ; value: 90}
            PieSlice {label : "Python3"; value:80}
            PieSlice {label: "Java" ; value:40}
            PieSlice {label: "C#"; value:30}

        }

    }

}

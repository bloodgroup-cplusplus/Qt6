import QtQuick
import QtQuick.VirtualKeyboard
import QtCharts


Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Stack Bar")


    ChartView
    {
        anchors.fill:parent
        theme:ChartView.ChartThemeBlueIcy




    StackedBarSeries
    {
        id:myseries
        BarSet{label :"Parwiz"; values:[2,2,3,4,5,6]}
        BarSet{label:"Chad"; values:[5,2,1,3,5,6,9]}
        BarSet{label:"Bob"; values:[3,5,18,9,6,9]}
    }

    }
}





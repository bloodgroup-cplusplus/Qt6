import QtQuick
import QtCharts
import QtQuick.VirtualKeyboard

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Line Chart Example")


    ChartView
    {
        anchors.fill:parent
        theme:ChartView.ChartThemeBrownSand
        animationOptions:ChartView.SeriesAnimations


        LineSeries
        {
            // we can give a name
            name : "LineChart"
            XYPoint {x:0; y:0}
            XYPoint{x:1.1;y:2.1}
            XYPoint{x:1.9; y:2.5}
            XYPoint{x:2.1; y:3.1}
        }

    }


}

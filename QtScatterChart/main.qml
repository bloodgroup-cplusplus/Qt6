import QtQuick
import QtCharts
import QtQuick.VirtualKeyboard

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Scatter Plot")

    ChartView {
        anchors.fill:parent
        theme: ChartView.ChartThemeBlueCerulean

        ScatterSeries
        {
            id : scatter1
            name: "Scatter 1"
            XYPoint {x:1.5; y:1.5}
            XYPoint{x:1.5; y:1.6}
            XYPoint{x:1.57; y:1.6}
            XYPoint{x:2.5; y:2.1}
        }


        ScatterSeries
        {
            id:scatter2
            name: "Scatter 2"
            XYPoint {x:2.5; y:1.5}
            XYPoint{x:3.5; y:1.6}
            XYPoint{x:4.57; y:1.6}
            XYPoint{x:3.5; y:2.1}
        }
    }
}

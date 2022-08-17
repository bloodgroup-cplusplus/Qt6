import QtQuick.Controls
import QtCharts
import QtQuick.VirtualKeyboard

ApplicationWindow {
    id: window
    width: 640
    height: 480
    visible: true
    title:"Bar Chart"

    ChartView
    {
        anchors.fill:parent
        antialiasing:true

        BarSeries {

            id: myseries
           // directly create our bar
            BarSet {label : "Parwiz"; values: [2,2,3,4,5,6]}
            BarSet{label: "John"; values:[5,3,1,7,8,9]}
            BarSet{label: "Bob"; values:[10,2,9,4,8,34]}


        }


     }

}

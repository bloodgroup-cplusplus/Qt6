import QtQuick
import QtQuick.VirtualKeyboard
import QtCharts

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Slice in PieSeries")



    ChartView {
        id:chart
        title:"Pieseries Slice"
        anchors.fill :parent
        legend.alignment:Qt.AlignBottom

        PieSeries
        {
            id:pieseries
            PieSlice { label :"C++"; value:90}
            PieSlice{label : "Python"; value:80}
            PieSlice{label :"Java"; value:70}
            PieSlice{label : "C#"; value:50}
        }
    }


    Component.onCompleted:
    {
        pieseries.find("C++").exploded = true;
    }



}



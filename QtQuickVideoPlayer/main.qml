import QtQuick.Controls
import QtQuick
import QtMultimedia
ApplicationWindow {
    id: window
    width: 640
    height: 480
    visible: true
    title: "Play Video"

    MediaPlayer
    {
        id:player
        source: "qrc:/videos:/videoplayback.mp4"
        videoOutput: videoOutput
    }


    VideoOutput
    {
        id: videoOutput
        anchors.fill: parent
        anchors.margins: 20
    }

    Component.onCompleted:
    {
        player.play();
    }

}

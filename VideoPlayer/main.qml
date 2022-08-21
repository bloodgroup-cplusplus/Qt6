import QtQuick
import QtQuick.VirtualKeyboard
import QtMultimedia
import QtQuick.Controls
Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: "Play Video"


    MediaPlayer
    {
        id:player
        source : "qrc:/video/videoplayback.mp4"
        audioOutput: audioOutput
        videoOutput: videoOutput
    }


    AudioOutput
    {
        id:audioOutput
        volume: volumeSlider.value


    }

    VideoOutput
    {
        id: videoOutput
        width:500
        height:400
        anchors.fill:parent
        anchors.margins:20
    }


    Slider
    {
        id: volumeSlider
        anchors.top: parent.top
        anchors.right: parent.right
        anchors.margins: 20
        orientation: Qt.Vertical
        value:0.5
    }


    Item {
                height:50
                anchors.left:parent.left
                anchors.right:parent.right
                anchors.bottom: parent.bottom
                anchors.margins: 20


                Button {

                    anchors.horizontalCenter : parent.horizontalCenter
                    text:  player.playbackRate === MediaPlayer.PlayingState? "Pause": "Play"
                    onClicked:
                    {
                        switch(player.playbackState)
                        {
                        case MediaPlayer.PlayingState: player.pause(); break;
                        case MediaPlayer.PausedState: player.play(); break;
                        case MediaPlayer.StoppedState:player.play();break;

                        }
                    }


                }





    }



    Slider
    {
        id: progressSlider
        width: parent.width
        anchors.bottom: parent.bottom
        enabled:  player.seekable
        value : player.duration  >0 ? player.position/ player.duration : 0
        background : Rectangle
        {
            implicitWidth:8
            color :"black"
            radius:2
        }

        Rectangle
        {
            width:progressSldier.visualPosition* parent.width
            height: parent.height
            color : "#1D8Bf8"
            radius : 2
        }

        onMoved: function()
        {
            player.position = player.duration * progressSlider.position
        }

    }


    Component.onCompleted:
    {
        player.play()
    }




}



import QtQuick
import QtQuick.Controls
import QtMultimedia

ApplicationWindow {

    width:640
    height:480
    visible : true
    title: "play music"
    MediaPlayer {
           id:player
           source:"qrc:audiofiles/22731953_twinkle-twinkle-little-star_by_audiopuppy_preview.mp3"
           audioOutput: AudioOutput{}



    Component.onCompleted:{
        player.play();
    }
        }

}

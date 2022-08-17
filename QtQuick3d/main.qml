import QtQuick
import QtQuick.VirtualKeyboard
import QtQuick3D
// let's add a 3d object (cone) inside a scene
Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
// we need to add our 3d views
// this function  will create a basic scene
   /* View3D{
        anchors.fill: parent
        environment: SceneEnvironment {
            clearColor :"#222222"
            backgroundMode:SceneEnvironment.Color
        }
    }*/

    // let's create a 3d cone
    View3D{
        anchors.fill:parent
        environment: SceneEnvironment
        {
            clearColor: "#222222"
            backgroundMode:SceneEnvironment.Color
        }


        // let's craete our model
        Model
        {
            position : Qt .vector3d(0,0,0)
            scale: Qt.vector3d(1,1.25,1)
            source:"#Cone" // we could use rectangle sphere
            // give a color for cone
            materials: [PrincipledMaterial {baseColor:"yellow"}]
        }
        // let's add Directional Light
        DirectionalLight
        {
            // it is a light that acts like sun
            // gives light in the direction required
            // this is given by euler rotation
            eulerRotation. x:-20
            eulerRotation.y:110
            castsShadow: true
        }

        // add camera
        PerspectiveCamera
        {
            // there are various cameras for various perspective
            // it is imposssible to direct camera using euler property
            // this rotates the camera to look at specific direction
                position: Qt.vector3d(0,200,300)
                Component.onCompleted: lookAt(Qt.vector3d(0,0,0))

                }
        }


}


/*    InputPanel {
        id: inputPanel
        z: 99
        x: 0
        y: window.height
        width: window.width

        states: State {
            name: "visible"
            when: inputPanel.active
            PropertyChanges {
                target: inputPanel
                y: window.height - inputPanel.height
            }
        }
        transitions: Transition {
            from: ""
            to: "visible"
            reversible: true
            ParallelAnimation {
                NumberAnimation {
                    properties: "y"
                    duration: 250
                    easing.type: Easing.InOutQuad
                }
            }
        }
    }
}
*/

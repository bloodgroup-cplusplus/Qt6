#include <QCoreApplication>
#include "animal.h"
/* class is the blueprint
 * a text file that we write code into
 * we can write functions and blueprints into
 * we wanted to make a rectangle
 * properties change
 * but the blueprint dont
 * we use the donut example
 * every culture has a donut
 * it is the same basic concept
 * here the class will be the concept of donut
 * there are all donuts
 * when we create the instance of the object we are creating a donut
 * class would be a recipe of the donut
 * a class is a blueprint
 * we can make a copies of them in the memory
 * either c++ will delete them for us
 * or we will them for it
 * it gets a little more complex than that
 * we can take the class and we can inherit it
 * let's say we have a class
 * we make another class
 * interface is an individual part used in an object
 *Most classes in qt inherit q object
 *
 *
 *What is this ?
 *      intro to classes
 *
 * Why we learn classes ?
 *      We want to create objects from blueprints
 *
 * How
 *      we shall look in the examples
 *
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat;
    Animal dog;
    Animal fish;
    cat.setObjectName("Kitty");
    dog.setObjectName("Luna");
    dog.setObjectName("Water");
    cat.speak("meow");
    dog.speak("bark");
    fish.speak("bubbles");

    return a.exec();
}

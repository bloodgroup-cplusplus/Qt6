#include <QCoreApplication>
/* Waht
 * QByteArray
 *
 *
 *Why
 *Must have class for working with data
 *
 *How
 *Let's see
*/
int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    // there is always one tool
    // must have class for working with data
    // qbyte array is class for anything data related

    QString greeting = "Hello World";
    // qbyte array is baked into utf8 as well
    QByteArray buffer (greeting.toUtf8());
    buffer.append("!");
    qInfo() <<buffer;
    qInfo() <<buffer.rightJustified(20, '.');
    qInfo() << buffer.at(buffer.length()-1);
    // we can also interchangebly work with other strings
    // take a QString convert it into a byte array and modify it
    QString modified (buffer);
    qInfo() <<modified ;

    // Basic encoding and decoding

    qInfo()<< buffer.toBase64();
    qInfo() <<buffer.toHex();

    return a.exec();
}

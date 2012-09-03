#include <QCoreApplication>
#include <QImage>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //////////////////
    //// Qt hints ////

    // get the commandline arguments
    const QStringList args = a.arguments();

    // load an image
    QImage img;
    if( img.load("../data/DSC_0278.JPG") ) {
        uchar *bits = img.bits();
    }

    //////////////////

    return 0;
}

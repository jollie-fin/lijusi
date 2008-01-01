#include <QtGui/QApplication>
#include "Lijusi.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    Lijusi foo;
    foo.show();
    return app.exec();
}

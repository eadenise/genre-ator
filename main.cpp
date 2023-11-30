#include "genreatormain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    genreatormain w;
    w.show();
    return a.exec();
}

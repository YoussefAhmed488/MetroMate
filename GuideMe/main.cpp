#include "file_mangment.h"
#include "mainwindow.h"
#include<iostream>
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    File_Mangment file;
    file.write();
    file.read();
    w.show();
    for (int var = 0; var < File_Mangment().data_file.size(); ++var) {
        cout << File_Mangment().data_file[var]<<'\n';
    }

    return a.exec();
}











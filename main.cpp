#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QStyle>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/img/splash.png"));
//    splash->setPixmap(QPixmap(":/home/ash/QT/test1/PaintV1/fire.png"));
    splash->show();

    MainWindow w;


    QTimer::singleShot(2500,splash,SLOT(close()));
    QTimer::singleShot(2500,&w,SLOT(show()));

    w.setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            w.size(),
            qApp->desktop()->availableGeometry()
        )
    );


//    w.show();
    return a.exec();
}

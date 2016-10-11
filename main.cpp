#include "mainwindow.h"
#include "butterfly.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene;
    scene->setSceneRect(QRectF(-200, -200, 400, 400));

    Butterfly *butterfly = new Butterfly;
    butterfly->setPos(-100, 0);
    scene->addItem(butterfly);

    QGraphicsView *view = new QGraphicsView;
    view->setScene(scene);
    view->resize(400, 400);
    view->show();
    //MainWindow w;
    //w.show();

    return a.exec();
}

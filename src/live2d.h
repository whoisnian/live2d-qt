#ifndef LIVE2D_H
#define LIVE2D_H

#include <QApplication>
#include <QDesktopWidget>
#include <QMenu>
#include <QSystemTrayIcon>
#include <QtX11Extras/QX11Info>
#include <QWebEngineView>
#include <X11/extensions/shape.h>

class Live2D : public QWebEngineView
{
    Q_OBJECT

public:
    Live2D(QWidget *parent = nullptr);

private:
    QString makeHtml(QString modelname);
};

#endif // LIVE2D_H

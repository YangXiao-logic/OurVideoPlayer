#include "videowidget.h"

#include <QKeyEvent>
#include <QMouseEvent>

VideoWidget::VideoWidget(QWidget *parent)
    : QVideoWidget(parent) {
    setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    QPalette p = palette();
    p.setColor(QPalette::Window, Qt::black);
    setPalette(p);

    setAttribute(Qt::WA_OpaquePaintEvent);
}

void VideoWidget::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Escape && isFullScreen()) {
        setFullScreen(false);
        event->accept();
        qDebug() << "close fullscreen";
    }
}

void VideoWidget::mouseDoubleClickEvent(QMouseEvent *event) {
    setFullScreen(!isFullScreen());
    event->accept();
    qDebug() << "doubleclick open fullscreen";
}

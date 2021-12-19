#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H

#include <QVideoWidget>
#include <QDebug>

class VideoWidget : public QVideoWidget {
    Q_OBJECT

public:
    explicit VideoWidget(QWidget *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
    //void mousePressEvent(QMouseEvent *event) override;
};

#endif // VIDEOWIDGET_H

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <QProcess>
#include <iostream>
#include <QApplication>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QMediaPlaylist>
#include <string>
#include <vector>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>
#include <QtCore/QFileInfo>
#include <QtWidgets/QFileIconProvider>
#include <QDesktopServices>
#include <QImageReader>
#include <QMessageBox>
#include <QtCore/QDir>
#include <QtCore/QDirIterator>
#include "the_player.h"
#include "the_button.h"
#include <QKeyEvent>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_open_clicked();
    void on_pause_clicked();
    void on_fullscreen_clicked();
    void on_mute_clicked();
    void on_backward_clicked();
    void on_forward_clicked();
    void on_speed_clicked();
    void playerStateChanged ();
    void volumeStateChanged();
    void on_tag_clicked();
    void on_user_clicked();
    void on_search_clicked();
    void on_share_clicked();
    void on_menu_clicked();
    void on_next_clicked();
    void getbuttonindex(int index);

    void on_upload_clicked();

private:
    Ui::Widget *ui;
    std::vector<TheButtonInfo> videoList;
    std::vector<TheButton*> buttonList;
    ThePlayer *player;
    int playerindex;

    void Init();
    void creatbuttonList();
    void playMovie();
    std::vector<TheButtonInfo> getInfoIn (std::string loc);
    void getVideo(const std::string dirName);

};
#endif // WIDGET_H

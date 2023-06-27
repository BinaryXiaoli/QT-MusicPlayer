#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>
#include <QWidget>
#include <QDebug>
#include<QFileDialog>
#include <QMediaPlaylist>
#include <QScrollBar>

#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QVariant>
#include<QByteArray>
#include<QJsonParseError>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include<QUrl>
#include<QPixmap>
#include<QSize>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class QMediaPlayer;
class QMediaPlaylist;
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_pushButton_8_clicked();
      void changePlayStyle(int);



private:
    Ui::Widget *ui;
    QList<QUrl> playList;//播放列表的URL
    QMediaPlayer* mediaPlayer;
    QMediaPlaylist *playlist;
    int curPlayIndex =0;
    int playMoudle =0;
    bool playFlag=false;
};
#endif // WIDGET_H

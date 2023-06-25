#include "widget.h"
#include "ui_widget.h"
#include <QDir>
#include <QMediaPlayer>
#include <QAudioOutput>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //播放音乐
    audioOutput = new QAudioOutput(this);
    //媒体播放对象
    mediaPlayer =new QMediaPlayer(this);
    mediaPlayer->setAudioOutput(audioOutput);

    //获总的媒体时长，通过信号关联获取
    connect(mediaPlayer,&QMediaPlayer::durationChanged,this,[=](qint64 duration){ //int64 longlong 类型
        //%1 第一个参数，作用是替换占位符
        ui->totalLabel->setText(QString("%1:%2").arg(duration/1000/60,2,10,QChar('0')).arg(duration/1000%60));

        ui->playCourseSlider->setRange(0,duration);
    });
    //获当前媒体时长，通过信号关联获取
    connect(mediaPlayer,&QMediaPlayer::positionChanged,this,[=](qint64 pos)
    {
        // arg() 里面的参数意思为：数值,多少位,多少进制,用什么字符填充
        ui->curLabel->setText(QString("%1:%2").arg(pos/1000/60,2,10,QChar('0')).arg(pos/1000%60,2,10,QChar('0')));
        ui->playCourseSlider->setValue(pos);
    });
    //拖动进度条
    connect(ui->playCourseSlider,&QSlider::sliderMoved,mediaPlayer,&QMediaPlayer::setPosition);
    //

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    qInfo()<<"hello student";
    //打开头文件对话框，让用户选择音乐所在的目录
    //找到存在的文件夹
    auto path =QFileDialog::getExistingDirectory(this,"请选择音乐所在目录","C:/Users/李波/Desktop/assets/music");
    //根据目录路径，获取所有mp3文件
    QDir dir(path);
    //只过滤MP3文件
    auto musicList =dir.entryList(QStringList()<<"*.mp3");
    ui->listWidget->addItems(musicList);
    //默认选中第一个音乐
    ui->listWidget->setCurrentRow(0);

    //把音乐路径完整保存下来为playList
    for (auto file:musicList)
        playList.append(QUrl::fromLocalFile(path+"/"+file));


}


void Widget::on_pushButton_3_clicked()
{
    if(playList.empty()){
        return ;
    }
    switch(mediaPlayer->playbackState())
    {
    case QMediaPlayer::PlaybackState::StoppedState://暂停状态
    {
        curPlayIndex = ui->listWidget->currentRow();
        mediaPlayer->setSource(playList[curPlayIndex]);
        mediaPlayer->play();
        break;
    }
    case QMediaPlayer::PlaybackState::PlayingState://播放状态->暂停
    {
        mediaPlayer->pause();
     break;
    }

    case QMediaPlayer::PlaybackState::PausedState:
    {
     mediaPlayer->play();
     break;
    }


    }



}

//下一曲
void Widget::on_pushButton_4_clicked()
{
    //让listWidget选中下一行
    curPlayIndex=(curPlayIndex+1)%playList.size();
    ui->listWidget->setCurrentRow(curPlayIndex);
    mediaPlayer->setSource(playList[curPlayIndex]);
    mediaPlayer->play();
}

//上一曲
void Widget::on_pushButton_2_clicked()
{
    //让listWidget选中上一行
    //防止数组越界
    if(curPlayIndex==0){
     curPlayIndex=playList.size()-1;
    }
    else{
     curPlayIndex--;
    }
    ui->listWidget->setCurrentRow(curPlayIndex);
    mediaPlayer->setSource(playList[curPlayIndex]);
    mediaPlayer->play();
}

//双击实现播放
void Widget::on_listWidget_doubleClicked(const QModelIndex &index)
{
    //index有行有列
    curPlayIndex=index.row();
    mediaPlayer->setSource(playList[curPlayIndex]);
    mediaPlayer->play();


}


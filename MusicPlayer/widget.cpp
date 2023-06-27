#include "widget.h"
#include "ui_widget.h"
#include <QDir>
#include <QMediaPlayer>


using namespace  std ;


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    //媒体播放对象
    mediaPlayer =new QMediaPlayer(this);

    playlist = new QMediaPlaylist(this);//初始化播放列表



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
    //播放模式

}

Widget::~Widget()
{
    delete ui;
}

// 列表播放
void Widget::on_pushButton_clicked()
{
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
        playlist->addMedia(QUrl::fromLocalFile(path+"/"+file));
    mediaPlayer->setPlaylist(playlist);



}


void Widget::on_pushButton_3_clicked()
{
/*
    if(playList.empty()){
        return ;
    }

*/
    if(playFlag==false){//false 为暂停
       ui->pushButton_3->setStyleSheet("border-image: url(:/assets/bofang3.png);");

       playFlag=true;
       mediaPlayer->pause();
       return ;

    }
    playFlag=false;
    ui->pushButton_3->setStyleSheet("border-image: url(:/assets/pause.png);");
    curPlayIndex = ui->listWidget->currentRow();
    playlist->setCurrentIndex(curPlayIndex);
    mediaPlayer->play();


}

//下一曲
void Widget::on_pushButton_4_clicked()
{
    //让listWidget选中下一行
    curPlayIndex=(curPlayIndex+1)%(playlist->mediaCount());
    ui->listWidget->setCurrentRow(curPlayIndex);
    playlist->setCurrentIndex(curPlayIndex);
    mediaPlayer->play();

}

//上一曲
void Widget::on_pushButton_2_clicked()
{

    //让listWidget选中上一行
    //防止数组越界
    if(curPlayIndex==0){
       curPlayIndex=playlist->mediaCount()-1;
    }
    else{
     curPlayIndex--;
    }
    ui->listWidget->setCurrentRow(curPlayIndex);
    playlist->setCurrentIndex(curPlayIndex);
    mediaPlayer->play();

}

//双击实现播放
void Widget::on_listWidget_doubleClicked(const QModelIndex &index)
{
    //index有行有列
    curPlayIndex=index.row();
    playlist->setCurrentIndex(curPlayIndex);
    mediaPlayer->play();


    if(playFlag==false){//false 为暂停
     ui->pushButton_3->setStyleSheet("border-image: url(:/assets/bofang3.png);");
     playFlag=true;
     mediaPlayer->pause();
     return;
    }
    playFlag=false;
    ui->pushButton_3->setStyleSheet("border-image: url(:/assets/pause.png);");
    curPlayIndex=index.row();
    playlist->setCurrentIndex(curPlayIndex);
    mediaPlayer->play();



}

//列表播放或者单曲循环  pushButton_8
void Widget::on_pushButton_8_clicked()
{
    //border-image: url(:/assets/circle1.png);
   // border-image: url(:/assets/circle.png);
    //列表播放

    if(playMoudle==0){
     ui->pushButton_8->setStyleSheet("border-image: url(:/assets/circle.png);");
     playMoudle=0;
     changePlayStyle(playMoudle);
     //ui->pushButton_8->setIcon(QIcon("://circle.png"));
     playMoudle=1;
     return ;
    }
    //单曲循环
    else if(playMoudle==1){
     ui->pushButton_8->setStyleSheet("border-image: url(:/assets/circle1.png);");
     playMoudle=1;
     changePlayStyle(playMoudle);
    // ui->pushButton_8->setIcon(QIcon("://circle1.png"))
    playMoudle=2;
     return ;
    }
    //随机播放
    else {
     ui->pushButton_8->setStyleSheet("border-image: url(:/assets/random.png);");
     playMoudle=2;
     changePlayStyle(playMoudle);
     //ui->pushButton_8->setIcon(QIcon("://assets/random.png"));
     playMoudle=0;
     return ;
    }



}
//播放模式
void Widget::changePlayStyle(int playModelStyle){
    //列表循环
    if(playModelStyle==0){
     playlist->setPlaybackMode(QMediaPlaylist::Loop);
     if(mediaPlayer->position()==mediaPlayer->duration()&&mediaPlayer->position()!=0&&mediaPlayer->duration()!=0){
         mediaPlayer->play();
     }
     return;

    }
    //单曲循环
    else if(playModelStyle==1){
    // mediaPlayer->setPlaylist(playlist);
     playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);

     if(mediaPlayer->position()==mediaPlayer->duration()&&mediaPlayer->position()!=0&&mediaPlayer->duration()!=0){
         mediaPlayer->play();
     }
    }
    //随机播放
    else if(playModelStyle==2) {
    playlist->setPlaybackMode(QMediaPlaylist::Random);
    if(mediaPlayer->position()==mediaPlayer->duration()&&mediaPlayer->position()!=0&&mediaPlayer->duration()!=0){
         mediaPlayer->play();
    }
    }

}



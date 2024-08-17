#include "widget.h"
#include "ui_widget.h"
#include<QFileDialog>
#include<QDir>
#include<QDebug>
#include<QStringList>
#include<QMediaPlayer>
#include<QAudioOutput>
#include<QUrl>
#include<QSlider>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
    musicPlayer = new QMediaPlayer(this);
    musicOutput = new QAudioOutput(this);
    musicPlayer->setAudioOutput(musicOutput);
    musicOutput->setVolume(50);

    connect(musicPlayer,&QMediaPlayer::positionChanged,this,[=]{
        ui->MusicSlider->setValue(musicPlayer->position());
    });
    connect(musicPlayer,&QMediaPlayer::durationChanged,this,[=](qint64 duration ){
        ui->toalLabel->setText(QString("%1:%2").arg(duration/1000/60).arg(duration/1000%60));


    });
    connect(musicPlayer,&QMediaPlayer::positionChanged,this,[=](qint64 pos ){

        ui->curLabel->setText(QString("%1:%2").arg(pos/1000/60,2,10,QChar('0')).arg(pos/1000%60));
     });
    connect(ui->MusicSlider,&QSlider::sliderMoved,musicPlayer,&QMediaPlayer::setPosition);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ChooseMusic_clicked()
{
    QString musicPath;
    musicPath=QFileDialog::getExistingDirectory(this,tr("Open music"),"C:/Users/asus/Music/music1");
    qDebug()<<musicPath;
    QDir musicDir(musicPath);
    QStringList musicList = musicDir.entryList(QStringList()<<"*.mp3"<<"*.wav");
    qDebug()<<musicList;

    ui->listWidget->addItems(musicList);
    ui->listWidget->setCurrentRow(0);

    for(auto music : musicList){
        listplay.append(musicPath+"/"+music);
    }
    qDebug()<<"     LIST OF MUSIC PATH IS :     "<<listplay;

}


void Widget::on_beginMusic_clicked()
{
    if(listplay.empty()){return;}
    switch (musicPlayer->playbackState()) {
    case QMediaPlayer::PlayingState:
        musicPlayer->pause();
        break;
    case QMediaPlayer::StoppedState:
    {
        int musicindex = ui->listWidget->currentRow();
        musicPlayer->setSource(listplay[musicindex]);
        musicPlayer->play();
        break;
    }
    case QMediaPlayer::PausedState:
    {musicPlayer->play();
        break;
    }
    }
}


void Widget::on_listWidget_doubleClicked(const QModelIndex &index)
{

    int musicindex = ui->listWidget->currentRow();
    musicPlayer->setSource(listplay[musicindex]);
    ui->MusicSlider->setRange(0,musicPlayer->duration());
    ui->MusicSlider->setValue(0);
    curindex=musicindex;

    musicPlayer->play();

}


void Widget::on_nextMusic_clicked()
{
    if(listplay.empty()){return;}
    curindex = (curindex+1)%listplay.size();

    ui->listWidget->setCurrentRow(curindex);

    musicPlayer->setSource(listplay[curindex]);
    musicPlayer->play();
}

void Widget::on_preMusic_clicked()
{
    if(listplay.empty()){return;}
    if(curindex-1<0) curindex=0;
    else{
    curindex = (curindex-1)%listplay.size();
    }
    ui->listWidget->setCurrentRow(curindex);

    musicPlayer->setSource(listplay[curindex]);
    musicPlayer->play();

}


#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QListView>
#include<QMediaPlayer>
#include<QAudioOutput>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_ChooseMusic_clicked();

    void on_beginMusic_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_nextMusic_clicked();

    void on_preMusic_clicked();

private:
    Ui::Widget *ui;
    int curindex=0;
    QMediaPlayer *musicPlayer;
    QAudioOutput *musicOutput;
    QList<QUrl> listplay;
};
#endif // WIDGET_H

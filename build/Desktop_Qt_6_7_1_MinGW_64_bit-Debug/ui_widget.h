/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *curLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *toalLabel;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QSlider *MusicSlider;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *ChooseMusic;
    QToolButton *ListMusic;
    QToolButton *preMusic;
    QToolButton *beginMusic;
    QToolButton *nextMusic;
    QToolButton *voice;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(383, 322);
        Widget->setStyleSheet(QString::fromUtf8("QToolButton:hover{\n"
"	background-color: rgb(204, 255, 137);\n"
"border:none;\n"
"}\n"
"QWidget{\n"
"border:none;\n"
"	\n"
"\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(Widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_4 = new QWidget(Widget);
        widget_4->setObjectName("widget_4");
        widget_4->setMaximumSize(QSize(16777215, 400));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget_4);
        listWidget->setObjectName("listWidget");
        listWidget->setMaximumSize(QSize(16777215, 200));

        verticalLayout_2->addWidget(listWidget);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        curLabel = new QLabel(widget_3);
        curLabel->setObjectName("curLabel");
        curLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 22pt \"Microsoft YaHei UI\";\n"
"	\n"
"	color: rgb(34, 85, 31);\n"
"	\n"
"}\n"
""));

        horizontalLayout_2->addWidget(curLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        toalLabel = new QLabel(widget_3);
        toalLabel->setObjectName("toalLabel");
        toalLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 22pt \"Microsoft YaHei UI\";\n"
"	\n"
"	color: rgb(34, 85, 31);\n"
"	\n"
"}\n"
""));

        horizontalLayout_2->addWidget(toalLabel);


        verticalLayout_2->addWidget(widget_3);


        verticalLayout_3->addWidget(widget_4);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMaximumSize(QSize(16777215, 400));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MusicSlider = new QSlider(widget_2);
        MusicSlider->setObjectName("MusicSlider");
        MusicSlider->setMaximumSize(QSize(16777215, 50));
        MusicSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(MusicSlider);

        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(16777215, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ChooseMusic = new QToolButton(widget);
        ChooseMusic->setObjectName("ChooseMusic");
        ChooseMusic->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/C:/Users/asus/Pictures/rc/chat/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChooseMusic->setIcon(icon);
        ChooseMusic->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(ChooseMusic);

        ListMusic = new QToolButton(widget);
        ListMusic->setObjectName("ListMusic");
        ListMusic->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"\n"
"\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("C:/Users/asus/Pictures/rc/list.png"), QSize(), QIcon::Normal, QIcon::Off);
        ListMusic->setIcon(icon1);
        ListMusic->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(ListMusic);

        preMusic = new QToolButton(widget);
        preMusic->setObjectName("preMusic");
        preMusic->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"\n"
"\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("C:/Users/asus/Pictures/rc/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        preMusic->setIcon(icon2);
        preMusic->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(preMusic);

        beginMusic = new QToolButton(widget);
        beginMusic->setObjectName("beginMusic");
        beginMusic->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"\n"
"\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("C:/Users/asus/Pictures/rc/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        beginMusic->setIcon(icon3);
        beginMusic->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(beginMusic);

        nextMusic = new QToolButton(widget);
        nextMusic->setObjectName("nextMusic");
        nextMusic->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"\n"
"\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("C:/Users/asus/Pictures/rc/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextMusic->setIcon(icon4);
        nextMusic->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(nextMusic);

        voice = new QToolButton(widget);
        voice->setObjectName("voice");
        voice->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"\n"
"\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("C:/Users/asus/Pictures/rc/voice.png"), QSize(), QIcon::Normal, QIcon::Off);
        voice->setIcon(icon5);
        voice->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(voice);


        verticalLayout->addWidget(widget);


        verticalLayout_3->addWidget(widget_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        curLabel->setText(QCoreApplication::translate("Widget", "00:00", nullptr));
        toalLabel->setText(QCoreApplication::translate("Widget", "00:00", nullptr));
        ChooseMusic->setText(QCoreApplication::translate("Widget", "...", nullptr));
        ListMusic->setText(QCoreApplication::translate("Widget", "...", nullptr));
        preMusic->setText(QCoreApplication::translate("Widget", "...", nullptr));
        beginMusic->setText(QCoreApplication::translate("Widget", "...", nullptr));
        nextMusic->setText(QCoreApplication::translate("Widget", "...", nullptr));
        voice->setText(QCoreApplication::translate("Widget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

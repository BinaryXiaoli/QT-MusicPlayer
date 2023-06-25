/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QListWidget *listWidget;
    QSlider *playCourseSlider;
    QSlider *verticalSlider;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *curLabel;
    QSpacerItem *HorizonalSpacer;
    QLabel *totalLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(860, 506);
        Widget->setStyleSheet(QString::fromUtf8("QPushButton:hover\n"
"{\n"
"	background-color: rgb(216, 216, 216);\n"
"\n"
"}"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 440, 60, 60));
        pushButton->setMinimumSize(QSize(60, 60));
        pushButton->setMaximumSize(QSize(60, 60));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/document.png);"));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 440, 60, 60));
        pushButton_2->setMinimumSize(QSize(60, 60));
        pushButton_2->setMaximumSize(QSize(60, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/last.png);"));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(390, 440, 60, 60));
        pushButton_3->setMinimumSize(QSize(60, 60));
        pushButton_3->setMaximumSize(QSize(60, 60));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/pause.png);"));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(450, 440, 60, 60));
        pushButton_4->setMinimumSize(QSize(60, 60));
        pushButton_4->setMaximumSize(QSize(60, 60));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/next.png);"));
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(740, 440, 60, 60));
        pushButton_6->setMinimumSize(QSize(60, 60));
        pushButton_6->setMaximumSize(QSize(60, 60));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/download.png);"));
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 241, 351));
        playCourseSlider = new QSlider(Widget);
        playCourseSlider->setObjectName(QString::fromUtf8("playCourseSlider"));
        playCourseSlider->setGeometry(QRect(50, 410, 731, 20));
        playCourseSlider->setStyleSheet(QString::fromUtf8(""));
        playCourseSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(Widget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(830, 360, 20, 101));
        verticalSlider->setOrientation(Qt::Vertical);
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(640, 440, 60, 60));
        pushButton_7->setMinimumSize(QSize(60, 60));
        pushButton_7->setMaximumSize(QSize(60, 60));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/volume.png);"));
        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(130, 460, 36, 36));
        pushButton_8->setMinimumSize(QSize(36, 36));
        pushButton_8->setMaximumSize(QSize(36, 36));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/circle1.png);"));
        pushButton_9 = new QPushButton(Widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(230, 460, 36, 36));
        pushButton_9->setMinimumSize(QSize(36, 36));
        pushButton_9->setMaximumSize(QSize(36, 36));
        pushButton_9->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/random.png);"));
        pushButton_10 = new QPushButton(Widget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(180, 460, 36, 36));
        pushButton_10->setMinimumSize(QSize(36, 36));
        pushButton_10->setMaximumSize(QSize(36, 36));
        pushButton_10->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/circle.png);"));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 380, 801, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        curLabel = new QLabel(widget);
        curLabel->setObjectName(QString::fromUtf8("curLabel"));

        horizontalLayout->addWidget(curLabel);

        HorizonalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(HorizonalSpacer);

        totalLabel = new QLabel(widget);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));

        horizontalLayout->addWidget(totalLabel);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        curLabel->setText(QCoreApplication::translate("Widget", "00:00", nullptr));
        totalLabel->setText(QCoreApplication::translate("Widget", "00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

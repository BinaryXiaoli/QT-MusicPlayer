/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *curLabel;
    QLabel *totalLabel;
    QPushButton *pushButton_5;

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
        pushButton->setGeometry(QRect(760, 460, 36, 36));
        pushButton->setMinimumSize(QSize(36, 6));
        pushButton->setMaximumSize(QSize(36, 36));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/document.png);"));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 440, 60, 60));
        pushButton_2->setMinimumSize(QSize(60, 60));
        pushButton_2->setMaximumSize(QSize(60, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/last.png);"));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 440, 60, 60));
        pushButton_3->setMinimumSize(QSize(60, 60));
        pushButton_3->setMaximumSize(QSize(60, 60));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/pause.png);\n"
"border-image: url(:/assets/bofang3.png);"));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(480, 440, 60, 60));
        pushButton_4->setMinimumSize(QSize(60, 60));
        pushButton_4->setMaximumSize(QSize(60, 60));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/next.png);"));
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(710, 460, 36, 36));
        pushButton_6->setMinimumSize(QSize(36, 36));
        pushButton_6->setMaximumSize(QSize(36, 36));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/download.png);"));
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 221, 401));
        listWidget->setStyleSheet(QString::fromUtf8("listWidget{\n"
"boder:none;\n"
"}"));
        playCourseSlider = new QSlider(Widget);
        playCourseSlider->setObjectName(QString::fromUtf8("playCourseSlider"));
        playCourseSlider->setGeometry(QRect(170, 420, 461, 20));
        playCourseSlider->setStyleSheet(QString::fromUtf8(""));
        playCourseSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(Widget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(830, 360, 20, 101));
        verticalSlider->setOrientation(Qt::Vertical);
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(820, 460, 36, 36));
        pushButton_7->setMinimumSize(QSize(36, 36));
        pushButton_7->setMaximumSize(QSize(36, 36));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/volume.png);"));
        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(650, 460, 36, 36));
        pushButton_8->setMinimumSize(QSize(36, 36));
        pushButton_8->setMaximumSize(QSize(36, 36));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/random.png);\n"
"border-image: url(:/assets/circle1.png);\n"
"border-image: url(:/assets/circle.png);"));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(630, 420, 95, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        curLabel = new QLabel(layoutWidget);
        curLabel->setObjectName(QString::fromUtf8("curLabel"));
        curLabel->setMaximumSize(QSize(60, 60));

        horizontalLayout->addWidget(curLabel);

        totalLabel = new QLabel(layoutWidget);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));
        totalLabel->setMaximumSize(QSize(60, 60));

        horizontalLayout->addWidget(totalLabel);

        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 400, 100, 100));
        pushButton_5->setMinimumSize(QSize(100, 100));
        pushButton_5->setMaximumSize(QSize(100, 100));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/assets/music_icon.png);"));

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
        curLabel->setText(QCoreApplication::translate("Widget", "00:00", nullptr));
        totalLabel->setText(QCoreApplication::translate("Widget", "/00:00", nullptr));
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

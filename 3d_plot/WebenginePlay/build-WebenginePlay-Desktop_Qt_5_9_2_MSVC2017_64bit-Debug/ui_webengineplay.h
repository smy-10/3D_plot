/********************************************************************************
** Form generated from reading UI file 'webengineplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBENGINEPLAY_H
#define UI_WEBENGINEPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "webview.h"

QT_BEGIN_NAMESPACE

class Ui_WebenginePlayClass
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *urledit;
    WebView *webview;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *WebenginePlayClass)
    {
        if (WebenginePlayClass->objectName().isEmpty())
            WebenginePlayClass->setObjectName(QStringLiteral("WebenginePlayClass"));
        WebenginePlayClass->resize(1126, 733);
        WebenginePlayClass->setStyleSheet(QLatin1String("QWidget#WebenginePlayClass{\n"
"	background-color: rgb(255, 121, 12);\n"
"}"));
        verticalLayout = new QVBoxLayout(WebenginePlayClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        urledit = new QLineEdit(WebenginePlayClass);
        urledit->setObjectName(QStringLiteral("urledit"));
        urledit->setMinimumSize(QSize(0, 32));

        verticalLayout->addWidget(urledit);

        webview = new WebView(WebenginePlayClass);
        webview->setObjectName(QStringLiteral("webview"));

        verticalLayout->addWidget(webview);

        widget = new QWidget(WebenginePlayClass);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 32));
        widget->setMaximumSize(QSize(16777215, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(32, 32));
        pushButton->setMaximumSize(QSize(16777215, 32));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(32, 32));
        pushButton_3->setMaximumSize(QSize(16777215, 32));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(32, 32));
        pushButton_4->setMaximumSize(QSize(16777215, 32));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(32, 32));
        pushButton_5->setMaximumSize(QSize(16777215, 32));

        horizontalLayout->addWidget(pushButton_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);


        retranslateUi(WebenginePlayClass);

        QMetaObject::connectSlotsByName(WebenginePlayClass);
    } // setupUi

    void retranslateUi(QDialog *WebenginePlayClass)
    {
        WebenginePlayClass->setWindowTitle(QApplication::translate("WebenginePlayClass", "WebenginePlay", Q_NULLPTR));
        urledit->setText(QApplication::translate("WebenginePlayClass", "https://blog.csdn.net/ly305750665", Q_NULLPTR));
        pushButton->setText(QApplication::translate("WebenginePlayClass", "\351\253\230\344\272\256a\346\240\207\347\255\276", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("WebenginePlayClass", "\346\227\213\350\275\254\345\233\276\347\211\207", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("WebenginePlayClass", "\347\247\273\351\231\244GIF\345\233\276", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("WebenginePlayClass", "\346\233\264\346\224\271\350\203\214\346\231\257\350\211\262", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WebenginePlayClass: public Ui_WebenginePlayClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBENGINEPLAY_H

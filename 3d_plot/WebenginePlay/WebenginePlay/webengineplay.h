/*
作者：雨田哥 https://blog.csdn.net/ly305750665
功能：Webengine-Jequery玩转Html
*/

#ifndef WEBENGINEPLAY_H
#define WEBENGINEPLAY_H

#include <QtWidgets/QDialog>
#include "ui_webengineplay.h"

class WebenginePlay : public QDialog
{
	Q_OBJECT

public:
	WebenginePlay(QWidget *parent = 0);
	~WebenginePlay();

private slots:
	void changeLocation();
	void onHightlightLink();
	void onRotateImages();
	void onRemoveGifImages();
	void onUpdateScrollerStyle();

private:
	Ui::WebenginePlayClass ui;
};

#endif // WEBENGINEPLAY_H

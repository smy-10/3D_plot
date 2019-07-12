#include "webengineplay.h"

WebenginePlay::WebenginePlay(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.urledit, SIGNAL(returnPressed()), SLOT(changeLocation()));
	connect(ui.pushButton, &QPushButton::clicked, this, &WebenginePlay::onHightlightLink);
	connect(ui.pushButton_3, &QPushButton::clicked, this, &WebenginePlay::onRotateImages);
	connect(ui.pushButton_4, &QPushButton::clicked, this, &WebenginePlay::onRemoveGifImages);
	connect(ui.pushButton_5, &QPushButton::clicked, this, &WebenginePlay::onUpdateScrollerStyle);
}

WebenginePlay::~WebenginePlay()
{

}

void WebenginePlay::changeLocation()
{
	QUrl url = QUrl::fromUserInput(ui.urledit->text());
	ui.webview->loadUrl(url);
	ui.webview->setFocus();
}

void WebenginePlay::onHightlightLink()
{
	ui.webview->highlightAllLinks();
}

void WebenginePlay::onRotateImages()
{
	ui.webview->rotateImages();
}

void WebenginePlay::onRemoveGifImages()
{
	ui.webview->removeGifImages();
}

void WebenginePlay::onUpdateScrollerStyle()
{
	ui.webview->updateScrollerStyle();
}
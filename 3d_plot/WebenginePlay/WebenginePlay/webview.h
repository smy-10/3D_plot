#ifndef WEBVIEW_H
#define WEBVIEW_H

#include <QWebEngineView>

class WebView : public QWebEngineView
{
	Q_OBJECT

public:
	WebView(QWidget *parent);
	~WebView();

public:
	void loadUrl(QUrl url);
	void highlightAllLinks();
	void rotateImages();
	void removeGifImages();
	void updateScrollerStyle();

private:
	void initControl();

private slots:
	void adjustTitle();
	void setProgress(int p);
	void finishLoading(bool);

private:
	QString m_jQuery;
	int m_progress;
};

#endif // WEBVIEW_H

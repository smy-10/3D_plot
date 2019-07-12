#include "webview.h"
#include <QtWebEngineWidgets>

WebView::WebView(QWidget *parent)
	: QWebEngineView(parent)
	, m_progress(0)
{
	initControl();
}

WebView::~WebView()
{

}

QString readFiledata(const QString& filepath)
{
	QFile file;
	file.setFileName(filepath);
	file.open(QIODevice::ReadOnly);
	QString data = file.readAll();
	file.close();
	return data;
}

void WebView::initControl()
{
	qputenv("QTWEBENGINE_REMOTE_DEBUGGING", "9223");
	m_jQuery = readFiledata(":/WebenginePlay/Resources/jquery.min.js");
	m_jQuery.append("\nvar qt = { 'jQuery': jQuery.noConflict(true) };");

	connect(this, SIGNAL(titleChanged(QString)), SLOT(adjustTitle()));
	connect(this, SIGNAL(loadProgress(int)), SLOT(setProgress(int)));
	connect(this, SIGNAL(loadFinished(bool)), SLOT(finishLoading(bool)));
}

void WebView::loadUrl(QUrl url)
{
	this->load(url);
}

void WebView::adjustTitle()
{
	if (m_progress <= 0 || m_progress >= 100)
		parentWidget()->setWindowTitle(this->title());
	else
		parentWidget()->setWindowTitle(QString("%1 (%2%)").arg(this->title()).arg(m_progress));
}

void WebView::setProgress(int p)
{
	m_progress = p;
	adjustTitle();
}

void WebView::finishLoading(bool)
{
	m_progress = 100;
	adjustTitle();
	QString code = "qt.jQuery('<link>').attr({ rel: \"stylesheet\",type: \"text/css\",href: \"qrc:/WebenginePlay/Resources/rotate.css\"}).appendTo(\"head\"); undefined";
	m_jQuery.append("\n");
	m_jQuery.append(code);
	page()->runJavaScript(m_jQuery);
}

void WebView::highlightAllLinks()
{
	QString code = "qt.jQuery('a').each( function () { qt.jQuery(this).css('background-color', 'yellow') } ); undefined";
	this->page()->runJavaScript(code);
}

void WebView::rotateImages()
{
	QString code = "qt.jQuery('img').addClass(\"header\");";
	this->page()->runJavaScript(code);
}

void WebView::removeGifImages()
{
	QString code = "qt.jQuery('[src*=gif]').remove()";
	this->page()->runJavaScript(code);
}

void WebView::updateScrollerStyle()
{
	QString code = "qt.jQuery('body').each( function () { qt.jQuery(this).css('background', 'rgba(200,200,200,100)') } ); undefined";
	this->page()->runJavaScript(code);
}
#include "jscontext.h"

JsContext::JsContext(QObject *parent) : QObject(parent)
{

}

void JsContext::sendMsg(QWebEnginePage *page, const QString msg)
{
    page->runJavaScript(QString("recvMessage('%1');").arg(msg));
}

void JsContext::onMsg( QString msg)
{
    emit recvdMsg(msg);
}

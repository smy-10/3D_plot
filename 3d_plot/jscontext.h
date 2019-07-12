#ifndef JSCONTEXT_H
#define JSCONTEXT_H

#include <QObject>
#include <QWebEnginePage>

class JsContext : public QObject
{
    Q_OBJECT
public:
    explicit JsContext(QObject *parent = nullptr);

    void sendMsg(QWebEnginePage* page,const QString msg);

signals:
    void recvdMsg( QString msg);



public slots:
    //接收网页来的信息
    void onMsg( QString msg);
};

#endif // JSCONTEXT_H

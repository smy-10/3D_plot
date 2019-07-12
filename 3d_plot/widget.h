#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QWebEngineView>
#include <QWebChannel>
#include "jscontext.h"
#include <QJsonDocument>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void receFromJs(QString str);

    void initData();
private slots:
    void on_load_btn_clicked();



    void on_init_btn_clicked();

private:
    Ui::Widget *ui;

    QWebEngineView* m_webView;

    JsContext* m_jsObj;

    QWebChannel* m_webChannel;
};

#endif // WIDGET_H

#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QJsonArray>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    m_webView = new QWebEngineView(ui->label);

    m_jsObj = new JsContext(this);

    m_webChannel = new QWebChannel(this);
    m_webChannel->registerObject("context",m_jsObj);
    m_webView->page()->setWebChannel(m_webChannel);

    connect(m_jsObj,&JsContext::recvdMsg,this,&Widget::receFromJs);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::receFromJs(QString str)
{
    qDebug()<<"receive from js:"<<str;
}

void Widget::initData()
{
/*    QJsonArray data;

    QJsonDocument doc;

    for(int i = 0; i< 2;i++)
    {
        data.append(i);
    }

    doc.setArray(data);

    QByteArray byte;
    byte = doc.toJson(QJsonDocument::Compact);
    QString str(byte);

    qDebug()<<str;
*/

    QVector<double> x,y,z;

    x<<-1<<-0.5<<0<<0.5<<1
    <<-1<<-0.5<<0<<0.5<<1
    <<-1<<-0.5<<0<<0.5<<1
    <<-1<<-0.5<<0<<0.5<<1
    <<-1<<-0.5<<0<<0.5<<1;


    y<<-1<<-1<<-1<<-1<<-1
    <<-0.5<<-0.5<<-0.5<<-0.5<<-0.5
    <<0<<0<<0<<0<<0
    <<0.5<<0.5<<0.5<<0.5<<0.5
    <<1<<1<<1<<1<<1;


    z<<0<<0<<0<<0<<0
    <<0<<1<<0<<-1<<0
    <<0<<0<<0<<0<<0
    <<0<<-1<<0<<1<<0
    <<0<<0<<0<<0<<0;



    QString str;


    str.append("[");
    for(int i = 0; i<25;i++)
    {
        QString s =QString("[%1,%2,%3],").arg(x[i]).arg(y[i]).arg(z[i]);
        str+=s;
    }
    str.remove(str.length()-1,1);
    str.append("]");

    qDebug()<<str;




    m_webView->page()->runJavaScript(QString("updateImg('%1')").arg(str));

}

void Widget::on_load_btn_clicked()
{
    m_webView->load(QUrl(QCoreApplication::applicationDirPath()+"//HTML//3Dplot.html"));


}


void Widget::on_init_btn_clicked()
{
    initData();
}

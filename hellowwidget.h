#ifndef HELLOWWIDGET_H
#define HELLOWWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class HellowWidget; }
QT_END_NAMESPACE

class HellowWidget : public QWidget
{
    Q_OBJECT

public:
    HellowWidget(QWidget *parent = nullptr);
    ~HellowWidget();

private:
    Ui::HellowWidget *ui;
};
#endif // HELLOWWIDGET_H

#include "hellowwidget.h"
#include "ui_hellowwidget.h"

HellowWidget::HellowWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HellowWidget)
{
    ui->setupUi(this);
}

HellowWidget::~HellowWidget()
{
    delete ui;
}


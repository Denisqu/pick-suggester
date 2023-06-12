#include "herowidget.h"
#include "ui_herowidget.h"

HeroWidget::HeroWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HeroWidget)
{
    ui->setupUi(this);
}

HeroWidget::~HeroWidget()
{
    delete ui;
}

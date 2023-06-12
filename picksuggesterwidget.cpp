#include "picksuggesterwidget.h"
#include "ui_picksuggesterwidget.h"
#include "herowidget.h"
#include <QDebug>

PickSuggesterWidget::PickSuggesterWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PickSuggesterWidget)
{
    ui->setupUi(this);

    for(int i = 0; i < 5; ++i) {
        auto heroWidget = new HeroWidget();
        ui->horizontalLaoutEnemyHeroes->addWidget(heroWidget);
    }

    for (int i = 0; i < 5; ++i) {
        auto heroWidget = new HeroWidget();
        ui->horizontalLayoutAllyHeroes->addWidget(heroWidget);
    }
}

PickSuggesterWidget::~PickSuggesterWidget()
{
    delete ui;
}

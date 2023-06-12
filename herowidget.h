#ifndef HEROWIDGET_H
#define HEROWIDGET_H

#include <QWidget>

namespace Ui {
class HeroWidget;
}

class HeroWidget : public QWidget
{
    Q_OBJECT

public:
    explicit HeroWidget(QWidget *parent = nullptr);
    ~HeroWidget();

private:
    Ui::HeroWidget *ui;
};

#endif // HEROWIDGET_H

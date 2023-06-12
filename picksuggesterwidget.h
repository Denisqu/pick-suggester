#ifndef PICKSUGGESTERWIDGET_H
#define PICKSUGGESTERWIDGET_H

#include <QWidget>

namespace Ui {
class PickSuggesterWidget;
}

class PickSuggesterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PickSuggesterWidget(QWidget *parent = nullptr);
    ~PickSuggesterWidget();

private:
    Ui::PickSuggesterWidget *ui;
};

#endif // PICKSUGGESTERWIDGET_H

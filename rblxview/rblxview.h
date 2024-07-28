#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_rblxview.h"

class rblxview : public QMainWindow
{
    Q_OBJECT

public:
    rblxview(QWidget *parent = nullptr);
    ~rblxview();

private:
    Ui::rblxviewClass ui;
};

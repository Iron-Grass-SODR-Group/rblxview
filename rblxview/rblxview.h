#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMessageBox>
#include "ui_rblxview.h"

class rblxview : public QMainWindow
{
    Q_OBJECT

public:
    rblxview(QWidget *parent = nullptr);
    ~rblxview();

public slots:
    void onAboutbox();

private:
    Ui::rblxviewClass ui;
};

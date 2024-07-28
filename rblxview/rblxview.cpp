#include "rblxview.h"

/*
    rblxview (styled lowercase) is a project the allows you to free-cam around RBXLX files.
    Copyright (C) <2024>  <Zander>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
rblxview::rblxview(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    QApplication::setStyle("windowsvista");
    connect(ui.actionAbout, SIGNAL(triggered()), this, SLOT(onAboutbox()));
}

rblxview::~rblxview()
{}

void rblxview::onAboutbox() {
    int hey = QMessageBox::information(this, "About", "By Iron Grass SODR Group.\nLicense: GPL-v3.0", QMessageBox::Ok);
}
// albert - a simple application launcher for linux
// Copyright (C) 2014-2016 Manuel Schneider
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <QStandardPaths>
#include "configwidget.h"

/** ***************************************************************************/
Applications::ConfigWidget::ConfigWidget(QWidget *parent) : QWidget(parent) {
    ui.setupUi(this);

    // Show the app dirs in the label
    QStringList standardPaths = QStandardPaths::standardLocations(QStandardPaths::ApplicationsLocation);
    ui.label->setText(ui.label->text().replace("__XDG_DATA_DIRS__", standardPaths.join(", ")));
}

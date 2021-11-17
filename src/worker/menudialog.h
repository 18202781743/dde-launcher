/*
 * Copyright (C) 2020 ~ 2021 Deepin Technology Co., Ltd.
 *
 * Author:     songwentao <songwentao@uniontech.com>
 *
 * Maintainer: songwentao <songwentao@uniontech.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * This program aims to cache the the icon and name of apps to the hash table,
 * which can decrease the repeated resource consumption of loading the app info in the
 * running time.
 */

#ifndef MYMENU_H
#define MYMENU_H

#include <QMenu>
#include <QWidget>

class Menu : public QMenu
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);

protected:
    bool eventFilter(QObject *watched, QEvent *event);

private:
    void moveDown(int size = 0);
    void moveUp(int size = 0);
    void openItem();
};

#endif //MYMENU_H

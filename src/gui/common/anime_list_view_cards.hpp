/**
 * Taiga
 * Copyright (C) 2010-2024, Eren Okka
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include <QListView>

namespace gui {

class AnimeListModel;
class AnimeListProxyModel;
class ListViewBase;

class ListViewCards final : public QListView {
  Q_OBJECT
  Q_DISABLE_COPY_MOVE(ListViewCards)

public:
  ListViewCards(QWidget* parent, AnimeListModel* model, AnimeListProxyModel* proxyModel);
  ~ListViewCards() = default;

  ListViewBase* baseView() {
    return m_base;
  }

protected:
  void keyPressEvent(QKeyEvent* event) override;
  void paintEvent(QPaintEvent* event) override;
  void wheelEvent(QWheelEvent* event) override;

private:
  ListViewBase* m_base = nullptr;
};

}  // namespace gui

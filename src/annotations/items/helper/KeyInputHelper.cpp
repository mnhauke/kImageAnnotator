/*
 * Copyright (C) 2018 Damir Porobic <damir.porobic@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "KeyInputHelper.h"

void KeyInputHelper::handleKeyPress(QKeyEvent *event)
{
    switch (event->key()) {
        case Qt::Key_Backspace:
            emit remove(TextPositions::Previous);
            break;
        case Qt::Key_Return:
        case Qt::Key_Enter:
            emit insert(QStringLiteral("\n"));
            break;
        case Qt::Key_Delete:
            emit remove(TextPositions::Next);
            break;
        case Qt::Key_Escape:
            emit escape();
            return;
        case Qt::Key_Left:
            emit move(TextPositions::Previous);
            break;
        case Qt::Key_Right:
            emit move(TextPositions::Next);
            break;
        case Qt::Key_Up:
            emit move(TextPositions::Up);
            break;
        case Qt::Key_Down:
            emit move(TextPositions::Down);
            break;
        case Qt::Key_Paste:
            emit paste();
            break;
        default:
            if (event->matches(QKeySequence::Paste)) {
                emit paste();
                break;
            }
            if (event->text().isEmpty() || event->modifiers() == Qt::ControlModifier) {
                return;
            }
            emit insert(event->text());
    }
}
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

#ifndef KIMAGEANNOTATOR_ITEMHELPERTEST
#define KIMAGEANNOTATOR_ITEMHELPERTEST

#include <QtTest>

#include "../../../src/annotations/items/AnnotationLine.h"
#include "../../../src/common/helper/ItemHelper.h"

class ItemHelperTest : public QObject
{
Q_OBJECT

private slots:
    void TestZValueGreaterThen_Should_ReturnTrue_When_OtherItemHasLowerZValue();
    void TestZValueGreaterThen_Should_ReturnFalse_When_OtherItemHasHigherZValue();
    void TestZValueGreaterThen_Should_ReturnFalse_When_OtherItemHasEqualZValue();
    void TestSortItemsByZValueDesc_Should_SortItemsByZValueInDescendingOrder();
};

#endif //KIMAGEANNOTATOR_ITEMHELPERTEST
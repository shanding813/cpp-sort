/*
 * Copyright (C) 2015 Morwenn
 *
 * array_sort is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * array_sort is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program. If not,
 * see <http://www.gnu.org/licenses/>.
 */
#ifndef CPPSORT_DETAIL_SORT13_H_
#define CPPSORT_DETAIL_SORT13_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <utility>

namespace cppsort
{
namespace detail
{
    template<>
    struct sorter_n<13u>
    {
        template<typename RandomAccessIterator, typename Compare>
        static auto do_it(RandomAccessIterator begin, Compare compare)
            -> void
        {
            using std::swap;

            if (compare(begin[7u], begin[1u])) {
                swap(begin[1u], begin[7u]);
            }
            if (compare(begin[11u], begin[9u])) {
                swap(begin[9u], begin[11u]);
            }
            if (compare(begin[4u], begin[3u])) {
                swap(begin[3u], begin[4u]);
            }
            if (compare(begin[8u], begin[5u])) {
                swap(begin[5u], begin[8u]);
            }
            if (compare(begin[12u], begin[0u])) {
                swap(begin[0u], begin[12u]);
            }
            if (compare(begin[6u], begin[2u])) {
                swap(begin[2u], begin[6u]);
            }
            if (compare(begin[1u], begin[0u])) {
                swap(begin[0u], begin[1u]);
            }
            if (compare(begin[3u], begin[2u])) {
                swap(begin[2u], begin[3u]);
            }
            if (compare(begin[6u], begin[4u])) {
                swap(begin[4u], begin[6u]);
            }
            if (compare(begin[11u], begin[8u])) {
                swap(begin[8u], begin[11u]);
            }
            if (compare(begin[12u], begin[7u])) {
                swap(begin[7u], begin[12u]);
            }
            if (compare(begin[9u], begin[5u])) {
                swap(begin[5u], begin[9u]);
            }
            if (compare(begin[2u], begin[0u])) {
                swap(begin[0u], begin[2u]);
            }
            if (compare(begin[7u], begin[3u])) {
                swap(begin[3u], begin[7u]);
            }
            if (compare(begin[11u], begin[10u])) {
                swap(begin[10u], begin[11u]);
            }
            if (compare(begin[4u], begin[1u])) {
                swap(begin[1u], begin[4u]);
            }
            if (compare(begin[12u], begin[6u])) {
                swap(begin[6u], begin[12u]);
            }
            if (compare(begin[8u], begin[7u])) {
                swap(begin[7u], begin[8u]);
            }
            if (compare(begin[12u], begin[11u])) {
                swap(begin[11u], begin[12u]);
            }
            if (compare(begin[9u], begin[4u])) {
                swap(begin[4u], begin[9u]);
            }
            if (compare(begin[10u], begin[6u])) {
                swap(begin[6u], begin[10u]);
            }
            if (compare(begin[4u], begin[3u])) {
                swap(begin[3u], begin[4u]);
            }
            if (compare(begin[6u], begin[5u])) {
                swap(begin[5u], begin[6u]);
            }
            if (compare(begin[9u], begin[8u])) {
                swap(begin[8u], begin[9u]);
            }
            if (compare(begin[11u], begin[10u])) {
                swap(begin[10u], begin[11u]);
            }
            if (compare(begin[7u], begin[1u])) {
                swap(begin[1u], begin[7u]);
            }
            if (compare(begin[6u], begin[2u])) {
                swap(begin[2u], begin[6u]);
            }
            if (compare(begin[11u], begin[9u])) {
                swap(begin[9u], begin[11u]);
            }
            if (compare(begin[3u], begin[1u])) {
                swap(begin[1u], begin[3u]);
            }
            if (compare(begin[7u], begin[4u])) {
                swap(begin[4u], begin[7u]);
            }
            if (compare(begin[10u], begin[8u])) {
                swap(begin[8u], begin[10u]);
            }
            if (compare(begin[5u], begin[0u])) {
                swap(begin[0u], begin[5u]);
            }
            if (compare(begin[5u], begin[2u])) {
                swap(begin[2u], begin[5u]);
            }
            if (compare(begin[8u], begin[6u])) {
                swap(begin[6u], begin[8u]);
            }
            if (compare(begin[10u], begin[9u])) {
                swap(begin[9u], begin[10u]);
            }
            if (compare(begin[2u], begin[1u])) {
                swap(begin[1u], begin[2u]);
            }
            if (compare(begin[5u], begin[3u])) {
                swap(begin[3u], begin[5u]);
            }
            if (compare(begin[8u], begin[7u])) {
                swap(begin[7u], begin[8u]);
            }
            if (compare(begin[6u], begin[4u])) {
                swap(begin[4u], begin[6u]);
            }
            if (compare(begin[3u], begin[2u])) {
                swap(begin[2u], begin[3u]);
            }
            if (compare(begin[5u], begin[4u])) {
                swap(begin[4u], begin[5u]);
            }
            if (compare(begin[7u], begin[6u])) {
                swap(begin[6u], begin[7u]);
            }
            if (compare(begin[9u], begin[8u])) {
                swap(begin[8u], begin[9u]);
            }
            if (compare(begin[4u], begin[3u])) {
                swap(begin[3u], begin[4u]);
            }
            if (compare(begin[6u], begin[5u])) {
                swap(begin[5u], begin[6u]);
            }
        }
    };
}}

#endif // CPPSORT_DETAIL_SORT13_H_

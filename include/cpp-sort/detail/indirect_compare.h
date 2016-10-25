/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2015-2016 Morwenn
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef CPPSORT_DETAIL_INDIRECT_COMPARE_H_
#define CPPSORT_DETAIL_INDIRECT_COMPARE_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <tuple>
#include <utility>
#include <cpp-sort/utility/as_function.h>

namespace cppsort
{
namespace detail
{
    template<typename Compare, typename Projection>
    class indirect_compare
    {
        private:

            // Pack compare and projection for EBCO
            std::tuple<Compare, Projection> data;

        public:

            indirect_compare(Compare compare, Projection projection):
                data(std::move(compare), std::move(projection))
            {}

            template<typename Iterator>
            auto operator()(Iterator lhs, Iterator rhs)
                -> bool
            {
                auto&& proj = utility::as_function(std::get<1>(data));
                return std::get<0>(data)(proj(*lhs), proj(*rhs));
            }
    };
}}

#endif // CPPSORT_DETAIL_INDIRECT_COMPARE_H_

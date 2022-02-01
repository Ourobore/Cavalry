/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range_end.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:18:27 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:27:01 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_vector.hpp"

int main()
{
    {
        NAMESPACE::vector<TYPE> v(3, TYPE(42));

        // At the end (with 100 times (x3 numbers inserted) more inserts than insert_range_begin)
        for (size_t i = 0; i < 2000000; ++i)
            v.insert(v.end(), v.begin(), v.begin() + 3);
    }

    // Same setup as insert_range_begin
    // {
    //     NAMESPACE::vector<TYPE> v(3, TYPE(42));

    //     // At the beginning
    //     for (size_t i = 0; i < 20000; ++i)
    //         v.insert(v.end(), v.begin(), v.begin() + 3);
    // }
}
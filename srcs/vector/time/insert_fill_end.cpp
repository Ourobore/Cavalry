/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_fill_end.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:44:17 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 10:33:09 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    {
        NAMESPACE::vector<TYPE> v;

        // At the end (with 10 times (x1000 numbers inserted) more inserts than insert_fill_begin)
        for (size_t i = 0; i < 10000; ++i)
            v.insert(v.end(), 1000, TYPE(42));
    }

    // Same setup as insert_fill_begin (too fast to compute time ratio)
    // {
    //     NAMESPACE::vector<TYPE> v;

    //     // At the beginning
    //     for (size_t i = 0; i < 1000; ++i)
    //         v.insert(v.end(), 1000, TYPE(42));
    // }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_position_end.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:15:29 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:26:55 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_vector.hpp"

int main()
{
    {
        NAMESPACE::vector<TYPE> v;

        // At the end (with 100 times more inserts than insert_position_begin)
        for (size_t i = 0; i < 2000000; ++i)
            v.insert(v.end(), TYPE(42));
    }

    // Same setup as insert_position_begin (too fast to compute time ratio)
    // {
    //     NAMESPACE::vector<TYPE> v;

    //     // At the beginning
    //     for (size_t i = 0; i < 20000; ++i)
    //         v.insert(v.end(), TYPE(42));
    // }
}
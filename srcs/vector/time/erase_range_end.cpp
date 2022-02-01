/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range_end.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:52:41 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:26:46 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_vector.hpp"

int main()
{
    {
        NAMESPACE::vector<TYPE> v(20000000, TYPE(42));

        // At the end (with 1000 times more delete than erase_range_begin)
        while (v.size() != 0)
            v.erase(v.end() - 2, v.end());
    }

    // Same setup as erase_range_begin (too fast to compute time ratio)
    // {
    //     NAMESPACE::vector<TYPE> v(20000, TYPE(42));

    //     // At the beginning
    //     while (v.size() != 0)
    //         v.erase(v.end() - 2, v.end());
    // }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_position_end.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:36:43 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 10:29:51 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    {
        NAMESPACE::vector<TYPE> v(20000000, TYPE(42));

        // At the end (with 1000 times more delete than erase_position_begin)
        while (v.size() != 0)
            v.erase(v.end() - 1);
    }

    // Same setup as erase_position_begin (too fast to compute time ratio)
    // {
    //     NAMESPACE::vector<TYPE> v(20000, TYPE(42));

    //     while (v.size() != 0)
    //         v.erase(v.end() - 1);
    // }
}
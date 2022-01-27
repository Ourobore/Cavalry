/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range_end.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:52:41 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 09:55:20 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v(20000000, TYPE(42));

    // At the end (with 1000 times more delete than erase_range_begin)
    while (v.size() != 0)
        v.erase(v.end() - 2, v.end());
}
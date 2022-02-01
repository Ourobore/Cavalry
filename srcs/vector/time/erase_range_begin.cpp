/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range_begin.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:51:41 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:26:41 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_vector.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v(20000, TYPE(42));

    // At the beginning
    while (v.size() != 0)
        v.erase(v.begin(), v.begin() + 2);
}
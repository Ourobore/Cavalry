/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_const_vec.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:40:22 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:26:27 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_vector.hpp"

int main()
{
    const NAMESPACE::vector<TYPE> v(10, TYPE(42));

    // Can't modify const instance
    v.push_back(TYPE(21));

    (void)v;
}
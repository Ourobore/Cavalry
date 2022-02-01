/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_fill_begin.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:46:36 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:26:48 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_vector.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v;

    // At the beginning
    for (size_t i = 0; i < 1000; ++i)
        v.insert(v.begin(), 1000, TYPE(42));
}
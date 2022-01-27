/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range_begin.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:16:09 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 09:26:00 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v(3, TYPE(42));

    // At the beginning
    for (size_t i = 0; i < 20000; ++i)
        v.insert(v.begin(), v.begin(), v.begin() + 3);
}
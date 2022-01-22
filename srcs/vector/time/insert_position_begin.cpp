/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_position_begin.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:31:17 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/22 17:47:32 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v;

    // At the beginning
    for (size_t i = 0; i < 20000; ++i)
        v.insert(v.begin(), TYPE(42));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_const_map.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:40:22 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:15:48 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_map.hpp"

int main()
{
    const NAMESPACE::map<int, TYPE> m;

    // Can't modify const instance
    m.insert(NAMESPACE::make_pair(21, TYPE(21)));

    (void)m;
}
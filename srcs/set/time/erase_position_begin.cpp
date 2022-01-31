/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_position_begin.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:21:59 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 12:22:09 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // Erase all map elements, position by position (from begin())

    NAMESPACE::map< int, int > m;
    for (int i = 0; i < 100000; ++i)
        m.insert(NAMESPACE::make_pair(i, i));

    while (m.size() != 0)
        m.erase(m.begin());
}
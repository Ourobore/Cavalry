/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_key_begin.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:24:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 12:25:07 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // Erase all map elements, key by key (from begin())

    NAMESPACE::map< int, int > m;
    for (int i = 0; i < 100000; ++i)
        m.insert(NAMESPACE::make_pair(i, i));

    int key = 0;
    while (m.size() != 0)
    {
        m.erase(key);
        ++key;
    }
}
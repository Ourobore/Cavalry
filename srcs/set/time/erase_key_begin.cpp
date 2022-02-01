/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_key_begin.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:24:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:21:12 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_set.hpp"

int main()
{
    // Erase all set elements, key by key (from begin())

    NAMESPACE::set<int> s;
    for (int i = 0; i < 100000; ++i)
        s.insert(i);

    int key = 0;
    while (s.size() != 0)
    {
        s.erase(key);
        ++key;
    }
}
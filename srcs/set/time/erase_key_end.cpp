/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_key_end.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:23:41 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 20:34:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // Erase all set elements, key by key (from end())

    NAMESPACE::set<int > s;
    for (int i = 0; i < 100000; ++i)
        s.insert(i);

    int key = 100000 - 1;
    while (s.size() != 0)
    {
        s.erase(key);
        --key;
    }
}
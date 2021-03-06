/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_position_begin.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:21:59 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:21:17 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_set.hpp"

int main()
{
    // Erase all set elements, position by position (from begin())

    NAMESPACE::set<int> s;
    for (int i = 0; i < 100000; ++i)
        s.insert(i);

    while (s.size() != 0)
        s.erase(s.begin());
}
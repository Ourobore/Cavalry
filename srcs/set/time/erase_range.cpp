/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:25:35 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:21:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_set.hpp"

int main()
{
    // Erase all map elements

    NAMESPACE::set<int> s;
    for (int i = 0; i < 100000; ++i)
        s.insert(i);

    s.erase(s.begin(), s.end());
}
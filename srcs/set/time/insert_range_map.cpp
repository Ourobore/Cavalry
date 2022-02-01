/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range_map.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:17:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:21:33 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_set.hpp"

int main()
{
    // Inserting a range of map iterator

    NAMESPACE::set<int> s;
    for (int i = 0; i < 100000; ++i)
        s.insert(i);

    NAMESPACE::set<int > n;
    n.insert(s.begin(), s.end());
}
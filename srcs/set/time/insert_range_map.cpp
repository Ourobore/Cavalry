/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range_map.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:17:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 12:18:47 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // Inserting a range of map iterator

    NAMESPACE::map< int, int > m;
    for (int i = 0; i < 100000; ++i)
        m.insert(NAMESPACE::make_pair(i, i));

    NAMESPACE::map< int, int > n;
    n.insert(m.begin(), m.end());
}
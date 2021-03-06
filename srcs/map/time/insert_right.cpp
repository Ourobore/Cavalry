/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_right.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:35:01 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:16:28 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_map.hpp"

int main()
{
    // Inserting value_type that is greater every time
    NAMESPACE::map< int, int > m;
    for (int i = 0; i < 100000; ++i)
        m.insert(NAMESPACE::make_pair(i, i));
}
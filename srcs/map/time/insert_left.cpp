/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_left.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:36:27 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:16:14 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_map.hpp"

int main()
{
    // Inserting value_type that is smaller every time
    NAMESPACE::map< int, int > m;
    for (int i = 100000 - 1; i >= 0; --i)
        m.insert(NAMESPACE::make_pair(i, i));
}
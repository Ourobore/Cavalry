/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_const_pair.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:49:44 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:15:50 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_map.hpp"

int main()
{
    NAMESPACE::map<int, TYPE>           m;
    NAMESPACE::map<int, TYPE>::iterator it = m.begin();

    // Can't assign, key is const
    *it = NAMESPACE::make_pair(21, TYPE(21));
}
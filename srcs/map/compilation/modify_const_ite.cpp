/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_const_ite.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:42:19 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:15:46 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_map.hpp"

int main()
{
    NAMESPACE::map<int, TYPE>                 m;
    NAMESPACE::map<int, TYPE>::iterator       it = m.begin();
    NAMESPACE::map<int, TYPE>::const_iterator cit = m.end();

    // A non const iterator can be transform into a const one
    cit = it;
    // But reverse is not possible, would drop const qualifier
    it = cit;

    (void)m;
    (void)it;
    (void)cit;
}
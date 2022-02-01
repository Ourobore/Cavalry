/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_modify_const_ite.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:42:19 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:20:53 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int main()
{
    NAMESPACE::set<TYPE>                 s;
    NAMESPACE::set<TYPE>::iterator       it = s.begin();
    NAMESPACE::set<TYPE>::const_iterator cit = s.end();

    // A non const iterator can be transform into a const one
    cit = it;
    // Works with STL set ? See 'Notes' section in https://en.cppreference.com/w/cpp/container/set
    // But reverse is not possible, would drop const qualifier
    it = cit;

    (void)s;
    (void)it;
    (void)cit;
}
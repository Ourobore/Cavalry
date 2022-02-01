/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_const_ite.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:42:19 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:26:25 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_vector.hpp"

int main()
{
    NAMESPACE::vector<TYPE>                 v(10, TYPE(42));
    NAMESPACE::vector<TYPE>::iterator       it = v.begin();
    NAMESPACE::vector<TYPE>::const_iterator cit = v.end();

    // A non const iterator can be transform into a const one
    cit = it;
    // But reverse is not possible, would drop const qualifier
    it = cit;

    (void)v;
    (void)it;
    (void)cit;
}
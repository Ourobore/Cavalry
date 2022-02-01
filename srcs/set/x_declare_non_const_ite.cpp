/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_declare_non_const_ite.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:45:33 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:20:50 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int main()
{
    const NAMESPACE::set<TYPE> s;

    // Works with STL set ? See 'Notes' section in https://en.cppreference.com/w/cpp/container/set
    // Can't declare a non const iterator on a const instance
    NAMESPACE::set<TYPE>::iterator it = s.begin();

    (void)s;
    (void)it;
}
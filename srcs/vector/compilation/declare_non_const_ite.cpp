/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declare_non_const_ite.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:45:33 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/22 15:48:40 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    const NAMESPACE::vector<TYPE> v(10, TYPE(42));

    // Can't declare a non const iterator on a const instance
    NAMESPACE::vector<TYPE>::iterator it = v.begin();

    (void)v;
    (void)it;
}
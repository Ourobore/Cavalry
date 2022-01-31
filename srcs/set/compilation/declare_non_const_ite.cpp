/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declare_non_const_ite.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:45:33 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/29 18:01:37 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    const NAMESPACE::map<int, TYPE> m;

    // Can't declare a non const iterator on a const instance
    NAMESPACE::map<int, TYPE>::iterator it = m.begin();

    (void)m;
    (void)it;
}
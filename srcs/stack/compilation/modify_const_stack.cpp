/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_const_stack.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:40:22 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 16:00:42 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    const NAMESPACE::vector<TYPE>                          v(10, TYPE(42));
    const NAMESPACE::stack<TYPE, NAMESPACE::vector<TYPE> > s(v);

    // Can't modify const instance
    s.push(TYPE(21));

    (void)v;
}
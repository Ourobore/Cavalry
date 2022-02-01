/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declare_const_type.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:51:15 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:24:10 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_stack.hpp"

int main()
{
    // Can't declare instance on const type
    NAMESPACE::stack<const TYPE> s;
}
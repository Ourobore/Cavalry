/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:21:42 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 15:24:20 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::stack<TYPE> s;

    std::cout << "--- Push ---" << std::endl;

    // Yeah... Not much to test if just pushing
    for (size_t i = 40; i < 120; ++i)
    {
        s.push(TYPE(i));
        ft::printStack(s);
    }
}
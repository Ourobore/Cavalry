/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:45:55 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:23:22 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_stack.hpp"

int main()
{
    NAMESPACE::stack<TYPE> s;

    std::cout << "--- Size ---" << std::endl;
    ft::printStack(s);

    std::cout << std::endl;

    std::cout << "Adding elements:" << std::endl;
    for (size_t i = 40; i < 60; ++i)
    {
        s.push(TYPE(i));
        ft::printStack(s);
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "Removing elements:" << std::endl;
    while (s.size())
    {
        s.pop();
        ft::printStack(s);
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // Undefined behaviour in std::vector
    // std::cout << "Using pop() if stack is empty:" << std::endl;
    // s.pop();
    // ft::printStack(s);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:15:55 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:23:12 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_stack.hpp"

int main()
{
    NAMESPACE::stack<TYPE> s;
    for (size_t i = 40; i < 50; ++i)
        s.push(TYPE(i));

    std::cout << "--- Empty ---" << std::endl;
    ft::printStack(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std ::cout << "When the stack IS NOT empty:" << std::endl;
    ft::printStack(s);
    if (s.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The stack IS NOT empty" << std::endl;
    else
        std::cout << "  -> Yep! The stack IS NOT empty!" << std::endl;

    std::cout << std::endl;
    std::cout << "(Little verification, the stack should not be changed in any way)" << std::endl;
    ft::printStack(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std ::cout << "When the stack IS empty:" << std::endl;
    while (s.size())
        s.pop();
    ft::printStack(s);
    if (!s.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The stack IS empty" << std::endl;
    else
        std::cout << "  -> Yep! The stack IS empty!" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;
}
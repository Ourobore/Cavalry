/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:01:42 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 15:53:48 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::stack<TYPE> s;
    for (size_t i = 40; i < 50; ++i)
        s.push(TYPE(i));

    std::cout << "--- Top ---" << std::endl;
    ft::printStack(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Basic (just top() call): " << s.top() << std::endl;
    ft::printStack(s);

    std::cout << std::endl;

    // ##################################################################################

    TYPE old_top = s.top();
    s.top() = TYPE(84);
    std::cout << "Modyfing top() element: " << s.top() << std::endl;
    ft::printStack(s);
    s.top() = old_top;

    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Creating inverted stack (top() / pop() copy):" << std::endl;
    NAMESPACE::stack<TYPE> copy(s);
    NAMESPACE::stack<TYPE> inverted_stack;

    while (s.size())
    {
        inverted_stack.push(s.top());
        s.pop();
    }

    std::cout << " -> Copy of Original stack" << std::endl;
    ft::printStack(copy);
    std::cout << std::endl;
    std::cout << " -> Inverted stack" << std::endl;
    ft::printStack(inverted_stack);
    std::cout << std::endl;
    std::cout << " -> Real Original stack" << std::endl;
    ft::printStack(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // // Undefined behaviour in std::vector
    // std::cout << "Using top() if stack is empty: " << std::endl;
    // s.top() = TYPE(42);
    // ft::printStack(s);
}
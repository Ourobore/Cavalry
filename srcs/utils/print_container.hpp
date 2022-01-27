/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_container.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:30:59 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 11:35:45 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_CONTAINER_HPP
#define PRINT_CONTAINER_HPP

#include <iostream>

#include "print_separator.hpp"

namespace ft
{

template <class Container>
void printVector(Container& c, bool capacity = true, bool content = true)
{
    ft::printSeparator('=', 1, 45);

    std::cout << "Size: [" << c.size() << "]";
    if (capacity)
        std::cout << "   Capacity: [" << c.capacity() << "]";
    std::cout << std::endl;

    if (content)
    {
        std::cout << "[ ";
        for (typename Container::size_type i = 0; i < c.size(); ++i)
        {
            // std::cout << "[" << i << "]: ";
            std::cout << c[i];
            if (i < c.size() - 1)
                std::cout << ", ";
        }
        std::cout << " ]" << std::endl;
    }
    else
        std::cout << "(Content printing omitted)" << std::endl;

    ft::printSeparator('=', 1, 45);
}

template <class Container>
void printStack(Container c, bool content = true)
{
    ft::printSeparator('=', 1, 45);

    std::cout << "Size: [" << c.size() << "]";
    std::cout << std::endl;

    if (content)
    {
        std::cout << "[ ";
        while (c.size() != 0)
        {
            std::cout << c.top();
            if (c.size() > 0)
                std::cout << ", ";
        }
        std::cout << " ]" << std::endl;
    }
    else
        std::cout << "(Content printing omitted)" << std::endl;

    ft::printSeparator('=', 1, 45);
}

} // namespace ft

#endif
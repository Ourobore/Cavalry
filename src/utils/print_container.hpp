/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_container.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:30:59 by lchapren          #+#    #+#             */
/*   Updated: 2021/12/09 14:41:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_CONTAINER_HPP
#define PRINT_CONTAINER_HPP

#include <iostream>

#include "print_separator.hpp"

namespace ft
{

template <class Container>
void printContainer(Container c, bool capacity = true, bool content = true)
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

} // namespace ft

#endif
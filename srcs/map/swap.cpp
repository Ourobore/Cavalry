/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:08:00 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/28 09:53:03 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

#ifndef CAPACITY
#define CAPACITY true
#endif

int main()
{
    NAMESPACE::map<int, TYPE> m1;
    NAMESPACE::map<int, TYPE> m2;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
    {
        m1.insert(NAMESPACE::make_pair(i, TYPE(i * 10)));
        m2.insert(NAMESPACE::make_pair(i, TYPE(i + 10)));
    }

    std::cout << "--- Swap() ---" << std::endl;
    std::cout << "m1:" << std::endl;
    ft::printMap(m1);
    std::cout << "m2:" << std::endl;
    ft::printMap(m2);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "### Same size: ###" << std::endl;
    std::cout << "Non member overload:" << std::endl;
    NAMESPACE::swap(m1, m2);
    std::cout << "m1:" << std::endl;
    ft::printMap(m1);
    std::cout << "m2:" << std::endl;
    ft::printMap(m2);

    std::cout << std::endl;

    std::cout << "Member overload (from m1):" << std::endl;
    m1.swap(m2);
    std::cout << "m1:" << std::endl;
    ft::printMap(m1);
    std::cout << "m2:" << std::endl;
    ft::printMap(m2);

    std::cout << std::endl;

    std::cout << "Member overload (from m2):" << std::endl;
    m2.swap(m1);
    std::cout << "m1:" << std::endl;
    ft::printMap(m1);
    std::cout << "m2:" << std::endl;
    ft::printMap(m2);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "### Different size: ###" << std::endl;
    m1.insert(m1.end(), NAMESPACE::make_pair(80, TYPE(80 * 10)));
    m1.insert(m1.end(), NAMESPACE::make_pair(81, TYPE(81 * 10)));
    m1.insert(m1.end(), NAMESPACE::make_pair(82, TYPE(82 * 10)));
    std::cout << "Non member overload:" << std::endl;
    NAMESPACE::swap(m1, m2);
    std::cout << "m1:" << std::endl;
    ft::printMap(m1);
    std::cout << "m2:" << std::endl;
    ft::printMap(m2);

    std::cout << std::endl;

    std::cout << "Member overload (from m1):" << std::endl;
    m1.swap(m2);
    std::cout << "m1:" << std::endl;
    ft::printMap(m1);
    std::cout << "m2:" << std::endl;
    ft::printMap(m2);

    std::cout << std::endl;

    std::cout << "Member overload (from m2):" << std::endl;
    m2.swap(m1);
    std::cout << "m1:" << std::endl;
    ft::printMap(m1);
    std::cout << "m2:" << std::endl;
    ft::printMap(m2);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:08:00 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 19:22:24 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

#ifndef CAPACITY
#define CAPACITY true
#endif

int main()
{
    NAMESPACE::set<TYPE>  s1;
    NAMESPACE::set< TYPE> s2;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
    {
        s1.insert(TYPE(i));
        s2.insert(TYPE(i));
    }

    std::cout << "--- Swap() ---" << std::endl;
    std::cout << "s1:" << std::endl;
    ft::printSet(s1);
    std::cout << "s2:" << std::endl;
    ft::printSet(s2);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "### Same size: ###" << std::endl;
    std::cout << "Non member overload:" << std::endl;
    NAMESPACE::swap(s1, s2);
    std::cout << "s1:" << std::endl;
    ft::printSet(s1);
    std::cout << "s2:" << std::endl;
    ft::printSet(s2);

    std::cout << std::endl;

    std::cout << "Member overload (from s1):" << std::endl;
    s1.swap(s2);
    std::cout << "s1:" << std::endl;
    ft::printSet(s1);
    std::cout << "s2:" << std::endl;
    ft::printSet(s2);

    std::cout << std::endl;

    std::cout << "Member overload (from s2):" << std::endl;
    s2.swap(s1);
    std::cout << "s1:" << std::endl;
    ft::printSet(s1);
    std::cout << "s2:" << std::endl;
    ft::printSet(s2);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "### Different size: ###" << std::endl;
    s1.insert(s1.end(), TYPE(80));
    s1.insert(s1.end(), TYPE(81));
    s1.insert(s1.end(), TYPE(82));
    std::cout << "Non member overload:" << std::endl;
    NAMESPACE::swap(s1, s2);
    std::cout << "s1:" << std::endl;
    ft::printSet(s1);
    std::cout << "s2:" << std::endl;
    ft::printSet(s2);

    std::cout << std::endl;

    std::cout << "Member overload (from s1):" << std::endl;
    s1.swap(s2);
    std::cout << "s1:" << std::endl;
    ft::printSet(s1);
    std::cout << "s2:" << std::endl;
    ft::printSet(s2);

    std::cout << std::endl;

    std::cout << "Member overload (from s2):" << std::endl;
    s2.swap(s1);
    std::cout << "s1:" << std::endl;
    ft::printSet(s1);
    std::cout << "s2:" << std::endl;
    ft::printSet(s2);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;
}
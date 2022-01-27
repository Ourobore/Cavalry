/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:08:00 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 11:47:09 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

#ifndef CAPACITY
#define CAPACITY true
#endif

int main()
{
    NAMESPACE::vector<TYPE> v1;
    NAMESPACE::vector<TYPE> v2;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
    {
        v1.push_back(TYPE(i));
        v2.push_back(TYPE(i + size));
    }

    std::cout << "--- Swap() ---" << std::endl;
    std::cout << "v1:" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "v2:" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "### Same size, same capacity: ###" << std::endl;
    std::cout << "Non member overload:" << std::endl;
    NAMESPACE::swap(v1, v2);
    std::cout << "v1:" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "v2:" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;

    std::cout << "Member overload (from v1):" << std::endl;
    v1.swap(v2);
    std::cout << "v1:" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "v2:" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;

    std::cout << "Member overload (from v2):" << std::endl;
    v2.swap(v1);
    std::cout << "v1:" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "v2:" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "### Different size, same capacity: ###" << std::endl;
    v1.push_back(v1.back() + 1);
    v1.push_back(v1.back() + 1);
    v1.push_back(v1.back() + 1);
    std::cout << "Non member overload:" << std::endl;
    NAMESPACE::swap(v1, v2);
    std::cout << "v1:" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "v2:" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;

    std::cout << "Member overload (from v1):" << std::endl;
    v1.swap(v2);
    std::cout << "v1:" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "v2:" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;

    std::cout << "Member overload (from v2):" << std::endl;
    v2.swap(v1);
    std::cout << "v1:" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "v2:" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "### Same size, different capacity: ###" << std::endl;
    v1.push_back(v1.back() + 1);
    v1.push_back(v1.back() + 1);
    v1.push_back(v1.back() + 1);
    v1.reserve(50);
    std::cout << "Non member overload:" << std::endl;
    NAMESPACE::swap(v1, v2);
    std::cout << "v1:" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "v2:" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;

    std::cout << "Member overload (from v1):" << std::endl;
    v1.swap(v2);
    std::cout << "v1:" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "v2:" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;

    std::cout << "Member overload (from v2):" << std::endl;
    v2.swap(v1);
    std::cout << "v1:" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "v2:" << std::endl;
    ft::printVector(v2, CAPACITY);
}
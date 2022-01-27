/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 12:56:11 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 11:37:43 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

#include <list>

int main()
{
    NAMESPACE::vector<TYPE> v;
    std::list<TYPE>         l;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
    {
        v.push_back(TYPE(i));
        l.push_back(TYPE(i + size));
    }
    // List contains 40, 41, 42, ..., 48, 49

    std::cout << "--- Assign ---" << std::endl;
    std::cout << "Vector:" << std::endl;
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Assign itself:" << std::endl;
    v.assign(v.begin(), v.end());
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Assign itself, but not totally:" << std::endl;
    v.assign(v.begin(), v.end() - 1);
    ft::printVector(v, CAPACITY);

    v.assign(v.begin() + 1, v.end());
    ft::printVector(v, CAPACITY);

    v.assign(v.begin() + 1, v.end() - 1);
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Assign NOT itself:" << std::endl;
    v.assign(l.begin(), l.end());
    ft::printVector(v, CAPACITY);

    // Smaller size
    for (size_t i = 0; i < 2; ++i)
        l.pop_back();
    v.assign(l.begin(), l.end());
    ft::printVector(v, CAPACITY);

    // Bigger size
    for (size_t i = 0; i < 4; ++i)
        l.push_back(l.back() + 1);
    v.assign(l.begin(), l.end());
    ft::printVector(v, CAPACITY);

    // Bigger size, bigger capacity
    for (size_t i = 0; i < 6; ++i)
        l.push_back(l.back() + 1);
    v.assign(l.begin(), l.end());
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Assign empty range:" << std::endl;
    v.assign(l.begin(), l.end());
    v.assign(v.begin(), v.begin());
    ft::printVector(v, CAPACITY);

    v.assign(l.begin(), l.end());
    v.assign(v.end(), v.end());
    ft::printVector(v, CAPACITY);

    v.assign(l.begin(), l.end());
    v.assign(v.begin() + 3, v.begin() + 3);
    ft::printVector(v, CAPACITY);

    v.assign(l.begin(), l.end());
    v.assign(v.end() - 3, v.end() - 3);
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Assign fill (empty size):" << std::endl;
    v.assign(0, TYPE(42));
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Assign fill (NOT empty size):" << std::endl;
    v.assign(21, TYPE(42));
    ft::printVector(v, CAPACITY);
}
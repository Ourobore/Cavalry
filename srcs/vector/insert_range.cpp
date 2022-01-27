/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 11:44:01 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

#include <list>

#ifndef CAPACITY
#define CAPACITY true
#endif

int main()
{
    NAMESPACE::vector<TYPE> v;
    for (size_t i = 30; i != 40; ++i)
        v.push_back(TYPE(i));
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;

    NAMESPACE::vector<TYPE>::iterator it = v.begin() + (v.size() / 2);
    std::cout << "--- Insert: range ---" << std::endl;
    // ##################################################################################
    std::cout << "Empty range:" << std::endl;
    v.insert(v.begin(), v.begin(), v.begin());
    v.insert(v.end(), v.begin(), v.begin());
    v.insert(v.end(), v.end(), v.end());
    v.insert(v.begin(), v.end(), v.end());
    v.insert(it, v.begin(), v.begin());
    v.insert(it, v.end(), v.end());
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Insert at begin():" << std::endl;
    v.insert(v.begin(), v.begin(), v.begin() + 3);
    ft::printVector(v, CAPACITY);

    v.insert(v.begin(), v.begin() + 7, v.begin() + 10);
    ft::printVector(v, CAPACITY);

    v.insert(v.begin(), v.end() - 3, v.end());
    ft::printVector(v, CAPACITY);

    v.insert(v.begin(), v.end() - 13, v.end() - 9);
    ft::printVector(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(v.begin(), it, it + 3);
    ft::printVector(v, CAPACITY);

    v.insert(v.begin(), it - 2, it);
    ft::printVector(v, CAPACITY);

    v.insert(v.begin(), it - 2, it + 3);
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Insert at end():" << std::endl;
    v.insert(v.end(), v.begin(), v.begin() + 3);
    ft::printVector(v, CAPACITY);

    v.insert(v.end(), v.begin() + 7, v.begin() + 10);
    ft::printVector(v, CAPACITY);

    v.insert(v.end(), v.end() - 3, v.end());
    ft::printVector(v, CAPACITY);

    v.insert(v.end(), v.end() - 13, v.end() - 9);
    ft::printVector(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(v.end(), it, it + 3);
    ft::printVector(v, CAPACITY);

    v.insert(v.end(), it - 2, it);
    ft::printVector(v, CAPACITY);

    v.insert(v.end(), it - 2, it + 3);
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    it = v.begin() + (v.size() / 2);
    // ##################################################################################
    std::cout << "Insert at position():" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it, v.begin(), v.begin() + 3);
    ft::printVector(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(it, v.begin() + 7, v.begin() + 10);
    ft::printVector(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(it, v.end() - 3, v.end());
    ft::printVector(v, CAPACITY);

    v.insert(it, v.end() - 13, v.end() - 9);
    ft::printVector(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(it, it, it + 3);
    ft::printVector(v, CAPACITY);

    v.insert(it, it - 2, it);
    ft::printVector(v, CAPACITY);

    // v.insert(it, it - 2, it + 3);
    // ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    it = v.begin() + (v.size() / 2);
    // ##################################################################################
    std::cout << "Insert at position + n" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it + 10, v.begin(), v.begin() + 5);
    ft::printVector(v, CAPACITY);

    v.insert(it + 3, v.begin() + 7, v.begin() + 10);
    ft::printVector(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(it + 20, v.end() - 3, v.end());
    ft::printVector(v, CAPACITY);

    v.insert(it + 4, v.end() - 13, v.end() - 9);
    ft::printVector(v, CAPACITY);

    v.insert(it + 7, it - 5, it);
    ft::printVector(v, CAPACITY);

    v.insert(it + 11, it - 4, it + 6);
    ft::printVector(v, CAPACITY);

    // v.insert(it + 1, it, it + 3);
    // ft::printVector(v, CAPACITY);

    // v.insert(it - 1, it - 5, it);
    // ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    it = v.begin() + (v.size() / 2);
    // ##################################################################################
    std::cout << "Insert at position - n" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it - 10, v.begin(), v.begin() + 5);
    ft::printVector(v, CAPACITY);

    v.insert(it - 3, v.begin() + 7, v.begin() + 10);
    ft::printVector(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(it - 20, v.end() - 3, v.end());
    ft::printVector(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(it - 17, v.end() - 13, v.end() - 9);
    ft::printVector(v, CAPACITY);

    v.insert(it - 7, it - 5, it);
    ft::printVector(v, CAPACITY);

    v.insert(it - 11, it - 4, it + 6);
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Insert full range" << std::endl;
    v.insert(v.begin(), v.begin(), v.end());
    ft::printVector(v, CAPACITY);

    v.insert(v.end(), v.begin(), v.end());
    ft::printVector(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(it, v.begin(), v.end());
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Insert InputIterator" << std::endl;
    std::list<TYPE> l;
    for (size_t i = 30; i != 40; ++i)
        l.push_back(TYPE(i));

    v.insert(v.begin(), l.begin(), l.end());
    ft::printVector(v, CAPACITY);

    v.insert(v.end(), l.begin(), l.end());
    ft::printVector(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(it, l.begin(), l.end());
    ft::printVector(v, CAPACITY);
}

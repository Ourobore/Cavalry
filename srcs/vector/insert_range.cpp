/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:38:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/19 17:52:54 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

#ifndef CAPACITY
#define CAPACITY true
#endif

int main()
{
    NAMESPACE::vector<TYPE> v;
    for (size_t i = 30; i != 40; ++i)
        v.push_back(TYPE(i));
    ft::printContainer(v, CAPACITY);

    std::cout << std::endl;

    NAMESPACE::vector<TYPE>::iterator it = v.begin() + (v.size() / 2);
    std::cout << "--- Insert: range ---" << std::endl;
    std::cout << "Empty range:" << std::endl;
    v.insert(v.begin(), v.begin(), v.begin());
    v.insert(v.end(), v.begin(), v.begin());
    v.insert(v.end(), v.end(), v.end());
    v.insert(v.begin(), v.end(), v.end());
    v.insert(it, v.begin(), v.begin());
    v.insert(it, v.end(), v.end());
    ft::printContainer(v, CAPACITY);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Insert at begin():" << std::endl;
    v.insert(v.begin(), v.begin(), v.begin() + 3);
    ft::printContainer(v, CAPACITY);

    v.insert(v.begin(), v.begin() + 7, v.begin() + 10);
    ft::printContainer(v, CAPACITY);

    v.insert(v.begin(), v.end() - 3, v.end());
    ft::printContainer(v, CAPACITY);

    v.insert(v.begin(), v.end() - 13, v.end() - 9);
    ft::printContainer(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(v.begin(), it, it + 3);
    ft::printContainer(v, CAPACITY);

    v.insert(v.begin(), it - 2, it);
    ft::printContainer(v, CAPACITY);

    v.insert(v.begin(), it - 2, it + 3);
    ft::printContainer(v, CAPACITY);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Insert at end():" << std::endl;
    v.insert(v.end(), v.begin(), v.begin() + 3);
    ft::printContainer(v, CAPACITY);

    v.insert(v.end(), v.begin() + 7, v.begin() + 10);
    ft::printContainer(v, CAPACITY);

    v.insert(v.end(), v.end() - 3, v.end());
    ft::printContainer(v, CAPACITY);

    v.insert(v.end(), v.end() - 13, v.end() - 9);
    ft::printContainer(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(v.end(), it, it + 3);
    ft::printContainer(v, CAPACITY);

    v.insert(v.end(), it - 2, it);
    ft::printContainer(v, CAPACITY);

    v.insert(v.end(), it - 2, it + 3);
    ft::printContainer(v, CAPACITY);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Insert at position():" << std::endl;
    it = v.begin() + (v.size() / 2);
    v.insert(it, v.begin(), v.begin() + 3);
    ft::printContainer(v, CAPACITY);

    v.insert(it, v.begin() + 7, v.begin() + 10);
    ft::printContainer(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(it, v.end() - 3, v.end());
    ft::printContainer(v, CAPACITY);

    v.insert(it, v.end() - 13, v.end() - 9);
    ft::printContainer(v, CAPACITY);

    it = v.begin() + (v.size() / 2);
    v.insert(it, it, it + 3);
    ft::printContainer(v, CAPACITY);

    v.insert(it, it - 2, it);
    ft::printContainer(v, CAPACITY);

    v.insert(it, it - 2, it + 3);
    ft::printContainer(v, CAPACITY);

    // it = v.begin() + (v.size() / 2);
    // std::cout << "Insert at position" << std::endl;
    // std::cout << "Position it = " << *it << std::endl;
    // v.insert(it, v.begin(), v.begin() + 5);
    // v.insert(it, v.begin() + 7, v.begin() + 15);
    // v.insert(it, v.end() - 3, v.end());
    // v.insert(it, v.end() - 13, v.end() - 9);
    // v.insert(it, it, it + 3);
    // // v.insert(it, it - 5, it);
    // // v.insert(it, it - 4, it + 6);
    // ft::printContainer(v, false);

    // std::cout << std::endl;

    // it = v.begin() + (v.size() / 2);
    // std::cout << "Insert at position + n" << std::endl;
    // std::cout << "Position it = " << *it << std::endl;
    // v.insert(it + 10, v.begin(), v.begin() + 5);
    // v.insert(it + 3, v.begin() + 7, v.begin() + 15);
    // v.insert(it + 35, v.end() - 3, v.end());
    // v.insert(it + 23, v.end() - 13, v.end() - 9);
    // // v.insert(it + 1, it, it + 3);
    // // v.insert(it - 1, it - 5, it);
    // // v.insert(it + 11, it - 4, it + 6);
    // ft::printContainer(v, false);
}

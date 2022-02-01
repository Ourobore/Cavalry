/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:18:35 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:25:31 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

int main()
{

    NAMESPACE::vector<TYPE> v;

    size_t first_elem = 30;
    size_t size = 40;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        v.push_back(TYPE(i));

    NAMESPACE::vector<TYPE> copy(v);

    std::cout << "--- Erase ---" << std::endl;
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "At begin():" << std::endl;
    v.erase(v.begin());
    ft::printVector(v, CAPACITY);

    v.erase(v.begin(), v.begin() + 4);
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "At end():" << std::endl;
    // v.erase(v.end()); // STL segfault on this one, which seems normal. Do your vector segfault?
    // ft::printVector(v, CAPACITY);

    v.erase(v.end() - 1);
    ft::printVector(v, CAPACITY);

    v.erase(v.end() - 9, v.end());
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "At position:" << std::endl;
    NAMESPACE::vector<TYPE>::iterator it = v.begin() + (v.size() / 2);
    std::cout << "Position: " << *it << std::endl;
    v.erase(it);
    ft::printVector(v, CAPACITY);

    v.erase(it);
    ft::printVector(v, CAPACITY);

    v.erase(it, it + 2);
    ft::printVector(v, CAPACITY);

    v.erase(it + 1, it + 3);
    ft::printVector(v, CAPACITY);

    v.erase(it - 3, it);
    ft::printVector(v, CAPACITY);

    v.erase(it - 2, it + 3);
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Empty range:" << std::endl;
    v.erase(v.begin(), v.begin());
    ft::printVector(v, CAPACITY);

    v.erase(v.end(), v.end());
    ft::printVector(v, CAPACITY);

    v.erase(v.begin() + 3, v.begin() + 3);
    ft::printVector(v, CAPACITY);

    v.erase(v.end() + 1000, v.end() + 1000);
    ft::printVector(v, CAPACITY);

    v.erase(it, it);
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Full range:" << std::endl;
    v.erase(v.begin(), v.end());
    ft::printVector(v, CAPACITY);

    v.erase(v.begin(), v.end());
    ft::printVector(v, CAPACITY);
}
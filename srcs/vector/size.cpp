/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:46:52 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 18:46:52 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // ##################################################################################
    std::cout << "=== +1 size (push_back) ===" << std::endl;
    NAMESPACE::vector<TYPE> v;

    ft::printVector(v, CAPACITY);
    std::cout << std::endl;
    std::cout << "max_size(): " << v.max_size() << std::endl; // Can comment if error in this test is just max_size and you want all green ;)
    v.push_back(TYPE(1));
    v.push_back(TYPE(2));

    ft::printVector(v, CAPACITY);
    std::cout << std::endl;

    for (size_t i = 0; i < 21; ++i)
        v.push_back(TYPE(i));

    ft::printVector(v, CAPACITY);
    std::cout << std::endl;

    int val = 21;
    while (v.size() != 424242)
    {
        v.push_back(TYPE(val));
        ++val;
    }

    std::cout << "Size: " << v.size() << std::endl;
    ft::printVector(v, CAPACITY, false);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "=== -1 size (push_back) ===" << std::endl;
    ft::printVector(v, CAPACITY, false);
    std::cout << std::endl;

    for (size_t i = 0; i < 21; ++i)
        v.pop_back();
    ft::printVector(v, CAPACITY, false);
    std::cout << std::endl;

    for (size_t i = 0; i < 100000; ++i)
        v.pop_back();
    ft::printVector(v, CAPACITY, false);
    std::cout << std::endl;

    while (v.size() != 20000)
        v.pop_back();
    ft::printVector(v, CAPACITY, false);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "=== resize() ===" << std::endl;
    std::cout << "--- Resize same size ---" << std::endl;
    v.resize(v.size());
    ft::printVector(v, CAPACITY, false);
    std::cout << std::endl;

    std::cout << "--- Resize smaller size ---" << std::endl;
    v.resize(100);
    ft::printVector(v, CAPACITY);
    std::cout << std::endl;

    std::cout << "--- Resize bigger size (no val) ---" << std::endl;
    v.resize(500);
    ft::printVector(v, CAPACITY);
    std::cout << std::endl;

    std::cout << "--- Resize bigger size (val) ---" << std::endl;
    v.resize(1000, 42);
    ft::printVector(v, CAPACITY);
    std::cout << std::endl;

    std::cout << "--- Resize bigger size (val) ---" << std::endl;
    v.resize(500000);
    ft::printVector(v, CAPACITY, false);
}
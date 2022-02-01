/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relational.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:31:34 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 21:45:32 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

int main()
{
    std::cout << "--- Relational ---" << std::endl;
    NAMESPACE::vector<TYPE> v1;
    for (size_t i = 40; i < 60; ++i)
        v1.push_back(TYPE(i));

    NAMESPACE::vector<TYPE> v2;
    for (size_t i = 60 - 1; i >= 40; --i)
        v2.push_back(TYPE(i));

    NAMESPACE::vector<TYPE> v3(20, TYPE(42));
    NAMESPACE::vector<TYPE> v4(v3);

    std::cout << std::endl;

    std::cout << "v1 IS less than v2:" << std::endl;
    std::cout << "  -> v1" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "  -> v2" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;

    std::cout << "v1 == v2: " << (v1 == v2) << std::endl;
    std::cout << "v1 != v2: " << (v1 != v2) << std::endl;
    std::cout << "v1 < v2: " << (v1 < v2) << std::endl;
    std::cout << "v1 > v2: " << (v1 > v2) << std::endl;
    std::cout << "v1 <= v2: " << (v1 <= v2) << std::endl;
    std::cout << "v1 >= v2: " << (v1 >= v2) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "v2 IS more than v1:" << std::endl;
    std::cout << "  -> v1" << std::endl;
    ft::printVector(v1, CAPACITY);
    std::cout << "  -> v2" << std::endl;
    ft::printVector(v2, CAPACITY);

    std::cout << std::endl;

    std::cout << "v2 == v1: " << (v2 == v1) << std::endl;
    std::cout << "v2 != v1: " << (v2 != v1) << std::endl;
    std::cout << "v2 < v1: " << (v2 < v1) << std::endl;
    std::cout << "v2 > v1: " << (v2 > v1) << std::endl;
    std::cout << "v2 <= v1: " << (v2 <= v1) << std::endl;
    std::cout << "v2 >= v1: " << (v2 >= v1) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "v3 IS equal to v4:" << std::endl;
    std::cout << "  -> v3" << std::endl;
    ft::printVector(v3, CAPACITY);
    std::cout << "  -> v4" << std::endl;
    ft::printVector(v4, CAPACITY);

    std::cout << std::endl;

    std::cout << "v3 == v1: " << (v3 == v4) << std::endl;
    std::cout << "v3 != v1: " << (v3 != v4) << std::endl;
    std::cout << "v3 < v1: " << (v3 < v4) << std::endl;
    std::cout << "v3 > v1: " << (v3 > v4) << std::endl;
    std::cout << "v3 <= v1: " << (v3 <= v4) << std::endl;
    std::cout << "v3 >= v1: " << (v3 >= v4) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    v3.back() = TYPE(90);
    v4.back() = TYPE(100);
    std::cout << "v3 IS ALMOST equal to v4 (last elem not equal):" << std::endl;
    std::cout << "  -> v3" << std::endl;
    ft::printVector(v3, CAPACITY);
    std::cout << "  -> v4" << std::endl;
    ft::printVector(v4, CAPACITY);

    std::cout << std::endl;

    std::cout << "v3 == v1: " << (v3 == v4) << std::endl;
    std::cout << "v3 != v1: " << (v3 != v4) << std::endl;
    std::cout << "v3 < v1: " << (v3 < v4) << std::endl;
    std::cout << "v3 > v1: " << (v3 > v4) << std::endl;
    std::cout << "v3 <= v1: " << (v3 <= v4) << std::endl;
    std::cout << "v3 >= v1: " << (v3 >= v4) << std::endl;
}
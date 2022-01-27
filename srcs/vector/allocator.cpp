/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:53:55 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 11:37:12 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

#include <deque>
#include <list>

int main()
{
    NAMESPACE::vector<TYPE> v;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        v.push_back(TYPE(i));

    std::cout << "--- Allocator ---" << std::endl;
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "get_allocator():" << std::endl;
    NAMESPACE::vector<TYPE>::allocator_type allocator;
    allocator = v.get_allocator();
    std::cout << "It compiled so you are good^^ (for now hehe)" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "max_size():" << std::endl;

    std::cout << "Comparing max_size() from vector and max_size() from allocator" << std::endl;
    if (v.max_size() == allocator.max_size())
        std::cout << "  -> Should be good if they are the same (they are). Can't compare values between FT and STL because it can change" << std::endl;
    else
        std::cout << "  -> Hum, they should be the same I think" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Allocate a vector with another allocator than the default one:" << std::endl;

    NAMESPACE::vector<TYPE, NAMESPACE::vector<TYPE>::allocator_type > v1;
    v1.push_back(TYPE(42));
    std::cout << "v1: " << std::endl;
    ft::printVector(v, CAPACITY);
    NAMESPACE::vector<TYPE, std::list<TYPE>::allocator_type > v2;
    v2.push_back(TYPE(42));
    std::cout << "v2: " << std::endl;
    ft::printVector(v, CAPACITY);
    NAMESPACE::vector<TYPE, std::deque<Foo>::allocator_type > v3;
    v3.push_back(TYPE(42));
    std::cout << "v3: " << std::endl;
    ft::printVector(v, CAPACITY);
    std::cout << "  -> It seems to be good. The STL seems to not really care of the type of allocator passed" << std::endl;
}
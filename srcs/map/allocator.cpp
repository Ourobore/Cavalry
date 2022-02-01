/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:53:55 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:13:13 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

#include <deque>
#include <list>

int main()
{
    NAMESPACE::map<int, TYPE> m;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        m.insert(NAMESPACE::make_pair(i - 30, TYPE(i)));

    std::cout << "--- Allocator ---" << std::endl;
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "get_allocator():" << std::endl;
    NAMESPACE::map<int, TYPE>::allocator_type allocator;
    allocator = m.get_allocator();
    std::cout << "It compiled so you are good^^ (for now hehe)" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "max_size():" << std::endl;

    m.max_size();
    // std::cout << "Comparing max_size() from map and max_size() from allocator" << std::endl;
    // if (m.max_size() == allocator.max_size())
    //     std::cout << "  -> Should be good if they are the same (they are). Can't compare values between FT and STL because it can change" << std::endl;
    // else
    //     std::cout << "  -> Hum, they should be the same I think (but I am not sure... Hey, we are talking about max_size here^^)" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // Next test depends how you typedef-ed your map.
    // If you used Allocator::value_type (for value_type) for genericity, map will not work with another type of allocator
    // Is that OK? Not mine to judge
    // ##################################################################################
    std::cout << "Allocate a map with another allocator than the default one:" << std::endl;

    NAMESPACE::map<int, TYPE, std::less<int>, NAMESPACE::map<int, TYPE>::allocator_type > m1;
    m1.insert(NAMESPACE::make_pair(42, TYPE(42)));
    std::cout << "m1: " << std::endl;
    ft::printMap(m1);
    NAMESPACE::map<int, TYPE, std::less<int>, std::list<TYPE>::allocator_type > m2;
    m2.insert(NAMESPACE::make_pair(42, TYPE(42)));
    std::cout << "m2: " << std::endl;
    ft::printMap(m2);
    NAMESPACE::map<int, TYPE, std::less<int>, std::deque<Foo>::allocator_type > m3;
    m3.insert(NAMESPACE::make_pair(42, TYPE(42)));
    std::cout << "m3: " << std::endl;
    ft::printMap(m3);
    std::cout << "  -> It seems to be good. The STL seems to not really care of the type of allocator passed" << std::endl;
}
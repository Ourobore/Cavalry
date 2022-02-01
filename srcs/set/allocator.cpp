/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:53:55 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:18:25 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

#include <deque>
#include <list>

int main()
{
    NAMESPACE::set<TYPE> s;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        s.insert(TYPE(i));

    std::cout << "--- Allocator ---" << std::endl;
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "get_allocator():" << std::endl;
    NAMESPACE::set<TYPE>::allocator_type allocator;
    allocator = s.get_allocator();
    std::cout << "It compiled so you are good^^ (for now hehe)" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "max_size():" << std::endl;

    s.max_size();
    // std::cout << "Comparing max_size() from set and max_size() from allocator" << std::endl;
    // if (s.max_size() == allocator.max_size())
    //     std::cout << "  -> Should be good if they are the same (they are). Can't compare values between FT and STL because it can change" << std::endl;
    // else
    //     std::cout << "  -> Hum, they should be the same I think (but I am not sure... Hey, we are talking about max_size here^^)" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // Next test depends how you typedef-ed your set.
    // If you used Allocator::value_type (for value_type) for genericity, set will not work with another type of allocator
    // Is that OK? Not mine to judge
    // ##################################################################################
    // std::cout << "Allocate a set with another allocator than the default one:" << std::endl;

    // NAMESPACE::set<TYPE, std::less<int>, NAMESPACE::set<TYPE>::allocator_type > s1;
    // s1.insert(TYPE(42));
    // std::cout << "s1: " << std::endl;
    // ft::printSet(s1);
    // NAMESPACE::set<TYPE, std::less<int>, std::list<TYPE>::allocator_type > s2;
    // s2.insert(TYPE(42));
    // std::cout << "s2: " << std::endl;
    // ft::printSet(s2);
    // NAMESPACE::set<TYPE, std::less<int>, std::deque<Foo>::allocator_type > s3;
    // s3.insert(TYPE(42));
    // std::cout << "s3: " << std::endl;
    // ft::printSet(s3);
    // std::cout << "  -> It seems to be good. The STL seems to not really care of the type of allocator passed" << std::endl;
}
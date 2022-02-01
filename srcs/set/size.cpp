/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:54:04 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:20:38 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int main()
{
    // ##################################################################################
    std::cout << "=== +1 size (insert) ===" << std::endl;
    NAMESPACE::set<TYPE> s;

    ft::printSet(s);
    std::cout << std::endl;
    // std::cout << "max_size(): " << s.max_size() << std::endl; // Can comment if error in this test is just max_size and you want all green ;)

    s.insert(TYPE(-1));
    s.insert(TYPE(-2));
    ft::printSet(s);

    std::cout << std::endl;

    for (size_t i = 0; i < 21; ++i)
        s.insert(TYPE(i));

    ft::printSet(s);
    std::cout << std::endl;

    int val = 21;
    while (s.size() != 15000)
    {
        s.insert(TYPE(val));
        ++val;
    }

    std::cout << "Size: " << s.size() << std::endl;
    ft::printSet(s, false);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "=== -1 size (erase) ===" << std::endl;
    ft::printSet(s, false);
    std::cout << std::endl;

    for (size_t i = 0; i < 21; ++i)
        s.erase(--s.end());
    ft::printSet(s, false);
    std::cout << std::endl;

    for (size_t i = 0; i < 10000; ++i)
        s.erase(--s.end());
    ft::printSet(s, false);
    std::cout << std::endl;

    while (s.size() != 2000)
        s.erase(--s.end());
    ft::printSet(s, false);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;
}
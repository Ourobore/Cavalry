/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:54:04 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/29 16:21:22 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // ##################################################################################
    std::cout << "=== +1 size (insert) ===" << std::endl;
    NAMESPACE::map<int, TYPE> m;

    ft::printMap(m);
    std::cout << std::endl;
    // std::cout << "max_size(): " << m.max_size() << std::endl; // Can comment if error in this test is just max_size and you want all green ;)

    m.insert(NAMESPACE::make_pair(-1, TYPE(-1)));
    m.insert(NAMESPACE::make_pair(-1, TYPE(-2)));
    ft::printMap(m);

    std::cout << std::endl;

    for (size_t i = 0; i < 21; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i)));

    ft::printMap(m);
    std::cout << std::endl;

    int val = 21;
    while (m.size() != 15000)
    {
        m.insert(NAMESPACE::make_pair(val, TYPE(val)));
        ++val;
    }

    std::cout << "Size: " << m.size() << std::endl;
    ft::printMap(m, false);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "=== -1 size (erase) ===" << std::endl;
    ft::printMap(m, false);
    std::cout << std::endl;

    for (size_t i = 0; i < 21; ++i)
        m.erase(--m.end());
    ft::printMap(m, false);
    std::cout << std::endl;

    for (size_t i = 0; i < 10000; ++i)
        m.erase(--m.end());
    ft::printMap(m, false);
    std::cout << std::endl;

    while (m.size() != 2000)
        m.erase(--m.end());
    ft::printMap(m, false);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;
}
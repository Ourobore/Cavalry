/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_iterator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:06:15 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:18:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int main()
{
    NAMESPACE::set<TYPE> s;
    for (size_t i = 40; i < 110; ++i)
        s.insert(TYPE(i));

    NAMESPACE::set<TYPE>::iterator it;
    std::cout << "--- Erase: iterator ---" << std::endl;
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "At begin():" << std::endl;
    s.erase(s.begin());
    ft::printSet(s);
    s.erase(s.begin());
    ft::printSet(s);
    s.erase(s.begin());
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "At --end():" << std::endl;
    s.erase(--s.end());
    ft::printSet(s);
    s.erase(--s.end());
    ft::printSet(s);
    s.erase(--s.end());
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "At position:" << std::endl;
    it = s.begin();
    for (size_t i = 0; i < s.size() / 2; ++i)
        ++it;
    std::cout << "Position: " << *it << std::endl;
    s.erase(it);
    ft::printSet(s);

    std::cout << std::endl;

    it = s.begin();
    for (size_t i = 0; i < s.size() / 2; ++i)
        ++it;
    std::cout << "Position: " << *it << std::endl;
    s.erase(it);
    ft::printSet(s);

    std::cout << std::endl;

    it = s.begin();
    for (size_t i = 0; i < s.size() / 2; ++i)
        ++it;
    std::cout << "Position: " << *++(++(++it)) << std::endl;
    s.erase(it);
    ft::printSet(s);

    std::cout << std::endl;

    it = s.begin();
    for (size_t i = 0; i < s.size() / 2; ++i)
        ++it;
    std::cout << "Position: " << *--(--(--(--it))) << std::endl;
    s.erase(it);
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Erase all:" << std::endl;

    while (s.begin() != s.end())
    {
        s.erase(--s.end());
        ft::printSet(s);
    }
}
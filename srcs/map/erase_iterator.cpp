/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_iterator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:06:15 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:12:52 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

int main()
{
    NAMESPACE::map<int, TYPE> m;
    for (size_t i = 40; i < 110; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i + 10)));

    NAMESPACE::map<int, TYPE>::iterator it;
    std::cout << "--- Erase: iterator ---" << std::endl;
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "At begin():" << std::endl;
    m.erase(m.begin());
    ft::printMap(m);
    m.erase(m.begin());
    ft::printMap(m);
    m.erase(m.begin());
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "At --end():" << std::endl;
    m.erase(--m.end());
    ft::printMap(m);
    m.erase(--m.end());
    ft::printMap(m);
    m.erase(--m.end());
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "At position:" << std::endl;
    it = m.begin();
    for (size_t i = 0; i < m.size() / 2; ++i)
        ++it;
    std::cout << "Position: " << ft::outputPair(*it) << std::endl;
    m.erase(it);
    ft::printMap(m);

    std::cout << std::endl;

    it = m.begin();
    for (size_t i = 0; i < m.size() / 2; ++i)
        ++it;
    std::cout << "Position: " << ft::outputPair(*it) << std::endl;
    m.erase(it);
    ft::printMap(m);

    std::cout << std::endl;

    it = m.begin();
    for (size_t i = 0; i < m.size() / 2; ++i)
        ++it;
    std::cout << "Position: " << ft::outputPair(*++(++(++it))) << std::endl;
    m.erase(it);
    ft::printMap(m);

    std::cout << std::endl;

    it = m.begin();
    for (size_t i = 0; i < m.size() / 2; ++i)
        ++it;
    std::cout << "Position: " << ft::outputPair(*--(--(--(--it)))) << std::endl;
    m.erase(it);
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Erase all:" << std::endl;

    while (m.begin() != m.end())
    {
        m.erase(--m.end());
        ft::printMap(m);
    }
}
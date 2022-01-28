/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:31:09 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/28 14:45:49 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::map<int, TYPE> m;
    for (size_t i = 40; i < 110; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i + 10)));

    std::cout << "--- Erase: range ---" << std::endl;
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "From begin():" << std::endl;
    m.erase(m.begin(), ++(++(++m.begin())));
    ft::printMap(m);
    m.erase(m.begin(), ++(++m.begin()));
    ft::printMap(m);
    m.erase(m.begin(), ++(++(++(++m.begin()))));
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "From end():" << std::endl;
    m.erase(--(--(--m.end())), m.end());
    ft::printMap(m);
    m.erase(--(--m.end())), m.end();
    ft::printMap(m);
    m.erase(--(--(--(--m.end())), m.end()));
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "From position:" << std::endl;
    NAMESPACE::map<int, TYPE>::iterator it1 = m.begin();
    for (size_t i = 0; i < m.size() / 3; ++i)
        ++it1;
    NAMESPACE::map<int, TYPE>::iterator it2 = m.end();
    for (size_t i = 0; i < m.size() / 3; ++i)
        --it2;

    std::cout << " -> from begin() to it1" << std::endl;
    m.erase(m.begin(), it1);
    ft::printMap(m);

    std::cout << " -> from it1 to it2" << std::endl;
    m.erase(it1, it2);
    ft::printMap(m);

    std::cout << " -> from it2 to end()" << std::endl;
    m.erase(it2, m.end());
    ft::printMap(m);
}
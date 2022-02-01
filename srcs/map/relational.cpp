/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relational.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:31:34 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:13:55 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

int main()
{
    std::cout << "--- Relational ---" << std::endl;
    NAMESPACE::map<int, TYPE> m1;
    for (size_t i = 40; i < 60; ++i)
        m1.insert(NAMESPACE::make_pair(i, TYPE(i)));

    NAMESPACE::map<int, TYPE> m2;
    for (size_t i = 60 - 1; i >= 40; --i)
        m2.insert(NAMESPACE::make_pair(i, TYPE(i)));

    NAMESPACE::map<int, TYPE> m3;
    for (size_t i = 0; i < 20; ++i)
        m3.insert(NAMESPACE::make_pair(i, TYPE(42)));

    NAMESPACE::map<int, TYPE> m4(m3);

    std::cout << std::endl;

    std::cout << "m1 IS less than m2:" << std::endl;
    std::cout << "  -> m1" << std::endl;
    ft::printMap(m1);
    std::cout << "  -> m2" << std::endl;
    ft::printMap(m2);

    std::cout << std::endl;

    std::cout << "m1 == m2: " << (m1 == m2) << std::endl;
    std::cout << "m1 != m2: " << (m1 != m2) << std::endl;
    std::cout << "m1 < m2: " << (m1 < m2) << std::endl;
    std::cout << "m1 > m2: " << (m1 > m2) << std::endl;
    std::cout << "m1 <= m2: " << (m1 <= m2) << std::endl;
    std::cout << "m1 >= m2: " << (m1 >= m2) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "m2 IS more than m1:" << std::endl;
    std::cout << "  -> m1" << std::endl;
    ft::printMap(m1);
    std::cout << "  -> m2" << std::endl;
    ft::printMap(m2);

    std::cout << std::endl;

    std::cout << "m2 == m1: " << (m2 == m1) << std::endl;
    std::cout << "m2 != m1: " << (m2 != m1) << std::endl;
    std::cout << "m2 < m1: " << (m2 < m1) << std::endl;
    std::cout << "m2 > m1: " << (m2 > m1) << std::endl;
    std::cout << "m2 <= m1: " << (m2 <= m1) << std::endl;
    std::cout << "m2 >= m1: " << (m2 >= m1) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "m3 IS equal to m4:" << std::endl;
    std::cout << "  -> m3" << std::endl;
    ft::printMap(m3);
    std::cout << "  -> m4" << std::endl;
    ft::printMap(m4);

    std::cout << std::endl;

    std::cout << "m3 == m4: " << (m3 == m4) << std::endl;
    std::cout << "m3 != m4: " << (m3 != m4) << std::endl;
    std::cout << "m3 < m4: " << (m3 < m4) << std::endl;
    std::cout << "m3 > m4: " << (m3 > m4) << std::endl;
    std::cout << "m3 <= m4: " << (m3 <= m4) << std::endl;
    std::cout << "m3 >= m4: " << (m3 >= m4) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    m3[90] = TYPE(90);
    m4[100] = TYPE(100);
    std::cout << "m3 IS ALMOST equal to m4 (last elem not equal):" << std::endl;
    std::cout << "  -> m3" << std::endl;
    ft::printMap(m3);
    std::cout << "  -> m4" << std::endl;
    ft::printMap(m4);

    std::cout << std::endl;

    std::cout << "m3 == m4: " << (m3 == m4) << std::endl;
    std::cout << "m3 != m4: " << (m3 != m4) << std::endl;
    std::cout << "m3 < m4: " << (m3 < m4) << std::endl;
    std::cout << "m3 > m4: " << (m3 > m4) << std::endl;
    std::cout << "m3 <= m4: " << (m3 <= m4) << std::endl;
    std::cout << "m3 >= m4: " << (m3 >= m4) << std::endl;
}
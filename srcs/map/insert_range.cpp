/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:46:00 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/28 14:03:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::map<int, TYPE> m;

    std::cout << "--- Insert: range ---" << std::endl;
    ft::printMap(m);

    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Basic:" << std::endl;
    NAMESPACE::map<int, TYPE> m1;
    for (size_t i = 40; i < 110; ++i)
        m1.insert(NAMESPACE::make_pair(i, TYPE(i + 10)));

    NAMESPACE::map<int, TYPE>::iterator it1 = m1.begin();
    while (it1->first != 80)
        ++it1;
    // Keys 40 to 79
    m.insert(m1.begin(), it1);
    ft::printMap(m);
    std::cout << std::endl;
    // Keys 80 to 109
    m.insert(it1, m1.end());
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Empty range:" << std::endl;
    m.insert(m.begin(), m.begin());
    ft::printMap(m);
    std::cout << std::endl;
    m.insert(m1.end(), m1.end());
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Full range (self):" << std::endl;
    m.insert(m.begin(), m.end());
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Full range (other):" << std::endl;
    NAMESPACE::map<int, TYPE> m2;
    for (size_t i = 110; i < 200; ++i)
        m2.insert(NAMESPACE::make_pair(i, TYPE(42)));
    m.insert(m2.begin(), m2.end());
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Full range (InputIterator):" << std::endl;

    std::cout << "vector iterator ->" << std::endl;
    std::vector<NAMESPACE::pair<int, TYPE> > v;
    for (size_t i = 200; i < 300; ++i)
        v.insert(v.end(), NAMESPACE::make_pair(i, TYPE(42)));

    m.insert(v.begin(), v.end());
    ft::printMap(m);

    std::cout << std::endl;

    std::cout << "list iterator ->" << std::endl;
    std::list<NAMESPACE::pair<int, TYPE> > l;
    for (size_t i = 300; i < 400; ++i)
        l.push_back(NAMESPACE::make_pair(i, TYPE(42)));

    m.insert(l.begin(), l.end());
    ft::printMap(m);

    std::cout << std::endl;

    std::cout << "deque iterator ->" << std::endl;
    std::deque<NAMESPACE::pair<int, TYPE> > d;
    for (size_t i = 400; i < 500; ++i)
        d.push_back(NAMESPACE::make_pair(i, TYPE(42)));

    m.insert(d.begin(), d.end());
    ft::printMap(m);
}
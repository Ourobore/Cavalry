/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:46:00 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:19:13 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int main()
{
    NAMESPACE::set<TYPE> s;

    std::cout << "--- Insert: range ---" << std::endl;
    ft::printSet(s);

    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Basic:" << std::endl;
    NAMESPACE::set<TYPE> s1;
    for (size_t i = 40; i < 110; ++i)
        s1.insert(TYPE(i));

    NAMESPACE::set<TYPE>::iterator it1 = s1.begin();
    while (*it1 != TYPE(80))
        ++it1;
    // Keys 40 to 79
    s.insert(s1.begin(), it1);
    ft::printSet(s);
    std::cout << std::endl;
    // Keys 80 to 109
    s.insert(it1, s1.end());
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Empty range:" << std::endl;
    s.insert(s.begin(), s.begin());
    ft::printSet(s);
    std::cout << std::endl;
    s.insert(s1.end(), s1.end());
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Full range (self):" << std::endl;
    s.insert(s.begin(), s.end());
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Full range (other):" << std::endl;
    NAMESPACE::set<TYPE> s2;
    for (size_t i = 110; i < 200; ++i)
        s2.insert(TYPE(42));
    s.insert(s2.begin(), s2.end());
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Full range (InputIterator):" << std::endl;

    std::cout << "vector iterator ->" << std::endl;
    std::vector<TYPE> v;
    for (size_t i = 200; i < 300; ++i)
        v.insert(v.end(), TYPE(42));

    s.insert(v.begin(), v.end());
    ft::printSet(s);

    std::cout << std::endl;

    std::cout << "list iterator ->" << std::endl;
    std::list<TYPE > l;
    for (size_t i = 300; i < 400; ++i)
        l.push_back(TYPE(42));

    s.insert(l.begin(), l.end());
    ft::printSet(s);

    std::cout << std::endl;

    std::cout << "deque iterator ->" << std::endl;
    std::deque<TYPE> d;
    for (size_t i = 400; i < 500; ++i)
        d.push_back(TYPE(42));

    s.insert(d.begin(), d.end());
    ft::printSet(s);

    std::cout << std::endl;

    std::cout << "set reverse iterator ->" << std::endl;
    NAMESPACE::set<TYPE> n;

    n.insert(s.rbegin(), s.rend());
    ft::printSet(n);
}
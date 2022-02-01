/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:21:09 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:12:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

int main()
{
    NAMESPACE::map<int, TYPE> m;
    for (size_t i = 40; i < 60; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i + 10)));

    std::cout << "--- Find ---" << std::endl;
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    NAMESPACE::map<int, TYPE>::iterator it;
    std::cout << "Key exists (non const iterator):" << std::endl;
    it = m.find(50);
    if (it == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists" << std::endl;
    else
    {
        std::cout << "  -> Yep! The key exists!" << std::endl;
        std::cout << "Iterator found: " << ft::outputPair(*it) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    NAMESPACE::map<int, TYPE>::const_iterator cit;
    std::cout << "Key exists (const iterator):" << std::endl;
    cit = m.find(50);
    if (cit == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists" << std::endl;
    else
    {
        std::cout << "  -> Yep! The key exists!" << std::endl;
        std::cout << "Iterator found: " << ft::outputPair(*cit) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    it = m.find(60);
    if (it == m.end())
        std::cout << "  -> Yep! The key DOES NOT exists!" << std::endl;
    else
    {
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists" << std::endl;
        std::cout << "Iterator found: " << ft::outputPair(*it) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    cit = m.find(60);
    if (cit == m.end())
        std::cout << "  -> Yep! The key DOES NOT exists!" << std::endl;
    else
    {
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists" << std::endl;
        std::cout << "Iterator found: " << ft::outputPair(*cit) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    // Inserting duplicata for count() tests
    m.insert(NAMESPACE::make_pair(50, TYPE(55 + 10)));

    std::cout << "Const map:" << std::endl;
    const NAMESPACE::map<int, TYPE> n(m);

    std::cout << "(Key exists):" << std::endl;
    cit = m.find(50);
    if (cit == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists" << std::endl;
    else
    {
        std::cout << "  -> Yep! The key exists!" << std::endl;
        std::cout << "Iterator found: " << ft::outputPair(*cit) << std::endl;
    }

    std::cout << std::endl;

    std::cout << "(Key DOES NOT exists)" << std::endl;
    cit = n.find(60);
    if (cit == n.end())
        std::cout << "  -> Yep! The key DOES NOT exists!" << std::endl;
    else
    {
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists" << std::endl;
        std::cout << "Iterator found: " << ft::outputPair(*cit) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    size_t count_result;
    std::cout << "Count: (key exists)" << std::endl;
    count_result = m.count(55);
    std::cout << "(Non const map) Count result: " << count_result << std::endl;
    if (count_result == 1)
        std::cout << "  -> Yep! The key exists!" << std::endl;
    else
        std::cout << "  -> Huuuum... Are you sure about that? The key exists" << std::endl;

    std::cout << std::endl;

    count_result = n.count(55);
    std::cout << "(Const map) Count result: " << count_result << std::endl;
    if (count_result == 1)
        std::cout << "  -> Yep! The key exists!" << std::endl;
    else
        std::cout << "  -> Huuuum... Are you sure about that? The key exists" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Count: (key DOES NOT exists)" << std::endl;
    count_result = m.count(65);
    std::cout << "(Non const map) Count result: " << count_result << std::endl;
    if (count_result == 0)
        std::cout << "  -> Yep! The key DOES NOT exists!" << std::endl;
    else
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists" << std::endl;

    std::cout << std::endl;

    count_result = n.count(65);
    std::cout << "(Const map) Count result: " << count_result << std::endl;
    if (count_result == 0)
        std::cout << "  -> Yep! The key DOES NOT exists!" << std::endl;
    else
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists" << std::endl;
}
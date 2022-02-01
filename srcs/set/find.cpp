/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:21:09 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:19:06 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int main()
{
    NAMESPACE::set<TYPE> s;
    for (size_t i = 40; i < 60; ++i)
        s.insert(TYPE(i));

    std::cout << "--- Find ---" << std::endl;
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    NAMESPACE::set<TYPE>::iterator it;
    std::cout << "Key exists (non const iterator):" << std::endl;
    it = s.find(50);
    if (it == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists" << std::endl;
    else
    {
        std::cout << "  -> Yep! The key exists!" << std::endl;
        std::cout << "Iterator found: " << *it << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    NAMESPACE::set<TYPE>::const_iterator cit;
    std::cout << "Key exists (const iterator):" << std::endl;
    cit = s.find(50);
    if (cit == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists" << std::endl;
    else
    {
        std::cout << "  -> Yep! The key exists!" << std::endl;
        std::cout << "Iterator found: " << *cit << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    it = s.find(60);
    if (it == s.end())
        std::cout << "  -> Yep! The key DOES NOT exists!" << std::endl;
    else
    {
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists" << std::endl;
        std::cout << "Iterator found: " << *it << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    cit = s.find(60);
    if (cit == s.end())
        std::cout << "  -> Yep! The key DOES NOT exists!" << std::endl;
    else
    {
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists" << std::endl;
        std::cout << "Iterator found: " << *cit << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    // Inserting duplicata for count() tests
    s.insert(TYPE(55));

    std::cout << "Const Set:" << std::endl;
    const NAMESPACE::set<TYPE> n(s);

    std::cout << "(Key exists):" << std::endl;
    cit = s.find(50);
    if (cit == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists" << std::endl;
    else
    {
        std::cout << "  -> Yep! The key exists!" << std::endl;
        std::cout << "Iterator found: " << *cit << std::endl;
    }

    std::cout << std::endl;

    std::cout << "(Key DOES NOT exists)" << std::endl;
    cit = n.find(60);
    if (cit == n.end())
        std::cout << "  -> Yep! The key DOES NOT exists!" << std::endl;
    else
    {
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists" << std::endl;
        std::cout << "Iterator found: " << *cit << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    size_t count_result;
    std::cout << "Count: (key exists)" << std::endl;
    count_result = s.count(55);
    std::cout << "(Non const Set) Count result: " << count_result << std::endl;
    if (count_result == 1)
        std::cout << "  -> Yep! The key exists!" << std::endl;
    else
        std::cout << "  -> Huuuum... Are you sure about that? The key exists" << std::endl;

    std::cout << std::endl;

    count_result = n.count(55);
    std::cout << "(Const Set) Count result: " << count_result << std::endl;
    if (count_result == 1)
        std::cout << "  -> Yep! The key exists!" << std::endl;
    else
        std::cout << "  -> Huuuum... Are you sure about that? The key exists" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Count: (key DOES NOT exists)" << std::endl;
    count_result = s.count(65);
    std::cout << "(Non const Set) Count result: " << count_result << std::endl;
    if (count_result == 0)
        std::cout << "  -> Yep! The key DOES NOT exists!" << std::endl;
    else
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists" << std::endl;

    std::cout << std::endl;

    count_result = n.count(65);
    std::cout << "(Const Set) Count result: " << count_result << std::endl;
    if (count_result == 0)
        std::cout << "  -> Yep! The key DOES NOT exists!" << std::endl;
    else
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists" << std::endl;
}
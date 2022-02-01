/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bound_equal_less.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:21:42 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:18:31 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"
int main()
{
    std::cout << "--- Equal range ---" << std::endl;

    NAMESPACE::set<TYPE, std::less<TYPE> > s;
    for (size_t i = 40; i < 60; ++i)
        s.insert(TYPE(i));

    NAMESPACE::pair<NAMESPACE::set<TYPE>::iterator, NAMESPACE::set<TYPE>::iterator>             r1;
    NAMESPACE::pair<NAMESPACE::set<TYPE>::const_iterator, NAMESPACE::set<TYPE>::const_iterator> r2;

    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key exists (non const iterator):" << std::endl;
    TYPE v1 = 50;
    r1 = s.equal_range(v1);
    if (r1.first == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists and the set is not empty" << std::endl;
    else
    {
        if (*r1.first == v1)
            std::cout << "  -> Yes you found the right lower bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound: " << v1 << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::set<TYPE>::iterator it = r1.first; it != r1.second; ++it)
            std::cout << "  -> " << *it << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key exists (const iterator):" << std::endl;
    r2 = s.equal_range(v1);
    if (r2.first == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists and the set is not empty" << std::endl;
    else
    {
        if (*r2.first == v1)
            std::cout << "  -> Yes you found the right lower bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound: " << v1 << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::set<TYPE>::const_iterator it = r1.first; it != r1.second; ++it)
            std::cout << "  -> " << *it << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    std::cout << "(Key greater than every key in set)" << std::endl;
    TYPE v2 = TYPE(60);
    r1 = s.equal_range(v2);
    if (r1.first != s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists and is greater than every other key: there should not be any bound (set::end())" << std::endl;
    else
        std::cout << "  -> Yes, there is no lower bound so you returned set::end()!" << std::endl;
    std::cout << "Bound found: " << std::endl;
    for (NAMESPACE::set<TYPE>::iterator it = r1.first; it != r1.second; ++it)
        std::cout << "  -> " << *it << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Key greater than every key in set)" << std::endl;
    r2 = s.equal_range(v2);
    if (r2.first != s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists and is greater than every other key: there should not be any bound (set::end())" << std::endl;
    else
        std::cout << "  -> Yes, there is no lower bound so you returned set::end()!" << std::endl;
    std::cout << "Bound found: " << std::endl;
    for (NAMESPACE::set<TYPE>::const_iterator it = r1.first; it != r1.second; ++it)
        std::cout << "  -> " << *it << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    std::cout << "(Key smaller than every key in set)" << std::endl;
    TYPE v3 = TYPE(35);
    r1 = s.equal_range(v3);
    if (r1.first == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the set is not empty and every other key is greater, should return set::begin()" << std::endl;
    else
    {
        if (r1.first == s.begin())
            std::cout << "  -> Yes you found the right lower bound (set::begin())!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound (set::begin()): " << *s.begin() << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::set<TYPE>::iterator it = r1.first; it != r1.second; ++it)
            std::cout << "  -> " << *it << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Key smaller than every key in set)" << std::endl;
    r2 = s.equal_range(v3);
    if (r2.first == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the set is not empty and every other key is greater, should return set::begin()" << std::endl;
    else
    {
        if (r2.first == s.begin())
            std::cout << "  -> Yes you found the right lower bound (set::begin())!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound (set::begin()): " << *s.begin() << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::set<TYPE>::const_iterator it = r1.first; it != r1.second; ++it)
            std::cout << "  -> " << *it << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    s.insert(TYPE(61));
    s.insert(TYPE(62));
    s.insert(TYPE(63));
    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    std::cout << "(Missing key in between set keys)" << std::endl;
    TYPE v4 = TYPE(60);
    TYPE v5 = TYPE(59);
    r1 = s.equal_range(v4);
    if (r1.first == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the set is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*r1.first == v5)
            std::cout << "  -> Yes you found the right lower bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound: " << v4 << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::set<TYPE>::iterator it = r1.first; it != r1.second; ++it)
            std::cout << "  -> " << *it << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Missing key in between set keys)" << std::endl;
    r2 = s.equal_range(v4);
    if (r2.first == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the set is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*r2.first == v5)
            std::cout << "  -> Yes you found the right lower bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound: " << v4 << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::set<TYPE>::const_iterator it = r1.first; it != r1.second; ++it)
            std::cout << "  -> " << *it << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Const set (just function call verification: I will not test every cases, I trust you here^^)" << std::endl;
    const NAMESPACE::set<TYPE, std::less<TYPE> > n(s);
    ft::printSet(n);
    r2 = s.equal_range(v4);
    if (r2.first == n.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the set is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*r2.first == v5)
            std::cout << "  -> Yes you found the right lower bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound: " << v4 << std::endl;
        }
        for (NAMESPACE::set<TYPE>::const_iterator it = r1.first; it != r1.second; ++it)
            std::cout << "  -> " << *it << std::endl;
    }
}
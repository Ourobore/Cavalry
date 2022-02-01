/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bound_lower_greater.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 10:59:19 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:18:33 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int main()
{
    std::cout << "--- Lower bound ---" << std::endl;

    NAMESPACE::set<TYPE, std::greater<TYPE> > s;
    for (size_t i = 40; i < 60; ++i)
        s.insert(TYPE(i));

    NAMESPACE::set<TYPE, std::greater<int> >::iterator       it;
    NAMESPACE::set<TYPE, std::greater<int> >::const_iterator cit;

    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key exists (non const iterator):" << std::endl;
    TYPE v1 = 50;
    it = s.lower_bound(v1);
    if (it == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists and the set is not empty" << std::endl;
    else
    {
        if (*it == v1)
            std::cout << "  -> Yes you found the right bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " That's the right bound: " << v1 << std::endl;
        }
        std::cout << "Bound found: " << *it << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key exists (const iterator):" << std::endl;
    cit = s.lower_bound(50);
    if (cit == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists and the set is not empty" << std::endl;
    else
    {
        if (*cit == v1)
            std::cout << "  -> Yes you found the right bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " That's the right bound: " << v1 << std::endl;
        }
        std::cout << "Bound found: " << *cit << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    std::cout << "(Key greater than every key in set)" << std::endl;
    TYPE v2 = 60;
    it = s.lower_bound(v2);
    if (it != s.begin())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists and is greater than every other key: the bound should be begin()" << std::endl;
    else
        std::cout << "  -> Yes, you returned begin()!" << std::endl;
    std::cout << "Bound found: " << *it << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Key greater than every key in set)" << std::endl;
    cit = s.lower_bound(v2);
    if (cit != s.begin())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists and is greater than every other key: the bound should be begin()" << std::endl;
    else
        std::cout << "  -> Yes, you returned begin()!" << std::endl;
    std::cout << "Bound found: " << *cit << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    std::cout << "(Key smaller than every key in set)" << std::endl;
    TYPE v3 = TYPE(35);
    it = s.lower_bound(v3);
    if (it != s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the set is not empty and every other key is greater, should return set::end()" << std::endl;
    else
    {
        if (it == s.end())
            std::cout << "  -> Yes you found the right bound (set::end())!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " The right bound is set::end(): " << std::endl;
        }
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Key smaller than every key in set)" << std::endl;
    cit = s.lower_bound(v3);
    if (cit != s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the set is not empty and every other key is greater, should return set::end()" << std::endl;
    else
    {
        if (cit == s.end())
            std::cout << "  -> Yes you found the right bound (set::end())!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " The right bound is set::end(): " << std::endl;
        }
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
    it = s.lower_bound(v4);
    if (it == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the set is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*it == v5)
            std::cout << "  -> Yes you found the right bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " That's the right bound: " << v4 << std::endl;
        }
        std::cout << "Bound found: " << *it << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Missing key in between set keys)" << std::endl;
    cit = s.lower_bound(v4);
    if (cit == s.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the set is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*cit == v5)
            std::cout << "  -> Yes you found the right bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " That's the right bound: " << v4 << std::endl;
        }
        std::cout << "Bound found: " << *cit << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Const set (just function call verification: I will not test every cases, I trust you here^^)" << std::endl;
    const NAMESPACE::set<TYPE, std::greater<TYPE> > n(s);
    ft::printSet(n);
    cit = n.lower_bound(v4);
    if (cit == n.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the set is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*cit == v5)
            std::cout << "  -> Yes you found the right bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " That's the right bound: " << v4 << std::endl;
        }
        std::cout << "Bound found: " << *cit << std::endl;
    }
}

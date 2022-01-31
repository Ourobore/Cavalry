/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bound_upper_greater.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:55:44 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 15:47:48 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    std::cout << "--- Upper bound ---" << std::endl;

    NAMESPACE::map<int, TYPE, std::greater<int> > m;
    for (size_t i = 40; i < 60; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i + 10)));

    NAMESPACE::map<int, TYPE, std::greater<int> >::iterator       it;
    NAMESPACE::map<int, TYPE, std::greater<int> >::const_iterator cit;

    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key exists (non const iterator):" << std::endl;
    NAMESPACE::pair<const int, TYPE> p1 = NAMESPACE::make_pair(49, TYPE(49 + 10));
    it = m.upper_bound(50);
    if (it == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists and the map is not empty" << std::endl;
    else
    {
        if (*it == p1)
            std::cout << "  -> Yes you found the right bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " That's the right bound: " << ft::outputPair(p1) << std::endl;
        }
        std::cout << "Bound found: " << ft::outputPair(*it) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key exists (const iterator):" << std::endl;
    cit = m.upper_bound(50);
    if (cit == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists and the map is not empty" << std::endl;
    else
    {
        if (*cit == p1)
            std::cout << "  -> Yes you found the right bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " That's the right bound: " << ft::outputPair(p1) << std::endl;
        }
        std::cout << "Bound found: " << ft::outputPair(*cit) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    std::cout << "(Key greater than every key in map)" << std::endl;
    NAMESPACE::pair<const int, TYPE> p2 = NAMESPACE::make_pair(60, TYPE(60 + 10));
    (void)p2;
    it = m.upper_bound(60);
    if (it != m.begin())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists and is greater than every other key: the bound should be map::begin()" << std::endl;
    else
        std::cout << "  -> Yes, you returned map::begin()!" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Key greater than every key in map)" << std::endl;
    cit = m.upper_bound(60);
    if (cit != m.begin())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists and is greater than every other key: the bound should be map::begin()" << std::endl;
    else
        std::cout << "  -> Yes, you returned map::begin()!" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    std::cout << "(Key smaller than every key in map)" << std::endl;
    NAMESPACE::pair<const int, TYPE> p3 = NAMESPACE::make_pair(35, TYPE(35 + 10));
    (void)p3;
    it = m.upper_bound(35);
    if (it != m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the map is not empty and every other key is greater, should return map::end()" << std::endl;
    else
    {
        if (it == m.end())
            std::cout << "  -> Yes you found the right bound (map::end())!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " The right bound is map::end(): " << std::endl;
        }
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Key smaller than every key in map)" << std::endl;
    cit = m.upper_bound(35);
    if (cit != m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the map is not empty and every other key is greater, should return map::end()" << std::endl;
    else
    {
        if (cit == m.end())
            std::cout << "  -> Yes you found the right bound (map::end())!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " The right bound is map::end(): " << std::endl;
        }
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    m.insert(NAMESPACE::make_pair(61, TYPE(61 + 10)));
    m.insert(NAMESPACE::make_pair(62, TYPE(62 + 10)));
    m.insert(NAMESPACE::make_pair(63, TYPE(63 + 10)));
    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    std::cout << "(Missing key in between map keys)" << std::endl;
    NAMESPACE::pair<const int, TYPE> p4 = NAMESPACE::make_pair(60, TYPE(60 + 10));
    NAMESPACE::pair<const int, TYPE> p5 = NAMESPACE::make_pair(59, TYPE(59 + 10));
    it = m.upper_bound(60);
    if (it == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the map is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*it == p5)
            std::cout << "  -> Yes you found the right bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " That's the right bound: " << ft::outputPair(p4) << std::endl;
        }
        std::cout << "Bound found: " << ft::outputPair(*it) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Missing key in between map keys)" << std::endl;
    cit = m.upper_bound(60);
    if (cit == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the map is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*cit == p5)
            std::cout << "  -> Yes you found the right bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " That's the right bound: " << ft::outputPair(p4) << std::endl;
        }
        std::cout << "Bound found: " << ft::outputPair(*cit) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Const map (just function call verification: I will not test every cases, I trust you here^^)" << std::endl;
    const NAMESPACE::map<int, TYPE, std::greater<int> > n(m);
    ft::printMap(m);
    cit = n.upper_bound(60);
    if (cit == n.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the map is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*cit == p5)
            std::cout << "  -> Yes you found the right bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right bound!" << std::endl;
            std::cout << " That's the right bound: " << ft::outputPair(p4) << std::endl;
        }
        std::cout << "Bound found: " << ft::outputPair(*cit) << std::endl;
    }
}

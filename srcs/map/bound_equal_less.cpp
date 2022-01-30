/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bound_equal_less.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:21:42 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 18:21:31 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    std::cout << "--- Equal range ---" << std::endl;

    NAMESPACE::map<int, TYPE, std::less<int> > m;
    for (size_t i = 40; i < 60; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i + 10)));

    NAMESPACE::pair<NAMESPACE::map<int, TYPE>::iterator, NAMESPACE::map<int, TYPE>::iterator>             r1;
    NAMESPACE::pair<NAMESPACE::map<int, TYPE>::const_iterator, NAMESPACE::map<int, TYPE>::const_iterator> r2;

    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key exists (non const iterator):" << std::endl;
    NAMESPACE::pair<const int, TYPE> p1 = NAMESPACE::make_pair(50, TYPE(50 + 10));
    r1 = m.equal_range(50);
    if (r1.first == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists and the map is not empty" << std::endl;
    else
    {
        if (*r1.first == p1)
            std::cout << "  -> Yes you found the right lower bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound: " << ft::outputPair(p1) << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::map<int, TYPE>::iterator it = r1.first; it != r1.second; ++it)
            std::cout << "  -> " << ft::outputPair(*it) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key exists (const iterator):" << std::endl;
    r2 = m.equal_range(50);
    if (r2.first == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key exists and the map is not empty" << std::endl;
    else
    {
        if (*r2.first == p1)
            std::cout << "  -> Yes you found the right lower bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound: " << ft::outputPair(p1) << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::map<int, TYPE>::const_iterator cit = r2.first; cit != r2.second; ++cit)
            std::cout << "  -> " << ft::outputPair(*cit) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    std::cout << "(Key greater than every key in map)" << std::endl;
    NAMESPACE::pair<const int, TYPE> p2 = NAMESPACE::make_pair(60, TYPE(60 + 10));
    (void)p2;
    r1 = m.equal_range(60);
    if (r1.first != m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists and is greater than every other key: there should not be any bound (map::end())" << std::endl;
    else
        std::cout << "  -> Yes, there is no lower bound so you returned map::end()!" << std::endl;
    std::cout << "Bound found: " << std::endl;
    for (NAMESPACE::map<int, TYPE>::iterator it = r1.first; it != r1.second; ++it)
        std::cout << "  -> " << ft::outputPair(*it) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Key greater than every key in map)" << std::endl;
    r2 = m.equal_range(60);
    if (r2.first != m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists and is greater than every other key: there should not be any bound (map::end())" << std::endl;
    else
        std::cout << "  -> Yes, there is no lower bound so you returned map::end()!" << std::endl;
    std::cout << "Bound found: " << std::endl;
    for (NAMESPACE::map<int, TYPE>::const_iterator cit = r2.first; cit != r2.second; ++cit)
        std::cout << "  -> " << ft::outputPair(*cit) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (non const iterator):" << std::endl;
    std::cout << "(Key smaller than every key in map)" << std::endl;
    NAMESPACE::pair<const int, TYPE> p3 = NAMESPACE::make_pair(35, TYPE(35 + 10));
    (void)p3;
    r1 = m.equal_range(35);
    if (r1.first == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the map is not empty and every other key is greater, should return map::begin()" << std::endl;
    else
    {
        if (r1.first == m.begin())
            std::cout << "  -> Yes you found the right lower bound (map::begin())!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound (map::begin()): " << ft::outputPair(*m.begin()) << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::map<int, TYPE>::iterator it = r1.first; it != r1.second; ++it)
            std::cout << "  -> " << ft::outputPair(*it) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Key smaller than every key in map)" << std::endl;
    r2 = m.equal_range(35);
    if (r2.first == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the map is not empty and every other key is greater, should return map::begin()" << std::endl;
    else
    {
        if (r2.first == m.begin())
            std::cout << "  -> Yes you found the right lower bound (map::begin())!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound (map::begin()): " << ft::outputPair(*m.begin()) << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::map<int, TYPE>::const_iterator cit = r2.first; cit != r2.second; ++cit)
            std::cout << "  -> " << ft::outputPair(*cit) << std::endl;
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
    NAMESPACE::pair<const int, TYPE> p5 = NAMESPACE::make_pair(61, TYPE(61 + 10));
    r1 = m.equal_range(60);
    if (r1.first == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the map is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*r1.first == p5)
            std::cout << "  -> Yes you found the right lower bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound: " << ft::outputPair(p4) << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::map<int, TYPE>::iterator it = r1.first; it != r1.second; ++it)
            std::cout << "  -> " << ft::outputPair(*it) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Key DOES NOT exists (const iterator):" << std::endl;
    std::cout << "(Missing key in between map keys)" << std::endl;
    r2 = m.equal_range(60);
    if (r2.first == m.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the map is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*r2.first == p5)
            std::cout << "  -> Yes you found the right lower bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound: " << ft::outputPair(p4) << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::map<int, TYPE>::const_iterator cit = r2.first; cit != r2.second; ++cit)
            std::cout << "  -> " << ft::outputPair(*cit) << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Const map (just function call verification: I will not test every cases, I trust you here^^)" << std::endl;
    const NAMESPACE::map<int, TYPE, std::less<int> > n(m);
    r2 = n.equal_range(60);
    if (r2.first == n.end())
        std::cout << "  -> Huuuum... Are you sure about that? The key DOES NOT exists but the map is not empty and every other keys are not smaller" << std::endl;
    else
    {
        if (*r2.first == p5)
            std::cout << "  -> Yes you found the right lower bound!" << std::endl;
        else
        {
            std::cout << "  -> Huuum, that's not the right lower bound!" << std::endl;
            std::cout << " That's the right lower bound: " << ft::outputPair(p4) << std::endl;
        }
        std::cout << "Bound found: " << std::endl;
        for (NAMESPACE::map<int, TYPE>::const_iterator cit = r2.first; cit != r2.second; ++cit)
            std::cout << "  -> " << ft::outputPair(*cit) << std::endl;
    }
}

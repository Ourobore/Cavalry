/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hint.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:14:37 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 20:49:05 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::set<TYPE>           s;
    NAMESPACE::set<TYPE>::iterator result;

    std::cout << "--- Insert: hint ---" << std::endl;
    ft::printSet(s);

    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Insert in loop:" << std::endl;
    for (size_t i = 40; i < 60; ++i)
        s.insert(TYPE(i));
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Insert new elem (with bad hint):" << std::endl;
    TYPE p = TYPE(70);
    std::cout << "New elem: " << p << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printSet(s);
    result = s.insert(s.begin(), p);
    std::cout << "After ->" << std::endl;
    ft::printSet(s);

    std::cout << "Result: it-> " << *result << std::endl;
    std::cout << "Verifying iterator: ";
    if (result != s.begin())
    {
        std::cout << "--it -> " << *--result;
        ++result;
    }
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result != --s.end())
        std::cout << "++it -> " << *++result;
    else
        std::cout << "++it -> (end())";
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Insert new elem (with good hint):" << std::endl;
    TYPE p1 = TYPE(75);
    std::cout << "New elem: " << p1 << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printSet(s);
    result = s.insert(s.end(), p1);
    std::cout << "After ->" << std::endl;
    ft::printSet(s);

    std::cout << "Result: it-> " << *result << std::endl;
    std::cout << "Verifying iterator: ";
    if (result != s.begin())
    {
        std::cout << "--it -> " << *--result;
        ++result;
    }
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result != --s.end())
        std::cout << "++it -> " << *++result;
    else
        std::cout << "++it -> (end())";
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Insert existing elem (with bad hint):" << std::endl;
    TYPE p2 = TYPE(45);
    std::cout << "New elem: " << p2 << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printSet(s);
    result = s.insert(s.end(), p2);
    std::cout << "After ->" << std::endl;
    ft::printSet(s);

    std::cout << "Result: it-> " << *result << std::endl;
    std::cout << "Verifying iterator: ";
    if (result != s.begin())
    {
        std::cout << "--it -> " << *--result;
        ++result;
    }
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result != --s.end())
        std::cout << "++it -> " << *++result;
    else
        std::cout << "++it -> (end())";
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Insert existing elem (with good hint):" << std::endl;
    std::cout << "New elem: " << p1 << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printSet(s);
    result = s.insert(--s.end(), p1);
    std::cout << "After ->" << std::endl;
    ft::printSet(s);

    std::cout << "Result: it-> " << *result << std::endl;
    std::cout << "Verifying iterator: ";
    if (result != s.begin())
    {
        std::cout << "--it -> " << *--result;
        ++result;
    }
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result != --s.end())
        std::cout << "++it -> " << *++result;
    else
        std::cout << "++it -> (end())";
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;
}
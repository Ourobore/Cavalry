/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_simple.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:52:00 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:20:18 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

int main()
{
    NAMESPACE::set<TYPE>                                  s;
    NAMESPACE::pair<NAMESPACE::set<TYPE>::iterator, bool> result;

    std::cout << "--- Insert: single element ---" << std::endl;
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

    std::cout << "Insert new elem:" << std::endl;
    TYPE p = TYPE(70);
    std::cout << "New elem: " << p << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printSet(s);
    result = s.insert(p);
    std::cout << "After ->" << std::endl;
    ft::printSet(s);

    std::cout << "Result: it-> " << *(result.first) << ", inserted: " << result.second << std::endl;
    std::cout << "Verifying iterator: ";
    if (result.first != s.begin())
        std::cout << "--it -> " << *--result.first;
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result.first != --s.end())
        std::cout << "++it -> (end())";
    else
        std::cout << "++it -> " << *++(++result.first);
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Insert existing elem:" << std::endl;
    TYPE p1 = TYPE(45);
    std::cout << "New elem: " << p1 << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printSet(s);
    result = s.insert(p1);
    std::cout << "After ->" << std::endl;
    ft::printSet(s);

    std::cout << "Result: it-> " << *(result.first) << ", inserted: " << result.second << std::endl;
    std::cout << "Verifying iterator: ";
    if (result.first != s.begin())
        std::cout << "--it -> " << *--result.first;
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result.first != --s.end())
        std::cout << "++it -> " << *++(++result.first);
    else
        std::cout << "++it -> (end())";
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;
}
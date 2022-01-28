/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hint.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:14:37 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/28 13:48:26 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::map<int, TYPE>           m;
    NAMESPACE::map<int, TYPE>::iterator result;

    std::cout << "--- Insert: hint ---" << std::endl;
    ft::printMap(m);

    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Insert in loop:" << std::endl;
    for (size_t i = 40; i < 60; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i + 10)));
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Insert new elem (with bad hint):" << std::endl;
    NAMESPACE::pair<int, TYPE> p(70, TYPE(80));
    std::cout << "New elem: " << ft::outputPair(p) << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printMap(m);
    result = m.insert(m.begin(), p);
    std::cout << "After ->" << std::endl;
    ft::printMap(m);

    std::cout << "Result: it-> " << ft::outputPair(*result) << std::endl;
    std::cout << "Verifying iterator: ";
    if (result != m.begin())
    {
        std::cout << "--it -> " << ft::outputPair(*--result);
        ++result;
    }
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result != --m.end())
        std::cout << "++it -> " << ft::outputPair(*++result);
    else
        std::cout << "++it -> (end())";
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Insert new elem (with good hint):" << std::endl;
    NAMESPACE::pair<int, TYPE> p1(75, TYPE(85));
    std::cout << "New elem: " << ft::outputPair(p1) << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printMap(m);
    result = m.insert(m.end(), p1);
    std::cout << "After ->" << std::endl;
    ft::printMap(m);

    std::cout << "Result: it-> " << ft::outputPair(*result) << std::endl;
    std::cout << "Verifying iterator: ";
    if (result != m.begin())
    {
        std::cout << "--it -> " << ft::outputPair(*--result);
        ++result;
    }
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result != --m.end())
        std::cout << "++it -> " << ft::outputPair(*++result);
    else
        std::cout << "++it -> (end())";
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Insert existing elem (with bad hint):" << std::endl;
    NAMESPACE::pair<int, TYPE> p2(45, TYPE(55));
    std::cout << "New elem: " << ft::outputPair(p2) << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printMap(m);
    result = m.insert(m.end(), p2);
    std::cout << "After ->" << std::endl;
    ft::printMap(m);

    std::cout << "Result: it-> " << ft::outputPair(*result) << std::endl;
    std::cout << "Verifying iterator: ";
    if (result != m.begin())
    {
        std::cout << "--it -> " << ft::outputPair(*--result);
        ++result;
    }
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result != --m.end())
        std::cout << "++it -> " << ft::outputPair(*++result);
    else
        std::cout << "++it -> (end())";
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Insert existing elem (with good hint):" << std::endl;
    std::cout << "New elem: " << ft::outputPair(p1) << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printMap(m);
    result = m.insert(--m.end(), p1);
    std::cout << "After ->" << std::endl;
    ft::printMap(m);

    std::cout << "Result: it-> " << ft::outputPair(*result) << std::endl;
    std::cout << "Verifying iterator: ";
    if (result != m.begin())
    {
        std::cout << "--it -> " << ft::outputPair(*--result);
        ++result;
    }
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result != --m.end())
        std::cout << "++it -> " << ft::outputPair(*++result);
    else
        std::cout << "++it -> (end())";
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;
}
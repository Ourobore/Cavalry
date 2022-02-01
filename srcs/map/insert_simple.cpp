/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_simple.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:52:00 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:13:45 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

int main()
{
    NAMESPACE::map<int, TYPE>                                  m;
    NAMESPACE::pair<NAMESPACE::map<int, TYPE>::iterator, bool> result;

    std::cout << "--- Insert: single element ---" << std::endl;
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

    std::cout << "Insert new elem:" << std::endl;
    NAMESPACE::pair<int, TYPE> p(70, TYPE(80));
    std::cout << "New elem: " << ft::outputPair(p) << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printMap(m);
    result = m.insert(p);
    std::cout << "After ->" << std::endl;
    ft::printMap(m);

    std::cout << "Result: it-> " << ft::outputPair(*(result.first)) << ", inserted: " << result.second << std::endl;
    std::cout << "Verifying iterator: ";
    if (result.first != m.begin())
        std::cout << "--it -> " << ft::outputPair(*--result.first);
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result.first != --m.end())
        std::cout << "++it -> (end())";
    else
        std::cout << "++it -> " << ft::outputPair(*++(++result.first));
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Insert existing elem:" << std::endl;
    NAMESPACE::pair<int, TYPE> p1(45, TYPE(55));
    std::cout << "New elem: " << ft::outputPair(p1) << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printMap(m);
    result = m.insert(p1);
    std::cout << "After ->" << std::endl;
    ft::printMap(m);

    std::cout << "Result: it-> " << ft::outputPair(*(result.first)) << ", inserted: " << result.second << std::endl;
    std::cout << "Verifying iterator: ";
    if (result.first != m.begin())
        std::cout << "--it -> " << ft::outputPair(*--result.first);
    else
        std::cout << "--it -> (begin())";
    std::cout << ", ";
    if (result.first != --m.end())
        std::cout << "++it -> " << ft::outputPair(*++(++result.first));
    else
        std::cout << "++it -> (end())";
    std::cout << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;
}
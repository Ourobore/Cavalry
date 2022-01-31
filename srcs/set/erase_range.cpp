/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_range.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:31:09 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 18:46:41 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::set<int, TYPE> s;
    for (size_t i = 40; i < 110; ++i)
        s.insert(TYPE(i));

    std::cout << "--- Erase: range ---" << std::endl;
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "From begin():" << std::endl;
    s.erase(s.begin(), ++(++(++s.begin())));
    ft::printSet(s);
    s.erase(s.begin(), ++(++s.begin()));
    ft::printSet(s);
    s.erase(s.begin(), ++(++(++(++s.begin()))));
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "From end():" << std::endl;
    s.erase(--(--(--s.end())), s.end());
    ft::printSet(s);
    s.erase(--(--s.end())), s.end();
    ft::printSet(s);
    s.erase(--(--(--(--s.end())), s.end()));
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "From position:" << std::endl;
    NAMESPACE::set<int, TYPE>::iterator it1 = s.begin();
    for (size_t i = 0; i < s.size() / 3; ++i)
        ++it1;
    NAMESPACE::set<int, TYPE>::iterator it2 = s.end();
    for (size_t i = 0; i < s.size() / 3; ++i)
        --it2;

    std::cout << " -> from begin() to it1" << std::endl;
    s.erase(s.begin(), it1);
    ft::printSet(s);

    std::cout << " -> from it1 to it2" << std::endl;
    s.erase(it1, it2);
    ft::printSet(s);

    std::cout << " -> from it2 to end()" << std::endl;
    s.erase(it2, s.end());
    ft::printSet(s);
}
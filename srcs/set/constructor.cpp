/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:10:48 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 18:34:10 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    {
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "--- Empty set (default constructor) ---" << std::endl;

        NAMESPACE::set<TYPE> s;
        ft::printSet(s);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################

    NAMESPACE::set<TYPE>              set;
    NAMESPACE::vector<TYPE>::iterator it;

    int val = 0;
    while (val != 10)
    {
        set.insert(TYPE(val));
        ++val;
    }
    ft::printSet(set);

    // #########################################################
    {
        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "--- Range set (range constructor) ---" << std::endl;

        NAMESPACE::set<TYPE> s1(set.begin(), set.end());
        ft::printSet(s1);

        NAMESPACE::set<TYPE> s2(++(++(++set.begin())), --(--set.end()));
        ft::printSet(s2);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################
    {
        std::cout << "--- Copied set (copy constructor) ---" << std::endl;

        NAMESPACE::set<TYPE> s1(set);
        NAMESPACE::set<TYPE> s2;
        NAMESPACE::set<TYPE> s3(s2);
        ft::printSet(s1);
        ft::printSet(s2);
        ft::printSet(s3);
    }
    // #########################################################
    {
        std::cout << "--- Assignment set (operator=) ---" << std::endl;

        NAMESPACE::set<TYPE> s1 = set;
        ft::printSet(set);
        ft::printSet(s1);
        std::cout << std::endl;
        set.erase(--set.end());
        s1 = set;
        ft::printSet(set);
        ft::printSet(set);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################
    {
        std::cout << "--- Range set (range constructor with reverse_iterator) ---" << std::endl;

        NAMESPACE::set<int, TYPE> s1(set.rbegin(), set.rend());
        ft::printSet(s1);
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:10:48 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:12:44 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

int main()
{
    {
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "--- Empty map (default constructor) ---" << std::endl;

        NAMESPACE::map<int, TYPE> m;
        ft::printMap(m);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################

    NAMESPACE::map<int, TYPE>         map;
    NAMESPACE::vector<TYPE>::iterator it;

    int val = 0;
    while (val != 10)
    {
        map.insert(NAMESPACE::make_pair(val, TYPE(val * 10)));
        ++val;
    }
    ft::printMap(map);

    // #########################################################
    {
        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "--- Range map (range constructor) ---" << std::endl;

        NAMESPACE::map<int, TYPE> m1(map.begin(), map.end());
        ft::printMap(m1);

        NAMESPACE::map<int, TYPE> m2(++(++(++map.begin())), --(--map.end()));
        ft::printMap(m2);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################
    {
        std::cout << "--- Copied map (copy constructor) ---" << std::endl;

        NAMESPACE::map<int, TYPE> m1(map);
        NAMESPACE::map<int, TYPE> m2;
        NAMESPACE::map<int, TYPE> m3(m2);
        ft::printMap(m1);
        ft::printMap(m2);
        ft::printMap(m3);
    }
    // #########################################################
    {
        std::cout << "--- Assignment map (operator=) ---" << std::endl;

        NAMESPACE::map<int, TYPE> m1 = map;
        ft::printMap(map);
        ft::printMap(m1);
        std::cout << std::endl;
        map.erase(--map.end());
        m1 = map;
        ft::printMap(map);
        ft::printMap(m1);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################
    {
        std::cout << "--- Range map (range constructor with reverse_iterator) ---" << std::endl;

        NAMESPACE::map<int, TYPE> m1(map.rbegin(), map.rend());
        ft::printMap(m1);
    }
}
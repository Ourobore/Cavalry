/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:23:20 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:12:39 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

int main()
{
    NAMESPACE::map<int, TYPE> m;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        m.insert(NAMESPACE::make_pair(i - 30, TYPE(i)));

    std::cout << "--- Clear ---" << std::endl;
    // ##################################################################################
    std::cout << "Using clear():" << std::endl;
    std::cout << "Before clear ->" << std::endl;
    ft::printMap(m);
    m.clear();
    m.clear(); // To see if that is not a problem
    std::cout << "After clear ->" << std::endl;
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Using map<Key, T>().swap(m):" << std::endl;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        m.insert(NAMESPACE::make_pair(i - 30, TYPE(i)));
    std::cout << "Before clear ->" << std::endl;
    ft::printMap(m);
    NAMESPACE::map<int, TYPE>().swap(m);
    NAMESPACE::map<int, TYPE>().swap(m); // To see if that is not a problem
    std::cout << "After clear ->" << std::endl;
    ft::printMap(m);
}
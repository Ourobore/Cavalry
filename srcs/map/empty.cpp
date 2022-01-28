/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:32:07 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/28 09:46:35 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::map<int, TYPE> m;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i * 10)));

    std::cout << "--- Empty ---" << std::endl;
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std ::cout << "When the map IS NOT empty:" << std::endl;
    ft::printMap(m);
    if (m.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The map IS NOT empty" << std::endl;
    else
        std::cout << "  -> Yep! The map IS NOT empty!" << std::endl;

    std::cout << std::endl;
    std::cout << "(Little verification, the map should not be changed in any way)" << std::endl;
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std ::cout << "When the map IS empty:" << std::endl;
    m.clear();
    ft::printMap(m);
    if (!m.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The map IS empty" << std::endl;
    else
        std::cout << "  -> Yep! The map IS empty!" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "(Little bonus, another way to clear)" << std::endl;
    std ::cout << "When the map IS empty:" << std::endl;
    NAMESPACE::map<int, TYPE>().swap(m);
    ft::printMap(m);
    if (!m.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The map IS empty" << std::endl;
    else
        std::cout << "  -> Yep! The map IS empty!" << std::endl;
}
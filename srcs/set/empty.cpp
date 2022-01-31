/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:32:07 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 20:48:13 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::set<TYPE> s;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        s.insert(TYPE(i));

    std::cout << "--- Empty ---" << std::endl;
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std ::cout << "When the set IS NOT empty:" << std::endl;
    ft::printSet(s);
    if (s.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The set IS NOT empty" << std::endl;
    else
        std::cout << "  -> Yep! The set IS NOT empty!" << std::endl;

    std::cout << std::endl;
    std::cout << "(Little verification, the set should not be changed in any way)" << std::endl;
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std ::cout << "When the set IS empty:" << std::endl;
    s.clear();
    ft::printSet(s);
    if (!s.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The set IS empty" << std::endl;
    else
        std::cout << "  -> Yep! The set IS empty!" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "(Little bonus, another way to clear)" << std::endl;
    std ::cout << "When the set IS empty:" << std::endl;
    NAMESPACE::set<TYPE>().swap(s);
    ft::printSet(s);
    if (!s.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The set IS empty" << std::endl;
    else
        std::cout << "  -> Yep! The set IS empty!" << std::endl;
}
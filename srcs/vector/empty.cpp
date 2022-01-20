/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:32:07 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/20 15:00:57 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{

    NAMESPACE::vector<TYPE> v;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        v.push_back(TYPE(i));

    std::cout << "--- Empty ---" << std::endl;
    ft::printContainer(v);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std ::cout << "When the vector IS NOT empty:" << std::endl;
    ft::printContainer(v);
    if (v.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The vector IS NOT empty" << std::endl;
    else
        std::cout << "  -> Yep! The vector IS NOT empty!" << std::endl;

    std::cout << std::endl;
    std::cout << "(Little verification, the vector should not be changed in any way)" << std::endl;
    ft::printContainer(v);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std ::cout << "When the vector IS empty:" << std::endl;
    v.clear();
    ft::printContainer(v);
    if (!v.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The vector IS empty" << std::endl;
    else
        std::cout << "  -> Yep! The vector IS empty!" << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "(Little bonus, empty and capacity equals 0)" << std::endl;
    std ::cout << "When the vector IS empty:" << std::endl;
    NAMESPACE::vector<TYPE>().swap(v);
    ft::printContainer(v);
    if (!v.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The vector IS empty" << std::endl;
    else
        std::cout << "  -> Yep! The vector IS empty!" << std::endl;
}
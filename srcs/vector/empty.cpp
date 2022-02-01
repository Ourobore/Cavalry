/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:32:07 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:25:29 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v;

    size_t first_elem = 30;
    size_t size = 10;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        v.push_back(TYPE(i));

    std::cout << "--- Empty ---" << std::endl;
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std ::cout << "When the vector IS NOT empty:" << std::endl;
    ft::printVector(v, CAPACITY);
    if (v.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The vector IS NOT empty" << std::endl;
    else
        std::cout << "  -> Yep! The vector IS NOT empty!" << std::endl;

    std::cout << std::endl;
    std::cout << "(Little verification, the vector should not be changed in any way)" << std::endl;
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std ::cout << "When the vector IS empty:" << std::endl;
    v.clear();
    ft::printVector(v, CAPACITY);
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
    ft::printVector(v, CAPACITY);
    if (!v.empty())
        std::cout << "  -> Huuuum... Are you sure about that? The vector IS empty" << std::endl;
    else
        std::cout << "  -> Yep! The vector IS empty!" << std::endl;
}
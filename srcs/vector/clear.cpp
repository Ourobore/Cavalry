/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:23:20 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:25:23 by lchapren         ###   ########.fr       */
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

    std::cout << "--- Clear ---" << std::endl;
    // ##################################################################################
    std::cout << "Using clear():" << std::endl;
    std::cout << "Before clear ->" << std::endl;
    ft::printVector(v, CAPACITY);
    v.clear();
    v.clear(); // To see if that is not a problem
    std::cout << "After clear ->" << std::endl;
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Using vector<T>().swap(v):" << std::endl;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        v.push_back(TYPE(i));
    std::cout << "Before clear ->" << std::endl;
    ft::printVector(v, CAPACITY);
    NAMESPACE::vector<TYPE>().swap(v);
    NAMESPACE::vector<TYPE>().swap(v); // To see if that is not a problem
    std::cout << "After clear ->" << std::endl;
    ft::printVector(v, CAPACITY);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:23:20 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/20 13:28:53 by lchapren         ###   ########.fr       */
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

    std::cout << "--- Clear ---" << std::endl;
    // ##################################################################################
    std::cout << "Using clear():" << std::endl;
    std::cout << "Before clear ->" << std::endl;
    ft::printContainer(v);
    v.clear();
    std::cout << "After clear ->" << std::endl;
    ft::printContainer(v);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Using vector<T>().swap(v):" << std::endl;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        v.push_back(TYPE(i));
    std::cout << "Before clear ->" << std::endl;
    ft::printContainer(v);
    NAMESPACE::vector<TYPE>().swap(v);
    std::cout << "After clear ->" << std::endl;
    ft::printContainer(v);
}
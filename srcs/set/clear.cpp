/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:23:20 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 20:47:00 by lchapren         ###   ########.fr       */
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

    std::cout << "--- Clear ---" << std::endl;
    // ##################################################################################
    std::cout << "Using clear():" << std::endl;
    std::cout << "Before clear ->" << std::endl;
    ft::printSet(s);
    s.clear();
    s.clear(); // To see if that is not a problem
    std::cout << "After clear ->" << std::endl;
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################
    std::cout << "Using set<T>().swap(s):" << std::endl;
    for (size_t i = first_elem; i < first_elem + size; ++i)
        s.insert(TYPE(i));
    std::cout << "Before clear ->" << std::endl;
    ft::printSet(s);
    NAMESPACE::set<TYPE>().swap(s);
    NAMESPACE::set<TYPE>().swap(s); // To see if that is not a problem
    std::cout << "After clear ->" << std::endl;
    ft::printSet(s);
}
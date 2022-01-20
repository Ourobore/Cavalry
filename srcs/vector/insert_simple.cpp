/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_simple.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:33:37 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/20 12:30:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

static TYPE value = TYPE(27);

int main()
{
    NAMESPACE::vector<TYPE> v;

    std::cout << "--- Insert: single element ---" << std::endl;
    // ##################################################################################
    std::cout << "At begin():" << std::endl;
    v.insert(v.begin(), ++value);
    v.insert(v.begin(), ++value);
    ft::printContainer(v, false);

    std::cout << std::endl;

    // ##################################################################################
    std::cout << "At begin() + n:" << std::endl;
    v.insert(v.begin() + 1, ++value);
    v.insert(v.begin() + 1, ++value);
    v.insert(v.begin() + 3, ++value);
    v.insert(v.begin() + (v.size() - 1), ++value);
    ft::printContainer(v, false);

    std::cout << std::endl;

    // ##################################################################################
    std::cout << "At end() - n:" << std::endl;
    v.insert(v.end() - 3, ++value);
    v.insert(v.end() - 3, ++value);
    v.insert(v.end() - 4, ++value);
    v.insert(v.end() - v.size(), ++value);
    ft::printContainer(v, false);

    std::cout << std::endl;

    NAMESPACE::vector<TYPE>::iterator it = v.begin() + (v.size() / 2);
    // ##################################################################################
    std::cout << "At position:" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it, ++value);
    v.insert(it, ++value);
    v.insert(it, ++value);
    ft::printContainer(v, false);

    std::cout << std::endl;

    it = v.begin() + (v.size() / 2);
    // ##################################################################################
    std::cout << "At position + n:" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it + 2, ++value);
    v.insert(it + 2, ++value);
    v.insert(it + 3, ++value);
    v.insert(it + ((v.end() - v.begin()) / 3), ++value);
    ft::printContainer(v, false);

    std::cout << std::endl;

    it = v.begin() + (v.size() / 2);
    // ##################################################################################
    std::cout << "At position - n:" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it - 2, ++value);
    v.insert(it - 1, ++value);
    v.insert(it - 3, ++value);
    v.insert(it - ((v.end() - v.begin()) / 3), ++value);
    ft::printContainer(v, false);
}
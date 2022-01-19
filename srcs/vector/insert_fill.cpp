/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_fill.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:37:08 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/19 16:37:42 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v;

    std::cout << "--- Insert: fill element ---" << std::endl;
    std::cout << "At begin():" << std::endl;
    v.insert(v.begin(), 3, TYPE(42));
    v.insert(v.begin(), 2, TYPE(21));
    ft::printContainer(v, false);

    std::cout << std::endl;

    std::cout << "At end():" << std::endl;
    v.insert(v.end(), 3, TYPE(33));
    v.insert(v.end(), 2, TYPE(31));
    ft::printContainer(v, false);

    std::cout << std::endl;

    // Must reserve before, because if reallocation, iterator is no longer valid
    v.reserve(50);
    NAMESPACE::vector<TYPE>::iterator it = v.begin() + (v.size() / 2);
    std::cout << "At position:" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it, 3, TYPE(98));
    v.insert(it, 2, TYPE(66));
    ft::printContainer(v, false);

    std::cout << std::endl;
    std::cout << "At position + n:" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it + 5, 3, TYPE(46));
    v.insert(it + 2, 2, TYPE(65));
    ft::printContainer(v, false);

    std::cout << std::endl;

    std::cout << "At position - n:" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it - 5, 3, TYPE(100));
    v.insert(it - 2, 2, TYPE(200));
    ft::printContainer(v, false);
}
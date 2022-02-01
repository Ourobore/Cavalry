/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_key_map.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:16:14 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:15:53 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_map.hpp"

int main()
{
    NAMESPACE::map<int, TYPE> m;
    m.insert(NAMESPACE::make_pair(21, TYPE(21)));

    NAMESPACE::map<int, TYPE>::iterator it = m.begin();
    std::cout << "Iterator: " << ft::outputPair(*it) << std::endl;

    std::cout << std::endl;

    it->second = TYPE(42);
    std::cout << "Iterator (.second modified): " << ft::outputPair(*it) << std::endl;

    std::cout << std::endl;

    // Can't modify, key is const
    it->first = 42;
    std::cout << "Iterator (.first modified): " << ft::outputPair(*it) << std::endl;
}
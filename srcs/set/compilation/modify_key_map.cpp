/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify_key_map.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:16:14 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:21:09 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_set.hpp"

int main()
{
    NAMESPACE::set<TYPE> s;
    s.insert(TYPE(21));

    NAMESPACE::set<TYPE>::iterator it = s.begin();
    std::cout << "Iterator: " << *it << std::endl;

    // Can't modify, key is const
    *it = 42;
    std::cout << "Iterator (modified): " << *it << std::endl;
}
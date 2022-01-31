/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_access.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:23:17 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 18:38:10 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

template <class Set>
void access_set(Set s)
{
    std::cout << "--- Access: via iterator ---" << std::endl;
    NAMESPACE::set<TYPE>::iterator it;
    for (it = s.begin(); it != s.end();)
    {
        std::cout << *it;
        ++it;
        if (it != s.end())
            std::cout << ", ";
    }
}

int main()
{
    NAMESPACE::set<TYPE> s;
    for (size_t i = 36; i < 126; ++i)
        s.insert(TYPE(i));
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const set ===" << std::endl;
    access_set(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    const NAMESPACE::set<TYPE> cs(s);
    std::cout << "=== Const vector ===" << std::endl;
    access_set(cs);
}
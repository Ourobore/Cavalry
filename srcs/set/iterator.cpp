/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:07:58 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 20:50:32 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

template <class Iterator>
void test_iterator(NAMESPACE::set<TYPE>& s, Iterator it)
{
    std::cout << "--- Increments and decrements ---" << std::endl;
    std::cout << "Prefix increment (++it): " << *it << " | " << *++it << std::endl;
    std::cout << "Postfix increment (it++): " << *it << " | " << *it++ << " | " << *it << std::endl;
    std::cout << "Prefix decrement (--it): " << *it << " | " << *--it << std::endl;
    std::cout << "Postfix decrement (it--): " << *it << " | " << *it-- << " | " << *it << std::endl;

    std::cout << std::endl;

    std::cout << "--- Printing via iterators (ascending) ---" << std::endl;
    for (it = s.begin(); it != s.end(); ++it)
        std::cout << " " << *it << " ";

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "--- Printing via iterators (descending) ---" << std::endl;
    for (it = --s.end(); it != s.begin(); --it)
        std::cout << " " << *it << " ";
    std::cout << " " << *it << std::endl;
}

int main()
{
    NAMESPACE::set<TYPE> s;
    for (size_t i = 36; i < 126; ++i)
        s.insert(TYPE(i));
    ft::printSet(s);

    NAMESPACE::set<TYPE>::iterator       it = ++(++(++s.begin()));
    NAMESPACE::set<TYPE>::const_iterator cit = ++(++(++s.begin()));

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const iterator ===" << std::endl;
    test_iterator(s, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const iterator ===" << std::endl;
    test_iterator(s, cit);
}
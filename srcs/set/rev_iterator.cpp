/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_iterator.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:27:31 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 19:19:25 by lchapren         ###   ########.fr       */
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

    std::cout << "--- Printing via reverse iterators (ascending) ---" << std::endl;
    for (it = s.rbegin(); it != s.rend(); ++it)
        std::cout << " " << *it << " ";

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "--- Printing via reverse iterators (descending) ---" << std::endl;
    for (it = --s.rend(); it != s.rbegin(); --it)
        std::cout << " " << *it << " ";
    std::cout << " " << *it << std::endl;
}

int main()
{
    NAMESPACE::set<TYPE> s;
    for (size_t i = 36; i < 126; ++i)
        s.insert(TYPE(i));
    ft::printSet(s);

    NAMESPACE::set<TYPE>::reverse_iterator       it = ++(++(++s.rbegin()));
    NAMESPACE::set<TYPE>::const_reverse_iterator cit = ++(++(++s.rbegin()));

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const reverse iterator ===" << std::endl;
    test_iterator(s, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const reverse iterator ===" << std::endl;
    test_iterator(s, cit);
}
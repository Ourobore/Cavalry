/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_iterator.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:27:31 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:14:03 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

template <class Iterator>
void test_iterator(NAMESPACE::map<int, TYPE>& v, Iterator it)
{
    std::cout << "--- Increments and decrements ---" << std::endl;
    std::cout << "Prefix increment (++it): " << ft::outputPair(*it) << " | " << ft::outputPair(*++it) << std::endl;
    std::cout << "Postfix increment (it++): " << ft::outputPair(*it) << " | " << ft::outputPair(*it++) << " | " << ft::outputPair(*it) << std::endl;
    std::cout << "Prefix decrement (--it): " << ft::outputPair(*it) << " | " << ft::outputPair(*--it) << std::endl;
    std::cout << "Postfix decrement (it--): " << ft::outputPair(*it) << " | " << ft::outputPair(*it--) << " | " << ft::outputPair(*it) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Printing via reverse iterators (ascending) ---" << std::endl;
    for (it = v.rbegin(); it != v.rend(); ++it)
        std::cout << " " << ft::outputPair(*it) << " ";

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "--- Printing via reverse iterators (descending) ---" << std::endl;
    for (it = --v.rend(); it != v.rbegin(); --it)
        std::cout << " " << ft::outputPair(*it) << " ";
    std::cout << " " << ft::outputPair(*it) << std::endl;
}

int main()
{
    NAMESPACE::map<int, TYPE> m;
    for (size_t i = 36; i < 126; ++i)
        m.insert(NAMESPACE::make_pair(i - 36, TYPE(i)));
    ft::printMap(m);

    NAMESPACE::map<int, TYPE>::reverse_iterator       it = ++(++(++m.rbegin()));
    NAMESPACE::map<int, TYPE>::const_reverse_iterator cit = ++(++(++m.rbegin()));

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const reverse iterator ===" << std::endl;
    test_iterator(m, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const reverse iterator ===" << std::endl;
    test_iterator(m, cit);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:07:58 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:13:52 by lchapren         ###   ########.fr       */
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

    std::cout << "--- Printing via iterators (ascending) ---" << std::endl;
    for (it = v.begin(); it != v.end(); ++it)
        std::cout << " " << ft::outputPair(*it) << " ";

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "--- Printing via iterators (descending) ---" << std::endl;
    for (it = --v.end(); it != v.begin(); --it)
        std::cout << " " << ft::outputPair(*it) << " ";
    std::cout << " " << ft::outputPair(*it) << std::endl;
}

int main()
{
    NAMESPACE::map<int, TYPE> m;
    for (size_t i = 36; i < 126; ++i)
        m.insert(NAMESPACE::make_pair(i - 36, TYPE(i)));
    ft::printMap(m);

    NAMESPACE::map<int, TYPE>::iterator       it = ++(++(++m.begin()));
    NAMESPACE::map<int, TYPE>::const_iterator cit = ++(++(++m.begin()));

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const iterator ===" << std::endl;
    test_iterator(m, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const iterator ===" << std::endl;
    test_iterator(m, cit);
}
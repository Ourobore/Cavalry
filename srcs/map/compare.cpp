/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:38:10 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:12:42 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

template <class Compare>
void test_compare()
{
    NAMESPACE::map<int, TYPE, Compare> m;
    for (size_t i = 40; i < 60; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i + 10)));

    ft::printMap(m);
    const NAMESPACE::map<int, TYPE, Compare> n(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    typename NAMESPACE::map<int, TYPE, Compare>::key_compare kcomp = n.key_comp();
    (void)kcomp;

    std::cout << "key_compare() (key 1 < key 2):" << std::endl;
    std::cout << "  -> " << n.key_comp()(n.begin()->first, (--n.end())->first) << std::endl;

    std::cout << std::endl;

    std::cout << "key_compare() (key 1 > key 2):" << std::endl;
    std::cout << "  -> " << n.key_comp()((--n.end())->first, n.begin()->first) << std::endl;

    std::cout << std::endl;

    std::cout << "key_compare() (key 1 == key 2):" << std::endl;
    std::cout << "  -> " << n.key_comp()(n.begin()->first, n.begin()->first) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    typename NAMESPACE::map<int, TYPE, Compare>::value_compare vcomp = n.value_comp();
    (void)vcomp;

    std::cout << "value_compare() (value 1 < value 2):" << std::endl;
    std::cout << "  -> " << n.value_comp()(*n.begin(), *--n.end()) << std::endl;

    std::cout << std::endl;

    std::cout << "value_compare() (value 1 > value 2):" << std::endl;
    std::cout << "  -> " << n.value_comp()(*--n.end(), *n.begin()) << std::endl;

    std::cout << std::endl;

    std::cout << "value_compare() (value 1 == value 2):" << std::endl;
    std::cout << "  -> " << n.value_comp()(*n.begin(), *n.begin()) << std::endl;
}

int main()
{
    std::cout << "--- Compare ---" << std::endl;

    std::cout << std::endl;

    std::cout << "std::less is used:" << std::endl;
    test_compare<std::less<int> >();

    std::cout << std::endl;
    ft::printSeparator();
    ft::printSeparator();
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "std::greater is used:" << std::endl;
    test_compare<std::greater<int> >();
}
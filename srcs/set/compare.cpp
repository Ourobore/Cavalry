/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:38:10 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:29:16 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

template <class Compare>
void test_compare()
{
    NAMESPACE::set<TYPE, Compare> s;
    for (size_t i = 40; i < 60; ++i)
        s.insert(TYPE(i));

    ft::printSet(s);
    const NAMESPACE::set<TYPE, Compare> n(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    typename NAMESPACE::set<TYPE, Compare>::key_compare kcomp = n.key_comp();
    (void)kcomp;

    std::cout << "key_compare() (key 1 < key 2):" << std::endl;
    std::cout << "  -> " << n.key_comp()(*n.begin(), *--n.end()) << std::endl;

    std::cout << std::endl;

    std::cout << "key_compare() (key 1 > key 2):" << std::endl;
    std::cout << "  -> " << n.key_comp()(*--n.end(), *n.begin()) << std::endl;

    std::cout << std::endl;

    std::cout << "key_compare() (key 1 == key 2):" << std::endl;
    std::cout << "  -> " << n.key_comp()(*n.begin(), *n.begin()) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    typename NAMESPACE::set<TYPE, Compare>::value_compare vcomp = n.value_comp();
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
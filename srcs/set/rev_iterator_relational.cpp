/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_iterator_relational.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:31:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:20:34 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_set.hpp"

template <class Iterator>
void relational_iterator(NAMESPACE::set<TYPE>& s, Iterator it)
{
    Iterator itt = ++(++(++(++(++(++(++(++(s.rbegin()))))))));
    std::cout << "--- Relational operators (basics) ---" << std::endl;
    std::cout << "it == itt: " << (it == itt) << std::endl;
    std::cout << "it != itt: " << (it != itt) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Relational operators (it + n / it -n) ---" << std::endl;
    std::cout << *(--(--(--(it)))) << " | " << *(++(++(itt))) << std::endl;
    std::cout << "it == itt: " << (it == itt) << std::endl;
    std::cout << "it != itt: " << (it != itt) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Relational operators (begin()) ---" << std::endl;
    std::cout << "it == itt: " << (s.rbegin() == s.rbegin()) << std::endl;
    std::cout << "it != itt: " << (s.rbegin() != s.rbegin()) << std::endl;
}

int main()
{
    NAMESPACE::set<TYPE> s;
    for (size_t i = 36; i < 126; ++i)
        s.insert(TYPE(i));
    ft::printSet(s);

    NAMESPACE::set<TYPE>::reverse_iterator       it = --(--(--(--(--(--s.rend())))));
    NAMESPACE::set<TYPE>::const_reverse_iterator cit = --(--(--(--(--(--s.rend())))));

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const reverse iterator ===" << std::endl;
    relational_iterator(s, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const reverse iterator ===" << std::endl;
    relational_iterator(s, cit);
}
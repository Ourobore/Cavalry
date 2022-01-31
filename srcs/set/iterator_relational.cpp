/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_relational.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:12:56 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 19:06:58 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

template <class Iterator>
void relational_iterator(NAMESPACE::set<TYPE>& s, Iterator it)
{
    Iterator itt = ++(++(++(++(++(++(++(++(s.begin()))))))));
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
    std::cout << "it == itt: " << (s.begin() == s.begin()) << std::endl;
    std::cout << "it != itt: " << (s.begin() != s.begin()) << std::endl;
}

int main()
{
    NAMESPACE::set<TYPE> s;
    for (size_t i = 36; i < 126; ++i)
        s.insert(TYPE(i));
    ft::printSet(s);

    NAMESPACE::set<TYPE>::iterator       it = --(--(--(--(--(--s.end())))));
    NAMESPACE::set<TYPE>::const_iterator cit = --(--(--(--(--(--s.end())))));

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const iterator ===" << std::endl;
    relational_iterator(s, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const iterator ===" << std::endl;
    relational_iterator(s, cit);
}
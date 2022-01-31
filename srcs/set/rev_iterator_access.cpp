/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_iterator_access.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:33:02 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 19:15:51 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

template <class Iterator>
void iterator_access(NAMESPACE::set<Foo> s, Iterator it)
{
    std::cout << "--- Dereference access ---" << std::endl;
    std::cout << "it->function(): ";
    (*it).helloWorld();
    std::cout << "it->function(): " << (*it).getBar() << std::endl;
    std::cout << "(it + n)->function(): " << (*(++(++(++(++it))))).getBar() << std::endl;
    std::cout << "(it - n)->function(): " << (*(--(--(--it)))).getBar() << std::endl;

    std::cout << std::endl;

    std::cout << "--- Arrow access ---" << std::endl;
    std::cout << "it->function(): ";
    it->helloWorld();
    std::cout << "it->function(): " << it->getBar() << std::endl;
    std::cout << "(it + n)->function(): " << ((++(++(++(++it)))))->getBar() << std::endl;
    std::cout << "(it - n)->function(): " << ((--(--(--it))))->getBar() << std::endl;

    std::cout << std::endl;
    (void)s;
}

int main()
{
    NAMESPACE::set<Foo> sfoo;
    for (size_t i = 0; i < 50; ++i)
        sfoo.insert(Foo(i));
    ft::printSet(sfoo);

    NAMESPACE::set<Foo>::reverse_iterator       it = ++(++(++(++(++(++(++(sfoo.rbegin())))))));
    NAMESPACE::set<Foo>::const_reverse_iterator cit = ++(++(++(++(++(++(++(sfoo.rbegin())))))));

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const reverse iterator ===" << std::endl;
    iterator_access(sfoo, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const reverse iterator ===" << std::endl;
    iterator_access(sfoo, cit);
}
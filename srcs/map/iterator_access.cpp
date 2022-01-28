/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_access.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:23:13 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/28 10:38:48 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

template <class Iterator>
void iterator_access(NAMESPACE::map<int, Foo> m, Iterator it)
{
    std::cout << "--- Dereference access ---" << std::endl;
    std::cout << "it->function(): ";
    it->second.helloWorld();
    std::cout << "it->function(): " << (*it).second.getBar() << std::endl;
    std::cout << "(it + n)->function(): " << (*(++(++(++(++it))))).second.getBar() << std::endl;
    std::cout << "(it - n)->function(): " << (*(--(--(--it)))).second.getBar() << std::endl;

    std::cout << std::endl;

    std::cout << "--- Arrow access ---" << std::endl;
    std::cout << "it->function(): ";
    it->second.helloWorld();
    std::cout << "it->function(): " << it->second.getBar() << std::endl;
    std::cout << "(it + n)->function(): " << ((++(++(++(++it)))))->second.getBar() << std::endl;
    std::cout << "(it - n)->function(): " << ((--(--(--it))))->second.getBar() << std::endl;

    std::cout << std::endl;
    (void)m;
}

int main()
{
    NAMESPACE::map<int, Foo> mfoo;
    for (size_t i = 0; i < 50; ++i)
        mfoo[i] = Foo(i);
    ft::printMap(mfoo);

    NAMESPACE::map<int, Foo>::iterator       it = ++(++(++(++(++(++(++(mfoo.begin())))))));
    NAMESPACE::map<int, Foo>::const_iterator cit = ++(++(++(++(++(++(++(mfoo.begin())))))));

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const iterator ===" << std::endl;
    iterator_access(mfoo, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const iterator ===" << std::endl;
    iterator_access(mfoo, cit);
}
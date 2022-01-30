/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_iterator_access.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:46:37 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 18:46:37 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

template <class Iterator>
void iterator_access(NAMESPACE::vector<Foo> v, Iterator it)
{
    std::cout << "--- Dereference access ---" << std::endl;
    std::cout << "it->function(): ";
    it->helloWorld();
    std::cout << "it->function(): " << (*it).getBar() << std::endl;
    std::cout << "(it + n)->function(): " << (*(it + 21)).getBar() << std::endl;
    std::cout << "(it - n)->function(): " << (*(it - 3)).getBar() << std::endl;

    std::cout << std::endl;

    std::cout << "--- Arrow access ---" << std::endl;
    std::cout << "it->function(): ";
    it->helloWorld();
    std::cout << "it->function(): " << it->getBar() << std::endl;
    std::cout << "(it + n)->function(): " << (it + 21)->getBar() << std::endl;
    std::cout << "(it - n)->function(): " << (it - 3)->getBar() << std::endl;

    std::cout << std::endl;

    std::cout << "--- [] access ---" << std::endl;
    it = v.rbegin();
    std::cout << "it->function(): ";
    it[3].helloWorld();
    std::cout << "it->function(): " << it[7].getBar() << std::endl;
    std::cout << "(it + n)->function(): " << (it + 21)[5].getBar() << std::endl;
    std::cout << "(it - n)->function(): " << (it - 3)[15].getBar() << std::endl;
}

int main()
{
    NAMESPACE::vector<Foo > vfoo;
    for (size_t i = 0; i < 50; ++i)
        vfoo.push_back(Foo(i));
    ft::printVector(vfoo, CAPACITY);

    NAMESPACE::vector<Foo>::reverse_iterator       it = vfoo.rbegin() + 21;
    NAMESPACE::vector<Foo>::const_reverse_iterator cit = vfoo.rbegin() + 21;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const reverse iterator ===" << std::endl;
    iterator_access(vfoo, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const reverse iterator ===" << std::endl;
    iterator_access(vfoo, cit);
}
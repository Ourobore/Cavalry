/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_iterator_relational.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:31:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 17:32:35 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

template <class Iterator>
void relational_iterator(NAMESPACE::map<int, TYPE>& m, Iterator it)
{
    Iterator itt = ++(++(++(++(++(++(++(++(m.rbegin()))))))));
    std::cout << "--- Relational operators (basics) ---" << std::endl;
    std::cout << "it == itt: " << (it == itt) << std::endl;
    std::cout << "it != itt: " << (it != itt) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Relational operators (it + n / it -n) ---" << std::endl;
    std::cout << ft::outputPair(*(--(--(--(it))))) << " | " << ft::outputPair(*(++(++(itt)))) << std::endl;
    std::cout << "it == itt: " << (it == itt) << std::endl;
    std::cout << "it != itt: " << (it != itt) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Relational operators (begin()) ---" << std::endl;
    std::cout << "it == itt: " << (m.rbegin() == m.rbegin()) << std::endl;
    std::cout << "it != itt: " << (m.rbegin() != m.rbegin()) << std::endl;
}

int main()
{
    NAMESPACE::map<int, TYPE> m;
    for (size_t i = 36; i < 126; ++i)
        m[i] = TYPE(i);
    ft::printMap(m);

    NAMESPACE::map<int, TYPE>::reverse_iterator       it = --(--(--(--(--(--m.rend())))));
    NAMESPACE::map<int, TYPE>::const_reverse_iterator cit = --(--(--(--(--(--m.rend())))));

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const reverse iterator ===" << std::endl;
    relational_iterator(m, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const reverse iterator ===" << std::endl;
    relational_iterator(m, cit);
}
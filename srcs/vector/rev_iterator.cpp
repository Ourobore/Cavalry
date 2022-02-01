/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_iterator.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:46:47 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:25:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

template <class Iterator>
void test_iterator(NAMESPACE::vector<TYPE> v, Iterator it)
{
    std::cout << "--- Increments and decrements ---" << std::endl;
    std::cout << "Prefix increment (++it): " << *it << " | " << *++it << std::endl;
    std::cout << "Postfix increment (it++): " << *it << " | " << *it++ << " | " << *it << std::endl;
    std::cout << "Prefix decrement (--it): " << *it << " | " << *--it << std::endl;
    std::cout << "Postfix decrement (it--): " << *it << " | " << *it-- << " | " << *it << std::endl;

    std::cout << std::endl;

    std::cout << "--- Printing via iterators (ascending) ---" << std::endl;
    for (it = v.rbegin(); it != v.rend(); ++it)
        std::cout << " " << *it << " ";
    std::cout << std::endl
              << std::endl;

    std::cout << "--- Printing via iterators (descending) ---" << std::endl;
    for (it = v.rend() - 1; it != v.rbegin(); --it)
        std::cout << " " << *it << " ";
    std::cout << " " << *it << " ";

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "--- Iterator arithmetics---" << std::endl;
    it = v.rbegin() + 42;
    NAMESPACE::vector<TYPE>::const_reverse_iterator cit = v.rbegin() + 7;

    std::cout << "it + n: " << *(it + 9) << std::endl;
    std::cout << "n + it: " << *(9 + it) << std::endl;
    std::cout << "it - n: " << *(it - 9) << std::endl;
    std::cout << "it - it: " << it - v.rbegin() << std::endl;
    it += 2;
    std::cout << "it += n: " << *it << std::endl;
    it -= 2;
    std::cout << "it -= n: " << *it << std::endl;
    std::cout << "const it - it: " << cit - it << std::endl;
    std::cout << "it - const it: " << it - cit << std::endl;
}

int main()
{
    NAMESPACE::vector<TYPE> v;
    for (size_t i = 36; i < 126; ++i)
        v.push_back(TYPE(i));
    ft::printVector(v, CAPACITY);

    NAMESPACE::vector<TYPE>::reverse_iterator       it = v.rbegin() + 10;
    NAMESPACE::vector<TYPE>::const_reverse_iterator cit = v.rbegin() + 10;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const reverse iterator ===" << std::endl;
    test_iterator(v, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const reverse iterator ===" << std::endl;
    test_iterator(v, cit);
}
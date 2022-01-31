/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relational.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:31:34 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 20:51:41 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    std::cout << "--- Relational ---" << std::endl;
    NAMESPACE::set<TYPE> s1;
    for (size_t i = 40; i < 60; ++i)
        s1.insert(TYPE(i));

    NAMESPACE::set<TYPE> s2;
    for (size_t i = 60 - 1; i >= 40; --i)
        s2.insert(TYPE(i));

    NAMESPACE::set<TYPE> s3;
    for (size_t i = 0; i < 20; ++i)
        s3.insert(TYPE(42));

    NAMESPACE::set<TYPE> s4(s3);

    std::cout << std::endl;

    std::cout << "s1 IS less than s2:" << std::endl;
    std::cout << "  -> s1" << std::endl;
    ft::printSet(s1);
    std::cout << "  -> s2" << std::endl;
    ft::printSet(s2);

    std::cout << std::endl;

    std::cout << "s1 == s2: " << (s1 == s2) << std::endl;
    std::cout << "s1 != s2: " << (s1 != s2) << std::endl;
    std::cout << "s1 < s2: " << (s1 < s2) << std::endl;
    std::cout << "s1 > s2: " << (s1 > s2) << std::endl;
    std::cout << "s1 <= s2: " << (s1 <= s2) << std::endl;
    std::cout << "s1 >= s2: " << (s1 >= s2) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "s2 IS more than s1:" << std::endl;
    std::cout << "  -> s1" << std::endl;
    ft::printSet(s1);
    std::cout << "  -> s2" << std::endl;
    ft::printSet(s2);

    std::cout << std::endl;

    std::cout << "s2 == s1: " << (s2 == s1) << std::endl;
    std::cout << "s2 != s1: " << (s2 != s1) << std::endl;
    std::cout << "s2 < s1: " << (s2 < s1) << std::endl;
    std::cout << "s2 > s1: " << (s2 > s1) << std::endl;
    std::cout << "s2 <= s1: " << (s2 <= s1) << std::endl;
    std::cout << "s2 >= s1: " << (s2 >= s1) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "s3 IS equal to s4:" << std::endl;
    std::cout << "  -> s3" << std::endl;
    ft::printSet(s3);
    std::cout << "  -> s4" << std::endl;
    ft::printSet(s4);

    std::cout << std::endl;

    std::cout << "s3 == s4: " << (s3 == s4) << std::endl;
    std::cout << "s3 != s4: " << (s3 != s4) << std::endl;
    std::cout << "s3 < s4: " << (s3 < s4) << std::endl;
    std::cout << "s3 > s4: " << (s3 > s4) << std::endl;
    std::cout << "s3 <= s4: " << (s3 <= s4) << std::endl;
    std::cout << "s3 >= s4: " << (s3 >= s4) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    s3.insert(TYPE(90));
    s4.insert(TYPE(100));
    std::cout << "s3 IS ALMOST equal to s4 (last elem not equal):" << std::endl;
    std::cout << "  -> s3" << std::endl;
    ft::printSet(s3);
    std::cout << "  -> s4" << std::endl;
    ft::printSet(s4);

    std::cout << std::endl;

    std::cout << "s3 == s4: " << (s3 == s4) << std::endl;
    std::cout << "s3 != s4: " << (s3 != s4) << std::endl;
    std::cout << "s3 < s4: " << (s3 < s4) << std::endl;
    std::cout << "s3 > s4: " << (s3 > s4) << std::endl;
    std::cout << "s3 <= s4: " << (s3 <= s4) << std::endl;
    std::cout << "s3 >= s4: " << (s3 >= s4) << std::endl;
}
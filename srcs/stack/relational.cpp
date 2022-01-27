/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   relational.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:31:34 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 15:53:09 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    std::cout << "--- Relational ---" << std::endl;
    NAMESPACE::stack<TYPE> s1;
    for (size_t i = 40; i < 60; ++i)
        s1.push(TYPE(i));

    NAMESPACE::stack<TYPE> s2;
    for (size_t i = 60 - 1; i >= 40; --i)
        s2.push(TYPE(i));

    NAMESPACE::stack<TYPE> s3;
    for (size_t i = 40; i < 60; ++i)
        s3.push(TYPE(42));

    NAMESPACE::stack<TYPE> s4(s3);
    // for (size_t i = 40; i < 60; ++i)
    //     s4.push(TYPE(42));

    std::cout << std::endl;

    // ##################################################################################

    std::cout << "s1 IS less than s2:" << std::endl;
    std::cout << "  -> s1" << std::endl;
    ft::printStack(s1);
    std::cout << "  -> s2" << std::endl;
    ft::printStack(s2);

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

    // ##################################################################################

    std::cout << "s2 IS more than s1:" << std::endl;
    std::cout << "  -> s1" << std::endl;
    ft::printStack(s1);
    std::cout << "  -> s2" << std::endl;
    ft::printStack(s2);

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

    // ##################################################################################

    std::cout << "s3 IS equal to s4:" << std::endl;
    std::cout << "  -> s3" << std::endl;
    ft::printStack(s3);
    std::cout << "  -> s4" << std::endl;
    ft::printStack(s4);

    std::cout << std::endl;

    std::cout << "s3 == s1: " << (s3 == s4) << std::endl;
    std::cout << "s3 != s1: " << (s3 != s4) << std::endl;
    std::cout << "s3 < s1: " << (s3 < s4) << std::endl;
    std::cout << "s3 > s1: " << (s3 > s4) << std::endl;
    std::cout << "s3 <= s1: " << (s3 <= s4) << std::endl;
    std::cout << "s3 >= s1: " << (s3 >= s4) << std::endl;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    s3.top() = TYPE(90);
    s4.top() = TYPE(100);
    std::cout << "s3 IS ALMOST equal to s4 (last elem not equal):" << std::endl;
    std::cout << "  -> s3" << std::endl;
    ft::printStack(s3);
    std::cout << "  -> s4" << std::endl;
    ft::printStack(s4);

    std::cout << std::endl;

    std::cout << "s3 == s1: " << (s3 == s4) << std::endl;
    std::cout << "s3 != s1: " << (s3 != s4) << std::endl;
    std::cout << "s3 < s1: " << (s3 < s4) << std::endl;
    std::cout << "s3 > s1: " << (s3 > s4) << std::endl;
    std::cout << "s3 <= s1: " << (s3 <= s4) << std::endl;
    std::cout << "s3 >= s1: " << (s3 >= s4) << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:45:59 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 18:45:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    {
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "--- Empty vector (default constructor) ---" << std::endl;

        NAMESPACE::vector<TYPE> v;
        ft::printVector(v, CAPACITY);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################
    {
        std::cout << "--- Filled vector (fill constructor) ---" << std::endl;

        NAMESPACE::vector<TYPE> v0(21);
        ft::printVector(v0, CAPACITY);

        NAMESPACE::vector<TYPE> v3(21, 3);
        ft::printVector(v3, CAPACITY);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################

    NAMESPACE::vector<TYPE>           vec(42);
    NAMESPACE::vector<TYPE>::iterator it;

    int val = 0;
    for (it = vec.begin(); it != vec.end(); ++it, ++val)
        *it = val;
    ft::printVector(vec, CAPACITY);

    // #########################################################
    {
        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "--- Range vector (range constructor) ---" << std::endl;

        NAMESPACE::vector<TYPE> v(vec.begin(), vec.end());
        ft::printVector(v, CAPACITY);

        NAMESPACE::vector<TYPE> vv(vec.begin() + 3, vec.end() - 6);
        ft::printVector(vv, CAPACITY);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################
    {
        std::cout << "--- Copied vector (copy constructor) ---" << std::endl;

        NAMESPACE::vector<TYPE> v(vec);
        NAMESPACE::vector<TYPE> v1;
        NAMESPACE::vector<TYPE> v2(v1);
        ft::printVector(v, CAPACITY);
        ft::printVector(v1, CAPACITY);
        ft::printVector(v2, CAPACITY);
    }
    // #########################################################
    {
        std::cout << "--- Assignement vector (operator=) ---" << std::endl;

        NAMESPACE::vector<TYPE> v = vec;
        ft::printVector(vec, CAPACITY);
        ft::printVector(v, CAPACITY);
        std::cout << std::endl;
        vec.pop_back();
        v = vec;
        ft::printVector(vec, CAPACITY);
        ft::printVector(v, CAPACITY);
    }
}
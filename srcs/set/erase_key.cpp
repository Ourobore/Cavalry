/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_key.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:17:41 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 20:48:24 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::set<TYPE> s;
    for (size_t i = 40; i < 110; ++i)
        s.insert(TYPE(i));

    std::cout << "--- Erase: key ---" << std::endl;
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Erasing an existing key:" << std::endl;
    std::cout << "(Erasing key '70')" << std::endl;
    std::cout << "  -> Number of key erased: " << s.erase(70) << std::endl;
    ft::printSet(s);
    std::cout << std::endl;
    std::cout << "(Erasing key '95')" << std::endl;
    std::cout << "  -> Number of key erased: " << s.erase(95) << std::endl;
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Erasing a NON existing key:" << std::endl;
    std::cout << "(Erasing key '30')" << std::endl;
    std::cout << "  -> Number of key erased: " << s.erase(30) << std::endl;
    ft::printSet(s);
    std::cout << std::endl;
    std::cout << "(Erasing key '115')" << std::endl;
    std::cout << "  -> Number of key erased: " << s.erase(115) << std::endl;
    ft::printSet(s);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Erasing everything:" << std::endl;
    std::cout << "(Number of key erased should be '1' every time, except for those erased before)" << std::endl;

    int key = 109;
    while (s.begin() != s.end())
    {
        std::cout << "  -> Number of key erased: " << s.erase(key) << ", Erasing key '" << key << "'" << std::endl;
        ft::printSet(s);
        --key;
    }
}
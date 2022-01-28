/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erase_key.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:17:41 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/28 14:27:27 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::map<int, TYPE> m;
    for (size_t i = 40; i < 110; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i + 10)));

    std::cout << "--- Erase: key ---" << std::endl;
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Erasing an existing key:" << std::endl;
    std::cout << "(Erasing key '70')" << std::endl;
    std::cout << "  -> Number of key erased: " << m.erase(70) << std::endl;
    ft::printMap(m);
    std::cout << std::endl;
    std::cout << "(Erasing key '95')" << std::endl;
    std::cout << "  -> Number of key erased: " << m.erase(95) << std::endl;
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Erasing a NON existing key:" << std::endl;
    std::cout << "(Erasing key '30')" << std::endl;
    std::cout << "  -> Number of key erased: " << m.erase(30) << std::endl;
    ft::printMap(m);
    std::cout << std::endl;
    std::cout << "(Erasing key '115')" << std::endl;
    std::cout << "  -> Number of key erased: " << m.erase(115) << std::endl;
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "Erasing everything:" << std::endl;
    std::cout << "(Number of key erased should be '1' every time, except for those erased before)" << std::endl;

    int key = 109;
    while (m.begin() != m.end())
    {
        std::cout << "  -> Number of key erased: " << m.erase(key) << ", Erasing key '" << key << "'" << std::endl;
        ft::printMap(m);
        --key;
    }
}
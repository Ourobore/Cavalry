/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_access.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:23:17 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:12:46 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_map.hpp"

template <class Map>
void access_map(Map m)
{
    std::cout << "--- Access: [] operator ---" << std::endl;
    std::cout << "m[i]: " << m[15] << std::endl;
    std::cout << "m[i + n]: " << m[15 + 7] << std::endl;
    std::cout << "m[i - n]: " << m[15 - 7] << std::endl;
    std::cout << "m[i * n]: " << m[15 * 3] << std::endl;

    std::cout << std::endl;

    std::cout << "--- Modifying: [] operator ---" << std::endl;
    std::cout << "m[i]: " << m[45] << std::endl;
    std::cout << "m[i] += n: " << (m[45] += 7) << std::endl;
    std::cout << "m[i] -= n: " << (m[45] -= 7) << std::endl;
    std::cout << "m[i] *= n: " << (m[45] *= 3) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Access: via iterator ---" << std::endl;
    NAMESPACE::map<int, TYPE>::iterator it;
    for (it = m.begin(); it != m.end();)
    {
        std::cout << ft::outputPair(*it);
        ++it;
        if (it != m.end())
            std::cout << ", ";
    }
    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << "--- Modifying: via iterator ---" << std::endl;
    it = m.begin();
    std::cout << "Before: " << ft::outputPair(*it) << std::endl;
    it->second = TYPE(42);
    std::cout << "After: " << ft::outputPair(*it) << std::endl;
}

int main()
{
    NAMESPACE::map<int, TYPE> m;
    for (size_t i = 36; i < 126; ++i)
        m.insert(NAMESPACE::make_pair(i, TYPE(i * 10)));
    ft::printMap(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const map ===" << std::endl;
    access_map(m);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    const NAMESPACE::map<int, TYPE> cm(m);
    std::cout << "=== Const vector ===" << std::endl;
    access_map(cm);
}
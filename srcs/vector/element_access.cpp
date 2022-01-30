/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_access.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:46:04 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 18:46:05 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

template <class Vector>
void access_vector(Vector v)
{
    std::cout << "--- Access: [] operator ---" << std::endl;
    std::cout << "v[i]: " << v[15] << std::endl;
    std::cout << "v[i + n]: " << v[15 + 7] << std::endl;
    std::cout << "v[i - n]: " << v[15 - 7] << std::endl;
    std::cout << "v[i * n]: " << v[15 * 3] << std::endl;

    std::cout << std::endl;

    std::cout << "--- Access: at() function ---" << std::endl;
    std::cout << "v.at(i): " << v.at(15) << std::endl;
    std::cout << "v.at(i + n): " << v.at(15 + 7) << std::endl;
    std::cout << "v.at(i - n): " << v.at(15 - 7) << std::endl;
    std::cout << "v.at(i * n): " << v.at(15 * 3) << std::endl;
    try
    {
        std::cout << "v.at(out_of_range): ";
        TYPE& value = v.at(150);
        (void)value;
        std::cout << "Bad! std::out_of_range was not thrown!" << std::endl;
    }
    catch (std::out_of_range)
    {
        std::cout << "Good! std::out_of_range was thrown and catched!" << std::endl;
    }

    std::cout << std::endl;

    std::cout << "--- Modifying: [] operator ---" << std::endl;
    std::cout << "v[i]: " << v[45] << std::endl;
    std::cout << "v[i] += n: " << (v[45] += 7) << std::endl;
    std::cout << "v[i] -= n: " << (v[45] -= 7) << std::endl;
    std::cout << "v[i] *= n: " << (v[45] *= 3) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Modifying: at() function ---" << std::endl;
    std::cout << "v.at(i): " << v.at(45) << std::endl;
    std::cout << "v.at(i) += n: " << (v.at(45) += 7) << std::endl;
    std::cout << "v.at(i) -= n: " << (v.at(45) -= 7) << std::endl;
    std::cout << "v.at(i) *= n: " << (v.at(45) *= 3) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Access and Modifying: front() function ---" << std::endl;
    std::cout << "v.front(): " << v.front() << std::endl;
    std::cout << "v.front() + n: " << v.front() + 21 << std::endl;
    std::cout << "v.front() - n: " << v.front() - 21 << std::endl;
    std::cout << "v.front() * n: " << v.front() * 4 << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "v.front(): " << v.front() << std::endl;
    std::cout << "v.front() += n: " << (v.front() += 21) << std::endl;
    std::cout << "v.front() -= n: " << (v.front() -= 21) << std::endl;
    std::cout << "v.front() *= n: " << (v.front() *= 4) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Access and Modifying: back() function ---" << std::endl;
    std::cout << "v.front(): " << v.back() << std::endl;
    std::cout << "v.front() + n: " << v.back() + 21 << std::endl;
    std::cout << "v.front() - n: " << v.back() - 21 << std::endl;
    std::cout << "v.front() * n: " << v.back() * 4 << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "v.front(): " << v.back() << std::endl;
    std::cout << "v.front() += n: " << (v.back() += 21) << std::endl;
    std::cout << "v.front() -= n: " << (v.back() -= 21) << std::endl;
    std::cout << "v.front() *= n: " << (v.back() *= 4) << std::endl;
}

int main()
{
    NAMESPACE::vector<TYPE> v;
    for (size_t i = 36; i < 126; ++i)
        v.push_back(TYPE(i));
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const vector ===" << std::endl;
    access_vector(v);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    const NAMESPACE::vector<int> cv(v);
    std::cout << "=== Const vector ===" << std::endl;
    access_vector(cv);
}
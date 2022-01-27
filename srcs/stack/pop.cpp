/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:24:38 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 15:29:22 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v;
    for (size_t i = 40; i < 120; ++i)
        v.push_back(TYPE(i));

    std::cout << "--- Pop ---" << std::endl;
    NAMESPACE::stack<TYPE, NAMESPACE::vector<TYPE> > s(v);
    ft::printStack(s);

    // Yeah... Not much to test if just popping
    while (s.size())
    {
        s.pop();
        ft::printStack(s);
    }
}
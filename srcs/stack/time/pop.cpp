/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:34:20 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 18:42:20 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::stack<TYPE> s;

    std::cout << "--- Pop (default) ---" << std::endl;

    for (size_t i = 0; i < 10000000; ++i)
        s.push(TYPE(42));

    while (s.size())
        s.pop();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:31:27 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 18:31:59 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::stack<TYPE> s;

    std::cout << "--- Push (default) ---" << std::endl;

    for (size_t i = 0; i < 10000000; ++i)
        s.push(TYPE(42));
}
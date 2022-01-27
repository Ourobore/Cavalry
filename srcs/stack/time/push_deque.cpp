/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_deque.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:32:26 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 18:33:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::stack<TYPE, std::deque<TYPE> > s;

    std::cout << "--- Push (deque) ---" << std::endl;

    for (size_t i = 0; i < 10000000; ++i)
        s.push(TYPE(42));
}
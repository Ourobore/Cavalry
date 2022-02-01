/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_deque.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:44:23 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:23:43 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_stack.hpp"

int main()
{
    std::deque<TYPE>                          init(10000000, TYPE(42));
    NAMESPACE::stack<TYPE, std::deque<TYPE> > s(init);

    std::cout << "--- Pop (deque) ---" << std::endl;

    while (s.size())
        s.pop();
}
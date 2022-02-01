/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_vector.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:43:06 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:23:48 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_stack.hpp"

int main()
{
    NAMESPACE::vector<TYPE>                          init(10000000, TYPE(42));
    NAMESPACE::stack<TYPE, NAMESPACE::vector<TYPE> > s(init);

    std::cout << "--- Pop (vector) ---" << std::endl;

    while (s.size())
        s.pop();
}
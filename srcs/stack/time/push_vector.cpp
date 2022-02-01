/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_vector.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:29:05 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:23:56 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_stack.hpp"

int main()
{
    NAMESPACE::stack<TYPE, NAMESPACE::vector<TYPE> > s;

    std::cout << "--- Push (vector) ---" << std::endl;

    for (size_t i = 0; i < 10000000; ++i)
        s.push(TYPE(42));
}
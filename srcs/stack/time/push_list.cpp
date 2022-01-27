/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_list.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:32:52 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 18:33:04 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::stack<TYPE, std::list<TYPE> > s;

    std::cout << "--- Push (list) ---" << std::endl;

    for (size_t i = 0; i < 10000000; ++i)
        s.push(TYPE(42));
}
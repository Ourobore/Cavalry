/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_list.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:44:48 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 18:45:01 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    std::list<TYPE>                          init(10000000, TYPE(42));
    NAMESPACE::stack<TYPE, std::list<TYPE> > s(init);

    std::cout << "--- Pop (list) ---" << std::endl;

    while (s.size())
        s.pop();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_fill_end.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:44:17 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/22 17:57:41 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v;

    // At the end
    for (size_t i = 0; i < 10000; ++i)
        v.insert(v.end(), 1000, TYPE(42));
}
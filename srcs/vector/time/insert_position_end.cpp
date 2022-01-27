/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_position_end.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:15:29 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 09:32:35 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v;

    // At the end (with 100 times more inserts than insert_position_begin)
    for (size_t i = 0; i < 2000000; ++i)
        v.insert(v.end(), TYPE(42));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_position_end.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:15:29 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/22 17:19:18 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v;

    // At the end
    for (size_t i = 0; i < 10000000; ++i)
        v.insert(v.end(), TYPE(42));
}
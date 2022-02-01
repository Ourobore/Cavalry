/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declare_const_type.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:51:15 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:27:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_vector.hpp"

int main()
{
    // Can't declare instance on const type
    NAMESPACE::vector<const TYPE> v;
}
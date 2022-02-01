/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:01:31 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:26:32 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_vector.hpp"

int main()
{
    NAMESPACE::vector<TYPE> v1(10000000, TYPE(42));
    NAMESPACE::vector<TYPE> v2(10000000, TYPE(84));

    v1.assign(v2.begin(), v2.end());
}
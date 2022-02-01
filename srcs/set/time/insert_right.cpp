/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_right.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:35:01 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:21:38 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_set.hpp"

int main()
{
    // Inserting value_type that is greater every time
    NAMESPACE::set<int> s;
    for (int i = 0; i < 100000; ++i)
        s.insert(i);
}
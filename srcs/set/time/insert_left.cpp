/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_left.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:36:27 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:21:31 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_set.hpp"

int main()
{
    // Inserting value_type that is smaller every time
    NAMESPACE::set<int > s;
    for (int i = 100000 - 1; i >= 0; --i)
        s.insert(i);
}
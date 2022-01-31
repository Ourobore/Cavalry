/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_left.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:36:27 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 20:38:17 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // Inserting value_type that is smaller every time
    NAMESPACE::set<int > s;
    for (int i = 100000 - 1; i >= 0; --i)
        s.insert(i);
}
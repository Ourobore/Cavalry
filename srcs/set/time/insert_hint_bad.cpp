/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hint_bad.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:55:16 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:21:23 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_set.hpp"

int main()
{
    // Inserting with a hint that is not correct
    NAMESPACE::set<int> s;
    for (int i = 0; i < 100000; ++i)
        s.insert(i);
}
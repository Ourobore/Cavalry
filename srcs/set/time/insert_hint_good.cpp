/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hint_good.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:56:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:21:26 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_set.hpp"

int main()
{
    // Inserting with a hint that is correct
    NAMESPACE::set<int> s;
    s.insert(s.begin(), 0);
    for (int i = 1; i < 100000; ++i)
        s.insert(--s.end(), i);
}
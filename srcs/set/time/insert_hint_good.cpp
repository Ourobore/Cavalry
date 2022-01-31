/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hint_good.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:56:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 20:37:35 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // Inserting with a hint that is correct
    NAMESPACE::set<int> s;
    s.insert(s.begin(), 0);
    for (int i = 1; i < 100000; ++i)
        s.insert(--s.end(), i);
}
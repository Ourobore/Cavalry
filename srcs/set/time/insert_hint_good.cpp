/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hint_good.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:56:51 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 12:08:53 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // Inserting with a hint that is correct
    NAMESPACE::map< int, int > m;
    m.insert(m.begin(), NAMESPACE::make_pair(0, 0));
    for (int i = 1; i < 100000; ++i)
        m.insert(--m.end(), NAMESPACE::make_pair(i, i));
}
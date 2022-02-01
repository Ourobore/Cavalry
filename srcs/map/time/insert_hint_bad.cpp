/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hint_bad.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:55:16 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:16:08 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_map.hpp"

int main()
{
    // Inserting with a hint that is not correct
    NAMESPACE::map< int, int > m;
    for (int i = 0; i < 100000; ++i)
        m.insert(m.begin(), NAMESPACE::make_pair(i, i));
}
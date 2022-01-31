/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hint_bad.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:55:16 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 11:56:34 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // Inserting with a hint that is not correct
    NAMESPACE::map< int, int > m;
    for (int i = 0; i < 100000; ++i)
        m.insert(m.begin(), NAMESPACE::make_pair(i, i));
}
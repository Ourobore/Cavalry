/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:12:56 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/30 12:17:01 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // Inserting a range of InputIterator

    std::deque<NAMESPACE::pair<int, int> > d;
    for (int i = 0; i < 100000; ++i)
        d.push_back(NAMESPACE::make_pair(i, i));

    NAMESPACE::map< int, int > m;
    m.insert(d.begin(), d.end());
}
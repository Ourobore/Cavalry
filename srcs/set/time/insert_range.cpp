/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_range.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 12:12:56 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:21:35 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test_set.hpp"

int main()
{
    // Inserting a range of InputIterator

    std::deque<int> d;
    for (int i = 0; i < 100000; ++i)
        d.push_back(i);

    NAMESPACE::set<int> s;
    s.insert(d.begin(), d.end());
}
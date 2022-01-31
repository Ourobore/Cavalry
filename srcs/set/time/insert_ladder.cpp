/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_ladder.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:45:26 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/31 20:38:03 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    // Insert values from min - n and max - n. Map will look like a ladder
    NAMESPACE::set<int> s;
    size_t              min = 0;
    size_t              max = 100000;
    bool                flag = true;

    for (size_t i = 0; i < (max / 2) - 1;)
    {
        if (flag)
        {
            s.insert(min + i);
            flag = false;
        }
        else
        {
            s.insert(max - i);
            flag = true;
            ++i;
        }
    }
}

// Map will look something like this (if not balanced)
/*

   0 -
      -----
           - 10000
      -----
   1 -
      -----
           - 9999
      -----
   2 -
      -----
     .......
     .......
     .......
      -----
           - 5001
      -----
4999 -
      -----
           - 5000

*/
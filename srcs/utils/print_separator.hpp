/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_separator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:14:13 by lchapren          #+#    #+#             */
/*   Updated: 2021/12/07 15:15:13 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_SEPARATOR_HPP
#define PRINT_SEPARATOR_HPP

#include <iomanip>
#include <iostream>

namespace ft
{

void printSeparator(char separator = '#', size_t nb_lines = 3, size_t width = 60)
{
    for (size_t lines = 0; lines < nb_lines; ++lines)
    {
        for (size_t columns = 0; columns < width; ++columns)
            std::cout << separator;
        std::cout << std::endl;
    }
}

} // namespace ft

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_traits.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:10:20 by lchapren          #+#    #+#             */
/*   Updated: 2021/12/07 15:20:06 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_TRAITS_HPP
#define PRINT_TRAITS_HPP

#include <iomanip>
#include <iostream>
#include <typeinfo>

#include "IteratorTraits.hpp"

namespace ft
{

// Foward declaration
template <class Iterator>
struct iterator_traits;

/* Print iterator traits */
template <class Iterator>
void printTraits(Iterator it)
{
    typename NAMESPACE::iterator_traits<Iterator>::difference_type   difference_type;
    typename NAMESPACE::iterator_traits<Iterator>::value_type        value_type;
    typename NAMESPACE::iterator_traits<Iterator>::pointer           pointer;
    typename NAMESPACE::iterator_traits<Iterator>::reference         reference = *it;
    typename NAMESPACE::iterator_traits<Iterator>::iterator_category category;

    size_t width = 20;

    std::cout << std::endl
              << "##### Iterator Traits #####" << std::endl;

    std::cout << std::setw(width) << std::left << "Difference type: ";
    std::cout << typeid(difference_type).name() << std::endl;

    std::cout << std::setw(width) << std::left << "Value type: ";
    std::cout << typeid(value_type).name() << std::endl;

    std::cout << std::setw(width) << std::left << "Pointer: ";
    std::cout << typeid(pointer).name() << std::endl;

    std::cout << std::setw(width) << std::left << "Reference: ";
    std::cout << typeid(reference).name() << std::endl;

    std::cout << std::setw(width) << std::left << "Category: ";
    std::cout << typeid(category).name() << std::endl;

    std::cout << "###########################" << std::endl
              << std::endl;
    ;
}

} // namespace ft

#endif
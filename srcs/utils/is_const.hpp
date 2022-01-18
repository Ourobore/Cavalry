/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_const.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:19:54 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/18 13:19:55 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_CONST_HPP
#define IS_CONST_HPP

namespace ft
{

/* Templated struct to determinate if a type is const or not */
template < class T >
struct is_const
{
    const static bool value = false;
};

template < class T >
struct is_const<const T>
{
    const static bool value = true;
};

/* Templated class to determine if a variable is const or not */
template < class T >
class Is_Const
{
  public:
    bool operator()(T& x)
    {
        return (false);
        (void)x;
    }

    bool operator()(const T& x)
    {
        return (true);
        (void)x;
    }

    bool operator()(T* x)
    {
        return (false);
        (void)x;
    }

    bool operator()(const T* x)
    {
        return (true);
        (void)x;
    }
};

} // namespace ft

#endif
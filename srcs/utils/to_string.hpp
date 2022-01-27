/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_string.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:59:11 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 22:00:22 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>

namespace ft
{

// * Take a value of type T and converts it to a std::string */
template <class T>
std::string to_string(T n)
{
    std::ostringstream output;

    output << n;
    return (output.str());
}

} // namespace ft
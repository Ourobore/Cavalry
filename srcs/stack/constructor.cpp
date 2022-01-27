/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:06:00 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/27 11:34:56 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cavalry.hpp"

int main()
{
    {
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "--- Default constructor ---" << std::endl;

        NAMESPACE::stack<TYPE> s;
        ft::printStack(s, false);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
}
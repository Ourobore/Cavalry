/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_stack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:22:30 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:32:16 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Intermediate header to only include tested container when testing
#include "Cavalry.hpp"

#include "stack.hpp"
#include <stack>

// For some tests on underlying container
#include "vector.hpp"
#include <vector>
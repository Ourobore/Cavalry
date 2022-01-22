/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cavalry.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:05:09 by lchapren          #+#    #+#             */
/*   Updated: 2022/01/22 18:05:55 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_HPP
#define TESTS_HPP

#ifndef NAMESPACE
#define NAMESPACE std
#endif

#ifndef TYPE
#define TYPE int
#endif

#ifndef CAPACITY
#define CAPACITY true
#endif

#include <iostream>

// Tester includes
// #include "is_const.hpp"
#include "print_container.hpp"
#include "print_separator.hpp"
#include "print_traits.hpp"

// Containers includes
#include "map.hpp"
#include "stack.hpp"
#include "vector.hpp"
#include <map>
#include <stack>
#include <vector>

// Testing class
class Foo
{
  private:
    int bar;

  public:
    Foo()
        : bar(42){};
    Foo(const int n)
        : bar(n){};
    ~Foo(){};
    void helloWorld() const
    {
        std::cout << "Hello World!" << std::endl;
    };
    int getBar() const
    {
        return (bar);
    };
};

std::ostream& operator<<(std::ostream& o, Foo const& rhs)
{
    o << rhs.getBar();
    return o;
}

#endif
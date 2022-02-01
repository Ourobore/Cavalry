/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cavalry.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:05:09 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:29:42 by lchapren         ###   ########.fr       */
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
#include "to_string.hpp"

// Containers
#include <deque>
#include <list>

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
    bool operator==(const Foo& rhs) const
    {
        return (this->getBar() == rhs.getBar());
    }
    bool operator!=(const Foo& rhs) const
    {
        return !(*this == rhs);
    }
    bool operator<(const Foo& rhs) const
    {
        return (this->getBar() < rhs.getBar());
    }
    bool operator>(const Foo& rhs) const
    {
        return (!(*this < rhs) && *this != rhs);
    }
    bool operator<=(const Foo& rhs) const
    {
        return (*this < rhs || *this == rhs);
    }
    bool operator>=(const Foo& rhs) const
    {
        return (*this > rhs || *this == rhs);
    }
};

std::ostream& operator<<(std::ostream& o, Foo const& rhs)
{
    o << rhs.getBar();
    return o;
}

#endif
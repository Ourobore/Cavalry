/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:06:00 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:31:10 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_stack.hpp"

int main()
{
    {
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "--- Default constructor ---" << std::endl;

        NAMESPACE::stack<TYPE> s;
        ft::printStack(s);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }

    // ##################################################################################

    {
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "--- Specifying underlying container ---" << std::endl;
        std::cout << std::endl;

        std::cout << "NAMESPACE::vector ->" << std::endl;
        NAMESPACE::stack<TYPE, NAMESPACE::vector<TYPE> > s;
        ft::printStack(s);

        std::cout << std::endl;

        std::cout << "std::deque ->" << std::endl;
        NAMESPACE::stack<TYPE, std::deque<TYPE> > d;
        ft::printStack(d);

        std::cout << std::endl;

        std::cout << "std::list ->" << std::endl;
        NAMESPACE::stack<TYPE, std::list<TYPE> > l;
        ft::printStack(l);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }

    // ##################################################################################

    {
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "--- Giving existing container to stack ---" << std::endl;
        std::cout << std::endl;

        std::cout << "NAMESPACE::vector ->" << std::endl;
        NAMESPACE::vector<TYPE>                          vv;
        NAMESPACE::stack<TYPE, NAMESPACE::vector<TYPE> > t(vv);
        ft::printStack(t);

        std::cout << std::endl;

        std::cout << "NAMESPACE::vector ->" << std::endl;
        NAMESPACE::vector<TYPE>                          v(10, TYPE(42));
        NAMESPACE::stack<TYPE, NAMESPACE::vector<TYPE> > s(v);
        ft::printStack(s);

        std::cout << std::endl;

        std::cout << "std::deque ->" << std::endl;
        std::deque<TYPE>                          dd(10, TYPE(52));
        NAMESPACE::stack<TYPE, std::deque<TYPE> > d(dd);
        ft::printStack(d);

        std::cout << std::endl;

        std::cout << "std::list ->" << std::endl;
        std::list<TYPE>                          ll(10, TYPE(62));
        NAMESPACE::stack<TYPE, std::list<TYPE> > l(ll);
        ft::printStack(l);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capacity.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchapren <lchapren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 18:45:48 by lchapren          #+#    #+#             */
/*   Updated: 2022/02/01 18:25:21 by lchapren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_vector.hpp"

#ifndef LEAKS
#define LEAKS 1
#endif

int main()
{
    NAMESPACE::vector<TYPE> v;
    v.insert(v.begin(), 2000, TYPE(42));
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "--- Resize() same capacity ---" << std::endl;
    v.resize(v.capacity());
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "--- Resize() lower capacity ---" << std::endl;
    v.resize(v.capacity() - 1000);
    ft::printVector(v, CAPACITY);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "--- Resize() higher capacity ---" << std::endl;
    v.resize(2000000);
    ft::printVector(v, CAPACITY, false);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

// resize() / reserve() at max_size() with valgrind will crash, so need to deactivate following code
// Error message: new/new[] failed and should throw an exception, but Valgrind cannot throw exceptions and so is aborting instead.  Sorry.
#if LEAKS == 1

    std::cout << "--- Resize() vector.max_size() - 1 ---" << std::endl;
    try
    {
        v.resize(v.max_size() - 1);
        ft::printVector(v, CAPACITY, false);
        std::cout << "Not Thrown: Throws std::bad_alloc if allocator failed to allocate" << std::endl;
    }
    catch (std::bad_alloc)
    {
        ft::printVector(v, CAPACITY, false);
        std::cout << "Thrown: Throws std::bad_alloc if allocator failed to allocate" << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "--- Resize() vector.max_size() ---" << std::endl;
    try
    {
        v.resize(v.max_size());
        ft::printVector(v, CAPACITY, false);
        std::cout << "Not Thrown: Throws std::bad_alloc if allocator failed to allocate" << std::endl;
    }
    catch (std::bad_alloc)
    {
        ft::printVector(v, CAPACITY, false);
        std::cout << "Thrown: Throws std::bad_alloc if allocator failed to allocate" << std::endl;
    }

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "--- Resize() vector.max_size() + 1 ---" << std::endl;
    try
    {
        v.resize(v.max_size() + 1);
        ft::printVector(v, CAPACITY, false);
        std::cout << "Bad! Should throw at least a std::length_error!" << std::endl;
    }
    catch (std::bad_alloc)
    {
        ft::printVector(v, CAPACITY, false);
        std::cout << "Thrown: Throws std::bad_alloc if allocator failed to allocate" << std::endl;
    }
    catch (std::length_error)
    {
        ft::printVector(v, CAPACITY, false);
        std::cout << "Good! It throws std::length_error!" << std::endl;
    }

#endif
}
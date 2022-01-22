#include "Cavalry.hpp"

#ifndef LEAKS
#define LEAKS 1
#endif

int main()
{
    NAMESPACE::vector<TYPE> v;
    v.insert(v.begin(), 2000, TYPE(42));
    ft::printContainer(v);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "--- Resize() same capacity ---" << std::endl;
    v.resize(v.capacity());
    ft::printContainer(v);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "--- Resize() lower capacity ---" << std::endl;
    v.resize(v.capacity() - 1000);
    ft::printContainer(v);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    // ##################################################################################

    std::cout << "--- Resize() higher capacity ---" << std::endl;
    v.resize(2000000);
    ft::printContainer(v, true, false);

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
        ft::printContainer(v, true, false);
        std::cout << "Not Thrown: Throws std::bad_alloc if allocator failed to allocate" << std::endl;
    }
    catch (std::bad_alloc)
    {
        ft::printContainer(v, true, false);
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
        ft::printContainer(v, true, false);
        std::cout << "Not Thrown: Throws std::bad_alloc if allocator failed to allocate" << std::endl;
    }
    catch (std::bad_alloc)
    {
        ft::printContainer(v, true, false);
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
        ft::printContainer(v, true, false);
        std::cout << "Bad! Should throw at least a std::length_error!" << std::endl;
    }
    catch (std::bad_alloc)
    {
        ft::printContainer(v, true, false);
        std::cout << "Thrown: Throws std::bad_alloc if allocator failed to allocate" << std::endl;
    }
    catch (std::length_error)
    {
        ft::printContainer(v, true, false);
        std::cout << "Good! It throws std::length_error!" << std::endl;
    }

#endif
}
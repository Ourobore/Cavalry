#include "Cavalry.hpp"

int main()
{
    std::cout << "=== +1 size (push_back) ===" << std::endl;
    NAMESPACE::vector<TYPE> v;

    ft::printContainer(v);
    std::cout << "max_size(): " << v.max_size() << std::endl;
    v.push_back(TYPE(1));
    v.push_back(TYPE(2));

    ft::printContainer(v);
    for (size_t i = 0; i < 21; ++i)
        v.push_back(TYPE(i));

    ft::printContainer(v);

    int val = 21;
    while (v.size() != 424242)
    {
        v.push_back(TYPE(val));
        ++val;
    }

    std::cout << "Size: " << v.size() << std::endl;
    ft::printContainer(v, true, false);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== -1 size (push_back) ===" << std::endl;
    ft::printContainer(v, true, false);
    for (size_t i = 0; i < 21; ++i)
        v.pop_back();

    ft::printContainer(v, true, false);
    for (size_t i = 0; i < 100000; ++i)
        v.pop_back();

    ft::printContainer(v, true, false);
    while (v.size() != 20000)
        v.pop_back();

    ft::printContainer(v, true, false);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== resize() ===" << std::endl;
    std::cout << "--- Resize same size ---" << std::endl;
    v.resize(v.size());
    ft::printContainer(v, true, false);

    std::cout << "--- Resize smaller size ---" << std::endl;
    v.resize(100);
    ft::printContainer(v);

    std::cout << "--- Resize bigger size (no val) ---" << std::endl;
    v.resize(500);
    ft::printContainer(v);

    std::cout << "--- Resize bigger size (val) ---" << std::endl;
    v.resize(1000, 42);
    ft::printContainer(v);

    std::cout << "--- Resize bigger size (val) ---" << std::endl;
    v.resize(500000);
    ft::printContainer(v, true, false);
}
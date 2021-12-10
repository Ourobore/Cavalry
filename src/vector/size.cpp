#include "Tests.hpp"

int main()
{
    {
        std::cout << "=== +1 size (push_back) ===" << std::endl;
        NAMESPACE::vector<TYPE> v;

        ft::printContainer(v);
        std::cout << "max_size(): " << v.max_size() << std::endl;
        v.push_back(1);
        v.push_back(2);

        ft::printContainer(v);
        for (size_t i = 0; i < 21; ++i)
            v.push_back(i);

        ft::printContainer(v);

        int val = 21;
        while (v.size() != 424242)
        {
            v.push_back(val);
            ++val;
        }

        std::cout << "Size: " << v.size() << std::endl;
        ft::printContainer(v, true, false);
    }
}
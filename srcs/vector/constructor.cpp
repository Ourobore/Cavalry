#include "Cavalry.hpp"

int main()
{
    {
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "Empty vector (default constructor)" << std::endl;

        NAMESPACE::vector<TYPE> v;
        ft::printContainer(v);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################
    {
        std::cout << "Filled vector (fill constructor)" << std::endl;

        NAMESPACE::vector<TYPE> v0(21);
        ft::printContainer(v0);

        NAMESPACE::vector<TYPE> v3(21, 3);
        ft::printContainer(v3);

        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################

    NAMESPACE::vector<TYPE>           vec(42);
    NAMESPACE::vector<TYPE>::iterator it;

    int val = 0;
    for (it = vec.begin(); it != vec.end(); ++it, ++val)
        *it = val;
    ft::printContainer(vec);

    // #########################################################
    {
        std::cout << std::endl;
        ft::printSeparator();
        std::cout << std::endl;
        std::cout << "Range vector (range constructor)" << std::endl;

        NAMESPACE::vector<TYPE> v(vec.begin(), vec.end());
        ft::printContainer(v);

        NAMESPACE::vector<TYPE> vv(vec.begin() + 3, vec.end() - 6);
        ft::printContainer(vv);
        std::cout << std::endl;

        ft::printSeparator();
        std::cout << std::endl;
    }
    // #########################################################
    {
        std::cout << "Copied vector (copy constructor)" << std::endl;

        NAMESPACE::vector<TYPE> v(vec);
        ft::printContainer(v);
    }
}
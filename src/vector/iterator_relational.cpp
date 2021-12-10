#include "Tests.hpp"

template <class Iterator>
void relational_iterator(NAMESPACE::vector<TYPE> v, Iterator it)
{
    Iterator itt = v.begin() + 13;
    std::cout << "--- Relational operators (basics) ---" << std::endl;
    std::cout << "it == itt: " << (it == itt) << std::endl;
    std::cout << "it != itt: " << (it != itt) << std::endl;
    std::cout << "it < itt: " << (it < itt) << std::endl;
    std::cout << "it > itt: " << (it > itt) << std::endl;
    std::cout << "it <= itt: " << (it <= itt) << std::endl;
    std::cout << "it >= itt: " << (it >= itt) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Relational operators (it + n / it -n) ---" << std::endl;
    std::cout << *(it - 35) << " | " << *(itt + 34) << std::endl;
    std::cout << &*(it - 35) << " | " << &*(itt + 34) << std::endl;

    std::cout << "it == itt: " << (it - 35 == itt + 34) << std::endl;
    std::cout << "it != itt: " << (it - 35 != itt + 34) << std::endl;
    std::cout << "it < itt: " << (it - 34 < itt + 35) << std::endl;
    std::cout << "it > itt: " << (it - 34 > itt + 35) << std::endl;
    std::cout << "it <= itt: " << (it - 35 <= itt + 34) << std::endl;
    std::cout << "it >= itt: " << (it - 34 >= itt + 35) << std::endl;

    std::cout << std::endl;

    std::cout << "--- Relational operators (begin()) ---" << std::endl;
    std::cout << "it == itt: " << (v.begin() == v.begin()) << std::endl;
    std::cout << "it != itt: " << (v.begin() != v.begin()) << std::endl;
    std::cout << "it < itt: " << (v.begin() < v.begin()) << std::endl;
    std::cout << "it > itt: " << (v.begin() > v.begin()) << std::endl;
    std::cout << "it <= itt: " << (v.begin() <= v.begin()) << std::endl;
    std::cout << "it >= itt: " << (v.begin() >= v.begin()) << std::endl;
}

int main()
{
    NAMESPACE::vector<TYPE> v;
    for (size_t i = 36; i < 126; ++i)
        v.push_back(TYPE(i));
    ft::printContainer(v);

    NAMESPACE::vector<TYPE>::iterator it = v.end() - 8;
    NAMESPACE::vector<TYPE>::iterator cit = v.end() - 8;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const iterator ===" << std::endl;
    relational_iterator(v, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const iterator ===" << std::endl;
    relational_iterator(v, cit);
}
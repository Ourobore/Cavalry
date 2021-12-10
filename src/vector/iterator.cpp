#include "Tests.hpp"

template <class Iterator>
void test_iterator(NAMESPACE::vector<TYPE> v, Iterator it)
{
    std::cout << "--- Increments and decrements ---" << std::endl;
    std::cout << "Prefix increment (++it): " << *it << " | " << *++it << std::endl;
    std::cout << "Postfix increment (it++): " << *it << " | " << *it++ << " | " << *it << std::endl;
    std::cout << "Prefix decrement (--it): " << *it << " | " << *--it << std::endl;
    std::cout << "Postfix decrement (it--): " << *it << " | " << *it-- << " | " << *it << std::endl;

    std::cout << std::endl;

    std::cout << "--- Printing via iterators (ascending) ---" << std::endl;
    for (it = v.begin(); it != v.end(); ++it)
        std::cout << " " << *it << " ";
    std::cout << std::endl
              << std::endl;

    std::cout << "--- Printing via iterators (descending) ---" << std::endl;
    for (it = v.end() - 1; it != v.begin(); --it)
        std::cout << " " << *it << " ";
    std::cout << " " << *it << " ";
    std::cout << std::endl
              << std::endl;

    std::cout << "--- Modifying values via iterator (+= then -=) ---" << std::endl;
    std::cout << "Before ->" << std::endl;
    ft::printContainer(v);

    for (it = v.begin(); it != v.end(); ++it)
        (*it) += 2;
    for (it = v.begin(); it != v.end(); ++it)
        (*it) -= 1;

    std::cout << std::endl;
    std::cout << "After ->" << std::endl;
    ft::printContainer(v);

    std::cout << std::endl;
    std::cout << "--- Iterator arithmetics---" << std::endl;
    it = v.begin() + 42;
    NAMESPACE::vector<TYPE>::const_iterator cit = v.begin() + 7;

    std::cout << "it + n: " << *(it + 9) << std::endl;
    std::cout << "n + it: " << *(9 + it) << std::endl;
    std::cout << "it - n: " << *(it - 9) << std::endl;
    std::cout << "it - it: " << it - v.begin() << std::endl;
    std::cout << "const it - it: " << cit - it << std::endl;
    std::cout << "it - const it: " << it - cit << std::endl;
}

int main()
{
    NAMESPACE::vector<TYPE> v;
    for (size_t i = 36; i < 126; ++i)
        v.push_back(TYPE(i));
    ft::printContainer(v);

    NAMESPACE::vector<TYPE>::iterator it = v.begin() + 10;
    NAMESPACE::vector<TYPE>::iterator cit = v.begin() + 10;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const iterator ===" << std::endl;
    test_iterator(v, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const iterator ===" << std::endl;
    test_iterator(v, cit);
}
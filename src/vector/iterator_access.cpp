#include "Tests.hpp"

template <class Iterator>
void iterator_access(NAMESPACE::vector<Foo> v, Iterator it)
{
    std::cout << "--- Dereference access ---" << std::endl;
    std::cout << "it->function(): ";
    it->helloWorld();
    std::cout << "it->function(): " << (*it).getBar() << std::endl;
    std::cout << "(it + n)->function(): " << (*(it + 21)).getBar() << std::endl;
    std::cout << "(it - n)->function(): " << (*(it - 3)).getBar() << std::endl;

    std::cout << std::endl;

    std::cout << "--- Arrow access ---" << std::endl;
    std::cout << "it->function(): ";
    it->helloWorld();
    std::cout << "it->function(): " << it->getBar() << std::endl;
    std::cout << "(it + n)->function(): " << (it + 21)->getBar() << std::endl;
    std::cout << "(it - n)->function(): " << (it - 3)->getBar() << std::endl;

    std::cout << std::endl;

    std::cout << "--- [] access ---" << std::endl;
    it = v.begin();
    std::cout << "it->function(): ";
    it[3].helloWorld();
    std::cout << "it->function(): " << it[7].getBar() << std::endl;
    std::cout << "(it + n)->function(): " << (it + 21)[5].getBar() << std::endl;
    std::cout << "(it - n)->function(): " << (it - 3)[15].getBar() << std::endl;
}

int main()
{
    NAMESPACE::vector<Foo > vfoo;
    for (size_t i = 0; i < 50; ++i)
        vfoo.push_back(Foo(i));
    ft::printContainer(vfoo);

    NAMESPACE::vector<Foo>::iterator it = vfoo.begin() + 21;
    NAMESPACE::vector<Foo>::iterator cit = vfoo.begin() + 21;

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Non const iterator ===" << std::endl;
    iterator_access(vfoo, it);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "=== Const iterator ===" << std::endl;
    iterator_access(vfoo, cit);
}
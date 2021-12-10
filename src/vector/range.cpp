#include "Tests.hpp"

int main()
{
    std::cout << "===== v =====";
    NAMESPACE::vector<TYPE> v;
    v.insert(v.begin(), 2000, TYPE(42));
    NAMESPACE::vector<TYPE>::const_iterator cit_begin = v.begin();
    std::cout << *cit_begin << std::endl;

    std::cout << *++cit_begin << std::endl;

    ft::printContainer(v);

    v.erase(v.begin() + 420, v.end() - 750);
    ft::printContainer(v);

    v.insert(v.begin() + 250, v.begin() + 687, v.end() - 156);
    ft::printContainer(v);

    // #########################################################

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "===== v_copy =====";
    NAMESPACE::vector<TYPE> v_copy(v);
    ft::printContainer(v_copy);

    v_copy.insert(v_copy.end(), v.begin() + 50, v.begin() + 150);
    ft::printContainer(v_copy);

    v_copy.erase(v_copy.begin(), v_copy.end());
    ft::printContainer(v_copy);
    ft::printContainer(v);

    // #########################################################

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    std::cout << "===== v_assign =====";
    NAMESPACE::vector<TYPE> v_assign;
    v.assign(v.begin(), v.end());

    ft::printContainer(v);

    v.assign(v_copy.begin() + 65, v_copy.begin() + 999);
    ft::printContainer(v);
}

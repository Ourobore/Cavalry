#include "Cavalry.hpp"

static TYPE value = TYPE(27);

void insert_single(NAMESPACE::vector<TYPE>& v)
{
    std::cout << "--- Insert: single element ---" << std::endl;
    std::cout << "At begin():" << std::endl;
    v.insert(v.begin(), ++value);
    v.insert(v.begin(), ++value);
    ft::printContainer(v);

    std::cout << std::endl;

    std::cout << "At begin() + n:" << std::endl;
    v.insert(v.begin() + 1, ++value);
    v.insert(v.begin() + 1, ++value);
    v.insert(v.begin() + 3, ++value);
    v.insert(v.begin() + (v.size() - 1), ++value);
    ft::printContainer(v);

    std::cout << std::endl;

    std::cout << "At end() - n:" << std::endl;
    v.insert(v.end() - 3, ++value);
    v.insert(v.end() - 3, ++value);
    v.insert(v.end() - 4, ++value);
    v.insert(v.end() - v.size(), ++value);
    ft::printContainer(v);

    std::cout << std::endl;

    {
        NAMESPACE::vector<TYPE>::iterator it = v.begin() + (v.size() / 2);
        std::cout << "At position:" << std::endl;
        std::cout << "Position it = " << *it << std::endl;
        v.insert(it, ++value);
        v.insert(it, ++value);
        v.insert(it, ++value);
        ft::printContainer(v);
    }

    std::cout << std::endl;

    {
        NAMESPACE::vector<TYPE>::iterator it = v.begin() + (v.size() / 2);
        std::cout << "At position + n:" << std::endl;
        std::cout << "Position it = " << *it << std::endl;
        v.insert(it + 2, ++value);
        v.insert(it + 2, ++value);
        v.insert(it + 3, ++value);
        v.insert(it + ((v.end() - v.begin()) / 3), ++value);
        ft::printContainer(v);
    }

    std::cout << std::endl;

    {
        NAMESPACE::vector<TYPE>::iterator it = v.begin() + (v.size() / 2);
        std::cout << "At position - n:" << std::endl;
        std::cout << "Position it = " << *it << std::endl;
        v.insert(it - 2, ++value);
        v.insert(it - 1, ++value);
        v.insert(it - 3, ++value);
        v.insert(it - ((v.end() - v.begin()) / 3), ++value);
        ft::printContainer(v);
    }
}

void insert_fill(NAMESPACE::vector<TYPE>& v)
{
    std::cout << "--- Insert: fill element ---" << std::endl;
    std::cout << "At begin():" << std::endl;
    v.insert(v.begin(), 3, TYPE(42));
    v.insert(v.begin(), 2, TYPE(21));
    ft::printContainer(v);

    std::cout << std::endl;

    std::cout << "At end():" << std::endl;
    v.insert(v.end(), 3, TYPE(33));
    v.insert(v.end(), 2, TYPE(31));
    ft::printContainer(v);

    std::cout << std::endl;

    // Must reserve before, because if reallocation, iterator is no longer valid
    v.reserve(50);
    NAMESPACE::vector<TYPE>::iterator it = v.begin() + (v.size() / 2);
    std::cout << "At position:" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it, 3, TYPE(98));
    v.insert(it, 2, TYPE(66));
    ft::printContainer(v);

    std::cout << std::endl;
    std::cout << "At position + n:" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it + 5, 3, TYPE(46));
    v.insert(it + 2, 2, TYPE(65));
    ft::printContainer(v);

    std::cout << std::endl;

    std::cout << "At position - n:" << std::endl;
    std::cout << "Position it = " << *it << std::endl;
    v.insert(it - 5, 3, TYPE(100));
    v.insert(it - 2, 2, TYPE(200));
    ft::printContainer(v);
}

void insert_range(NAMESPACE::vector<TYPE>& v)
{
    NAMESPACE::vector<TYPE>::iterator it = v.begin() + (v.size() / 2);
    std::cout << "--- Insert: range ---" << std::endl;
    std::cout << "Empty range:" << std::endl;
    v.insert(v.begin(), v.begin(), v.begin());
    v.insert(v.end(), v.begin(), v.begin());
    v.insert(v.end(), v.end(), v.end());
    v.insert(v.begin(), v.end(), v.end());
    v.insert(it, v.begin(), v.begin());
    v.insert(it, v.end(), v.end());
    ft::printContainer(v);

    std::cout << std::endl;

    it = v.begin() + (v.size() / 2);
    std::cout << "Insert at begin():" << std::endl;
    v.insert(v.begin(), v.begin(), v.begin() + 5);
    // v.insert(v.begin(), v.begin() + 7, v.begin() + 15);
    // v.insert(v.begin(), v.end() - 3, v.end());
    // v.insert(v.begin(), v.end() - 13, v.end() - 9);
    // v.insert(v.begin(), it, it + 3);
    // v.insert(v.begin(), it - 5, it);
    // v.insert(v.begin(), it - 4, it + 6);
    ft::printContainer(v);
}

int main()
{
    NAMESPACE::vector<TYPE> v;

    insert_single(v);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    insert_fill(v);

    std::cout << std::endl;
    ft::printSeparator();
    std::cout << std::endl;

    insert_range(v);
}

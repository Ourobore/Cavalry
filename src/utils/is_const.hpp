#ifndef IS_CONST_HPP
#define IS_CONST_HPP

namespace ft
{

/* Templated struct to determinate if a type is const or not */
template < class T >
struct is_const
{
    const static bool value = false;
};

template < class T >
struct is_const<const T>
{
    const static bool value = true;
};

} // namespace ft

#endif
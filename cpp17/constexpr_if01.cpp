#include <iostream>
#include <memory>

// constexpr if can be used to replace several tricks that were already done:
// - SFINAE technique to remove not matching function overrides from the overload set
// - you might want to look at places with C++14's std::enable_if - that should be easily replaced by constexpr if.
// - Tag dispatch
// Take a look at  https://www.codingame.com/playgrounds/2205/7-features-of-c17-that-will-simplify-your-code/constexpr-if

template <typename T>
auto get_value(T t) {
    if constexpr (std::is_pointer_v<T>)
        return *t;
    else
        return t;
}

int main()
{
     int i = 9;
     auto *ip = &i; 

     std::cout << get_value(i) << '\n';
     std::cout << get_value(ip) << '\n';

     return 0;
}

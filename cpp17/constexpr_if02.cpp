#include <iostream>
#include <memory>

template<int N>
constexpr int fibonacci() {
    return fibonacci<N-1>() + fibonacci<N-2>();
}

template<>
constexpr int fibonacci<1>() { 
    return 1;
}

template<>
constexpr int fibonacci<0>() {
    return 0;
}

// With C++17 using if constexpr
template<int N>
constexpr int fibonacci2() {
    if constexpr (N>=2)
        return fibonacci2<N-1>() + fibonacci2<N-2>();
    else
        return N;
}

int main()
{
     std::cout << fibonacci<4>() << '\n';
     std::cout << fibonacci2<4>() << '\n';

     return 0;
}

#include <iostream>

// Before C++17
template <typename T, T value>
constexpr T Constant = value;

constexpr auto ONE = Constant<int, 1>;

// with C++17 it is simpler
template <auto value>
constexpr auto Constant2 = value;
constexpr auto TWO = Constant2<2>;

int main() {
    std::cout << ONE << '\n';
    std::cout << TWO << '\n';

    return 0;
}

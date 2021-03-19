#include <iostream>
#include <tuple>

int main() {
    auto t = std::make_tuple(1, 2, 3);
    auto& [a, b, c] = t;

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';

    return 0;
}

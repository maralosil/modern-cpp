#include <iostream>

auto SumCpp11() {
    return 0;
}

template <typename T, typename... Ts>
auto SumCpp11(T t, Ts... ts) {
    return t + SumCpp11(ts...);
}

// Using folding expressions
template<typename ...Args>
auto SumCpp17(Args ...args) {
    return (args + ... + 0); 
}

// or even:

template<typename ...Args>
auto Sum2Cpp17(Args ...args) {
    return (args + ...);
}

int main() {
    std::cout << SumCpp11(1, 2, 3, 4, 5, 6, 7) << '\n';
    std::cout << SumCpp17(1, 2, 3, 4, 5, 6, 7) << '\n';
    std::cout << Sum2Cpp17(1, 2, 3, 4, 5, 6, 7) << '\n';

    return 0;
}

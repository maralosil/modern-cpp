#include <iostream>
#include <ranges>
#include <vector>
#include <typeinfo>

#include "type.h"

int main() {

    auto numbers = {1, 2, 3, 4};
    auto even = [] (int value) { return value % 2 == 0; };
    auto even2 = [] (int value) { return value % 2 == 0; };
    auto result { numbers | std::views::filter(even) };

    std::cout << "type numbers = " << type(numbers) << '\n';
    std::cout << "type even = " << type(even) << '\n';
    std::cout << "type even2 = " << type(even2) << '\n';
    std::cout << "type result = " << type(result) << '\n';

    for (auto& n : result) {
        std::cout << n << '\n';
    }

    return 0;
}

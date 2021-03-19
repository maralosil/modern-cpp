#include <iostream>
#include <ranges>
#include <vector>

int main() {

    auto numbers = {1, 2, 3, 4};
    auto even = [] (int value) { return value % 2 == 0; };
    auto result { numbers | std::views::filter(even) };

    for (auto& n : result) {
        std::cout << n << '\n';
    }

    return 0;
}

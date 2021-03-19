#include <iostream>
#include <concepts>
#include <vector>
#include <numeric>
#include <functional>

template <typename T>
concept addable = requires (T t) {
    {t + t} -> std::same_as<T>;
};

template <typename T>
requires addable<T>
T add(const std::vector<T> &v) {
    return std::accumulate(std::cbegin(v), std::cend(v), T{}, std::plus<T>());
}

int main() {
    std::vector<int> v {1, 2, 3, 4};
    std::cout << add(v) <<  std::endl; 
    return 0;
}

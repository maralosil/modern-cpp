#include <iostream>
#include <set>
#include <tuple>

int main() {
    std::set<int> s {1, 2, 3, 4, 5};
    std::set<int>::iterator iter1;
    bool inserted1;

    // s.insert returns a pair(iter, bool)
    // Before C++17 we could use std::tie
    std::tie(iter1, inserted1) = s.insert(6);
    if (inserted1) {
        std::cout << *iter1 << " has been inserted\n";
    }

    // With C++17 we can use structured bindings
    auto [iter2, inserted2] = s.insert(7);
    if (inserted2) {
        std::cout << *iter2 << " has been inserted\n";
    }

    return 0;
}

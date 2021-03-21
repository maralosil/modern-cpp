#include <utility>
#include <tuple>
#include <iostream>

int main() {
    // Before C++17
    std::pair<int, double> p1(0, 0.0);
    std::tuple<int, int, int> t1(1, 2, 3);

    std::cout << p1.first
              << ","
              << p1.second
              << '\n';

    std::cout << std::get<0>(t1)
              << ","
              << std::get<1>(t1)
              << "," 
              << std::get<2>(t1)
              << '\n';

    // C++17 added argument deduction for class templates
    std::pair p2(0, 0.0);
    std::tuple t2(1, 2, 3);

    std::cout << p2.first
              << ","
              << p2.second
              << '\n';

    std::cout << std::get<0>(t2)
              << ","
              << std::get<1>(t2)
              << "," 
              << std::get<2>(t2)
              << '\n';

    return 0;
}

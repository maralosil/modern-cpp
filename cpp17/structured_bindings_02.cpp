#include <iostream>
#include <map>
#include <string>
#include <tuple>

int main() {
    const std::map<std::string, std::string> map {
        { "Poland", "Warsaw"},
        { "USA", "Washington"},
        { "France", "Paris"},
        { "UK", "London"},
        { "Germany", "Berlin"}
    };

    for (const auto& [country, capital] : map) {
        std:: cout << country << " : " << capital << '\n';
    }

    return 0;
}

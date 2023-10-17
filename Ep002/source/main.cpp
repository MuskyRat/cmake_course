#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add( T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Hello, nigga!" << " The number is: " << add(3, 4) << std::endl;
}
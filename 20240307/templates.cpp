#include <iostream>

// Base case for the recursive template function
void print() {
    std::cout << std::endl;
}

// Variadic template function to print all arguments
template<typename T, typename... Args>
void print(T first, Args... args) {
    std::cout << first << " ";
    print(args...); // Recursive call with remaining arguments
}

int main() {
    print(1, 2.5, "Hello", 'a');
    return 0;
}
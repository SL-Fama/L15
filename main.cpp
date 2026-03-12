#include <iostream>
#include "dmath.hpp"
#include "smath.hpp"

int main() {
    std::cout << "Math Operations:\n" << std::endl;
    std::cout << "SMath Lib:" << std::endl;
    std::cout << "Add 5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "Su 5 - 3 = " << sub(5, 3) << std::endl;
    std::cout << "Mult 5 * 3 = " << mult(5, 3) << std::endl;
    std::cout << "Div 5 / 3 = " << divide(5, 3) << std::endl;
    std::cout << "\nDMath Lib:" << std::endl;
    std::cout << "Logarithm 5 = " << logarithm(5) << std::endl;
    std::cout << "Factorial 5 = " << factorial(5) << std::endl;
    return 0;
}
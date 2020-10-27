//
// Created by slaventy on 26.10.2020.
//
#include "complex.hpp"
int main(){
    std::cout << "Enter complex number a - real, b - imag" << std::endl;
    Complex c;
    std::cin >> c;
    Complex number = Complex(1, 2);
    std::string s = (c == number)? "numbers are equal":"numbers are not equal";
    std::cout << c << " == " << number << '?' << std::endl;
    std::cout << s << std::endl;
    //test binar operators
    std::cout << c + number << std::endl;
    std::cout << c - number << std::endl;
    std::cout << c * number << std::endl;
    //test unar operators
    c += number;
    std::cout << c << std::endl;
    c *= number;
    std::cout << c << std::endl;
    c -= number;
    std::cout << c << std::endl;
    double module = c.abs();
    //test module
    std::cout << "Module of " << c << " = ";
    std::cout << module << std::endl;


    return 0;
}


//
// Created by slaventy on 26.10.2020.
//

#ifndef UNTITLED1_COMPLEX_HPP
#define UNTITLED1_COMPLEX_HPP
#include <iostream>
#include <cmath>
#include <string>

class Complex {
private:
    double real; //Re
    double imag; //Im
public:
    //constructor
    Complex(double real = 0.0, double imag = 0.0);
    //getters
    double get_real() const;
    double get_imag() const;
    //setters
    void set_num(double re, double im);
    void set_real(double re);
    void set_imag(double im);


    Complex& add(const Complex &num);
    Complex& sub(const Complex &num);
    Complex& mul(const Complex &num);
    double abs() const;
    //I/O operators
    friend std::ostream& operator << (std::ostream &out, const Complex &num);
    friend std::istream& operator >> (std::istream &inp, Complex &num);
    //equality operators
    bool operator == (const Complex &b) const;
    bool operator != (const Complex &b) const;

    Complex operator +(const Complex &num) const;
    Complex operator *(const Complex &num) const;
    Complex operator -(const Complex &num) const;


    Complex operator +=(const Complex &num);
    Complex operator -=(const Complex &num);
    Complex operator *=(const Complex &num);
};
#endif //UNTITLED1_COMPLEX_HPP


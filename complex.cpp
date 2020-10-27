#include "complex.hpp"


Complex::Complex(double real, double imag) :
        real(real), imag(imag)
{
}
//get real part
double Complex::get_real() const {
    return real;
}
//get imag part
double Complex::get_imag() const {
    return imag;
}
//set real and imag
void Complex::set_num(double re, double im){
    real = re;
    imag = im;
}
void Complex::set_real(double re){
    real = re;
}
void Complex::set_imag(double im){
    imag = im;
}

Complex& Complex::add(const Complex &num){
    real += num.real;
    imag += num.imag;
    return *this;
}
Complex& Complex::sub(const Complex &num){
    real -= num.real;
    imag -= num.imag;
    return *this;
}
Complex& Complex::mul(const Complex &num){
    double a = this->real;
    double b = this->imag;
    double c = num.real;
    double d = num.imag;
    real = a*c - b*d;
    imag = a*d + c*b;
    return *this;
}

double Complex::abs() const{
    return sqrt(real*real + imag*imag);
}


std::ostream& operator << (std::ostream &out, const Complex &num){

        char sign = (num.imag >= 0)? '+': '-';
        double im = (num.imag >= 0)? num.imag : -num.imag;
        out << num.real << sign << im << 'i';
    return out;
}

std::istream& operator >> (std::istream &inp, Complex &num){
    inp >> num.real >> num.imag;
    return inp;
}
bool Complex::operator == (const Complex &b) const{
    return (real == b.real)&&(imag == b.imag);
}
bool Complex::operator != (const Complex &b) const{
    return !(*this == b);
}

Complex Complex::operator +(const Complex &num) const{
    Complex copy = *this;
    return copy.add(num);
}
Complex Complex::operator -(const Complex &num) const{
    Complex copy = *this;
    return copy.sub(num);
}
Complex Complex::operator *(const Complex &num) const{
    Complex copy = *this;
    return copy.mul(num);
}
Complex Complex::operator +=(const Complex &num){
    this->add(num);
    return *this;
}
Complex Complex::operator -=(const Complex &num){
    this->sub(num);
    return *this;
}
Complex Complex::operator *=(const Complex &num){
    this->mul(num);
    return *this;
}




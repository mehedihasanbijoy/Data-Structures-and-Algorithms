#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex(){
    this->real = 0;
    this->imaginary = 0;
}

Complex::Complex(double real, double imaginary){
    this->real = real;
    this->imaginary = imaginary;
}

void Complex::Print(){
    cout << "Real = " << this->real << \
    " and Imaginary = " << this->imaginary << endl;
}

Complex Complex::operator+(Complex comp){
    Complex temp;
    temp.real = this->real + comp.real;
    temp.imaginary = this->imaginary + comp.imaginary;
    return temp;
}

Complex Complex::operator-(Complex comp){
    Complex temp;
    temp.real = this->real - comp.real;
    temp.imaginary = this->imaginary - comp.imaginary;
    return temp;
}

Complex Complex::operator*(Complex comp){
    Complex temp;
    temp.real = this->real * comp.real;
    temp.imaginary = this->imaginary * comp.imaginary;
    return temp;
}

Complex Complex::operator/(Complex comp){
    Complex temp;
    temp.real = this->real / comp.real;
    temp.imaginary = this->imaginary / comp.imaginary;
    return temp;
}

bool Complex::operator==(Complex comp){
    if(this->real == comp.real && this->imaginary == comp.imaginary){
        return true;
    }else{
        return false;
    }
}

bool Complex::operator!=(Complex comp){
    if(this->real != comp.real || this->imaginary != comp.imaginary){
        return true;
    }else{
        return false;
    }
}

bool Complex::operator>(Complex comp){
    if(this->real > comp.real && this->imaginary > comp.imaginary){
        return true;
    }else{
        return false;
    }
}

bool Complex::operator<(Complex comp){
    if(this->real < comp.real && this->imaginary < comp.imaginary){
        return true;
    }else{
        return false;
    }
}

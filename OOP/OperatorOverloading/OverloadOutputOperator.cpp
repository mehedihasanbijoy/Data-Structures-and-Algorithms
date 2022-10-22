#include <iostream>
using namespace std;


class Complex{
    public:
        double real, imaginary;

        Complex(double real, double imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }
};


ostream& operator<<(ostream &OUT, Complex &c){
    OUT << "Real = " << c.real << ", Imaginary = " << c.imaginary << endl;
    return OUT;
}


int main()
{
    Complex c1 = Complex(2, -1);
    cout << c1;
    return 0;
}

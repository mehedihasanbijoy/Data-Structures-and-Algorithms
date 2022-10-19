#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    Complex comp1 = Complex();
    comp1.Print();

    Complex comp2 = Complex(2, -10);
    comp2.Print();

    Complex comp3 = Complex(5, -1);
    comp3.Print();

    cout << endl;

    cout << "+ ";
    Complex comp4 = comp2 + comp3;
    comp4.Print();

    cout << "- ";
    Complex comp5 = comp2 - comp3;
    comp5.Print();

    cout << "* ";
    Complex comp6 = comp2 * comp3;
    comp6.Print();

    cout << "/ ";
    Complex comp7 = comp2 / comp3;
    comp7.Print();

    cout << "== ";
    if(comp2 == comp3){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    cout << "!= ";
    if(comp2 != comp3){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    cout << "> ";
    if(comp2 > comp3){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    cout << "< ";
    if(comp2 < comp3){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    return 0;
}

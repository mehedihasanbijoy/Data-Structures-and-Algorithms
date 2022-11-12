#include <iostream>
using namespace std;

int main()
{
    int a = 10; // normal variable
    int *b = &a; // pointer variable
    int &c = a; // reference variable

    cout << "&a = " << &a << endl \
         << "&b = " << &b << endl \
         << "&c = " << &c << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << " | *b = " << *b << endl;
    cout << "c = " << c << endl;

    cout << "\nDynamic Memory Allocation" << endl;
    int *dynA = new int;
    cout << "&dynA = " << &dynA << endl;
    cout << "dynA = " << dynA << endl;
    cout << "*dynA = " << *dynA << endl;
    *dynA = 20;
    cout << "\n&dynA = " << &dynA << endl;
    cout << "dynA = " << dynA << endl;
    cout << "*dynA = " << *dynA << endl;
    delete dynA;
    cout << "\n&dynA = " << &dynA << endl;
    cout << "dynA = " << dynA << endl;
    cout << "*dynA = " << *dynA << endl;

    return 0;
}

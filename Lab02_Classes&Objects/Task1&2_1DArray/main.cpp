#include <iostream>
#include "dynarr.h"
using namespace std;


int main()
{
    DynArr darray1 = DynArr();
    DynArr darray2 = DynArr(5);

    cout << "Before assigning values: " << endl;
    for(int i=0; i<5; i++){
        cout << darray2.GetValue(i) << ", ";
        // assigning value
        darray2.SetValue(i, 10+i);
    }
    cout << endl;

    cout << "After assigning values: " << endl;
    for(int i=0; i<5; i++){
        cout << darray2.GetValue(i) << ", ";
    }
    cout << endl;

    cout << "Reallocating memory" << endl;
    darray2.Allocate(10);

    cout << "After reallocation" << endl;
    for(int i=0; i<10; i++){
        cout << darray2.GetValue(i) << ", ";
    }
    cout << endl;

    return 0;
}

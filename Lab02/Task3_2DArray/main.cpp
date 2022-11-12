#include <iostream>
#include "dynarr.h"
using namespace std;


int main()
{
    DynArr darray1 = DynArr();

    int rows, cols, newRows, newCols, i, j;

    cout << "Enter rows and cols: ";
    cin >> rows >> cols;

    DynArr darray2 = DynArr(rows, cols);


    cout << "Before assigning values: " << endl;
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            cout << darray2.GetValue(i, j) << "\t";

            // assigning value
            darray2.SetValue(i, j, 10+j);
        }
        cout << endl;
    }
    cout << endl;


    cout << "After assigning values: " << endl;
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            cout << darray2.GetValue(i, j) << "\t";
        }
        cout << endl;
    }
    cout << endl;


    cout << "\nEnter new rows and cols: ";
    cin >> newRows >> newCols;


    cout << "\nReallocating memory...\n" << endl;
    darray2.Allocate(newRows, newCols);


    cout << "After reallocation: " << endl;
    for(i=0; i<newRows; i++){
        for(j=0; j<newCols; j++){
            cout << darray2.GetValue(i, j) << "\t";
        }
        cout << endl;
    }
    cout << endl;


    return 0;
}

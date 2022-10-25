#include <iostream>
using namespace std;

int main()
{
    int s, i;
    cout << "Enter array size: ";
    cin >> s;

    int *arr1d = new int[s];

    for(i=0; i<s; i++){
        cout << "Enter value at idx-" << i << ": ";
        cin >> *(arr1d + i);
    }

    cout << "\nValues in the array are: ";
    for(i=0; i<s; i++){
        cout << *(arr1d + i) << ", ";
    }
    cout << endl;

    delete [] arr1d;

    cout << "\n(After deallocation) Values in the array are: ";
    for(i=0; i<s; i++){
        cout << *(arr1d + i) << ", ";
    }
    cout << endl;

    return 0;
}
